using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PersonMover : MonoBehaviour {

	// two queues
	// if the person is the active, it records what the player does in done.

	// if it is ai, then it takes actions out of the act queue, places them on done.
	// if act empty, then make a random action, place it in done

	// on restart, take the done, put in act.

	// Use this for initialization

	public bool active;
	public bool responsible;
	public bool settled;
	public bool moving;
	public float easing = 0.2f;

	private List<Vector2> done = new List<Vector2>();
	private List<Vector2> act = new List<Vector2>();
	public List<PersonMover> others;

	private Color mycolor;

	public Vector2 myloc;
	public Vector3 moveloc;
	public Vector2 firstloc;
	public Vector2 lastmove;

	private Vector3 start;

	void Start () {
		start = transform.position;
		firstloc = myloc;
		moving = false;
		settled = true;
		mycolor = GetComponent<Renderer>().material.color;
	}
	
	// Update is called once per frame
	void Update () {
		if (moving) {
			transform.position = Vector3.Lerp(transform.position, moveloc, easing);
			if ((transform.position - moveloc).magnitude < 0.01) {
				moving = false;
				transform.position = moveloc;
				if (responsible) {
					responsible = false;
					LevelManager.S.CountUp();
				}
			}
		} else if (active && settled) {
			if (!LevelManager.S.ValidSpace(myloc)) {
				LevelManager.S.count = LevelManager.S.time;
			} else {
				Vector2 p = Vector2.zero;
				if (Input.GetKeyDown("w") || Input.GetKeyDown("up")) {
					p = new Vector2(0, 1);
				} else if (Input.GetKeyDown("a") || Input.GetKeyDown("left")) {
					p = new Vector2(-1, 0);
				} else if (Input.GetKeyDown("s") || Input.GetKeyDown("down")) {
					p = new Vector2(0, -1);
				} else if (Input.GetKeyDown("d") || Input.GetKeyDown("right")) {
					p = new Vector2(1, 0);
				}
				if (p != Vector2.zero) {					
					MakeMove(p);
					GetComponent<AudioSource>().Play();
					responsible = true;
					done.Add(p);
					foreach (PersonMover pm in others) {
						pm.React();
					}
				}
			}
		} 
	}

	void React() {
		if (LevelManager.S.ValidSpace(myloc)) {
			Vector2 p = new Vector2(0, 0);
			if (act.Count > 0) {
				p = act[0];
				print(p);
				act.RemoveAt(0);
			} else {
				bool valid = false;
				while (!valid) {
					if (Random.value > 0.5) {
						p = new Vector2(0, 1);
					} else {
						p = new Vector2(1, 0);
					}
					if (Random.value > 0.5) {
						p *= -1;
					}
					valid = LevelManager.S.ValidSpace(myloc + p);
				}
			}
			MakeMove(p);
			done.Add(p);
		}
	}

	public void Reset() {
		act = done;
		done = new List<Vector2>();
		transform.position = start;
		print(act.Count);
		myloc = firstloc;
	}

	public void Collision() {
		if (mycolor == Color.red) {
			Vector2 dir = new Vector2(-lastmove.y, lastmove.x);
			Vector2 dir2 = new Vector2(-dir.y, dir.x);
			MakeMove(dir2);
		} else if (mycolor == Color.blue) {
			Vector2 dir = new Vector2(-lastmove.y, lastmove.x);
			Vector2 dir2 = new Vector2(-dir.y, dir.x);
			MakeMove(dir2 * 2);
		} else if (mycolor == Color.green) {
			Vector2 dir = new Vector2(-lastmove.y, lastmove.x);
			MakeMove(dir * 2);
		} else if (mycolor == Color.yellow) {
			Vector2 dir = new Vector2(-lastmove.y, lastmove.x);
			Vector2 dir2 = new Vector2(-dir.y, dir.x);
			MakeMove(dir2 / 4);
		}
	}

	public void MakeMove(Vector2 p) {
		if (mycolor == Color.yellow) {
			p *= 2;
		}
		lastmove = p;
		moveloc = new Vector3(transform.position.x + p.x, transform.position.y + p.y, transform.position.z);
		moving = true;
		myloc += p;
	}
}
