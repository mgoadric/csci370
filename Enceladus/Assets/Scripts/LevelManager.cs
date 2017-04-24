using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System.Text;
using System;

public class LevelManager : MonoBehaviour {

	public GameObject floor;
	public GameObject person;
	public float close = 0.05f;
	private string[] allLevels = {
		"3\n1\n1\n2\n0 0 0 2 0\n",
		"3\n3\n1\n4\n0 2 0 0 2\n",
		"3\n2\n2\n2\n0 0 1 2 1\n0 2 0 0 0\n\n",
		"5\n1\n2\n2\n0 0 0 1 0\n1 2 0 4 0\n\n",
		"4\n3\n2\n4\n0 0 0 1 2\n1 3 1 2 0\n\n",
		"8\n1\n3\n2\n0 1 0 2 0\n1 3 0 1 0\n0 5 0 6 0",
		"4\n3\n3\n4\n0 3 0 0 0\n1 0 0 2 2\n2 0 1 2 1\n",
		"4\n4\n4\n4\n0 0 0 1 2\n1 1 1 1 3\n2 2 0 0 2\n3 1 2 0 3",
	};

	public AudioClip correct;
	public AudioClip cycle;
	public AudioClip bump;

	public List<PersonMover> people;
	public PersonMover activePlayer;

	public GameObject[,] board;

	public List<Color> colors;

	public int numPerson;
	public int xsize;
	public int ysize;
	public int time;
	public int count;
	public int level;
	public bool complete;

	public bool alldone;

	public static LevelManager S;

	// Use this for initialization
	void Awake () {
		S = this;
		alldone = false;
		colors = new List<Color>();
		colors.Add(Color.red);
		colors.Add(Color.blue);
		colors.Add(Color.green);
		colors.Add(Color.yellow);
		colors.Add(Color.white);
		colors.Add(Color.cyan);
		colors.Add(Color.black);
		complete = true;
	}

	public bool ValidSpace(Vector2 query) {
		//print(query);
		if (query.x < 0 || query.y < 0 || query.x >= xsize || query.y >= ysize) {
			return false;
		}
		return true;
	}

	public static MemoryStream GenerateStreamFromString(string value)
	{
		return new MemoryStream(Encoding.UTF8.GetBytes(value ?? ""));
	}

	public void LoadLevel(int lev) {
		count = 0;
		complete = false;
		level = lev;

		//		StreamReader reader = new StreamReader("Assets/Resources/level" + lev + ".txt"); 
		print(level);
		StreamReader reader = new StreamReader(GenerateStreamFromString(allLevels[level])); 
		print(allLevels[level]);

		char[] delim = {' '};

		xsize = int.Parse(reader.ReadLine());
		ysize = int.Parse(reader.ReadLine());
		numPerson = int.Parse(reader.ReadLine());
		time = int.Parse(reader.ReadLine());

		board = new GameObject[xsize, ysize];

		for (int i = -xsize / 2; i < (xsize + 1) / 2 ; i++) {
			for (int j = -ysize / 2; j < (ysize + 1)/ 2; j++) {
				GameObject go = Instantiate(floor);
				var gopos = go.transform.position;
				gopos.x += i;
				gopos.y += j;
				go.transform.position = gopos;
				board[i + xsize / 2, j + ysize / 2] = go;
			}
		}

		people = new List<PersonMover>();
		for (int i = 0; i < numPerson; i++) {
			string where = reader.ReadLine();
			string[] poss = where.Split(delim);
			GameObject p = (GameObject)Instantiate(person);

			Vector2 myloc = new Vector2(int.Parse(poss[1]), int.Parse(poss[2]));

			Vector3 pos = p.transform.position;
			pos += new Vector3(myloc.x - xsize / 2, myloc.y - ysize / 2, 0);
			p.transform.position = pos;

			p.GetComponent<Renderer>().material.color = colors[int.Parse(poss[0])];
			board[int.Parse(poss[3]), int.Parse(poss[4])].GetComponent<Renderer>().material.color = colors[int.Parse(poss[0])];

			PersonMover pm = p.GetComponent<PersonMover>();
			if (i == 0) {
				pm.active = true;
				activePlayer = pm;
				pm.transform.GetChild(0).gameObject.SetActive(true);
			} else {
				pm.active = false;
				people.Add(pm);
			}
			pm.others = people;
			pm.myloc = myloc;
		}

		reader.Close();

	}

	void ClearLevel() {
		foreach (GameObject go in board) {
			Destroy(go);
		}
		Destroy(activePlayer.gameObject);
		foreach (PersonMover pm in people) {
			Destroy(pm.gameObject);
		}

		if (level + 1 < allLevels.Length) {
			LoadLevel(level + 1);
		} else {
			EndGameScreen();
		}
	}

	void EndGameScreen() {
		alldone = true;
	}

	// Update is called once per frame
	void Update () {
		if (!complete && count == time) {
			complete = true;
			activePlayer.active = false;

			bool finished = true;
			if (!ValidSpace(activePlayer.myloc) || board[(int)activePlayer.myloc.x, (int)activePlayer.myloc.y].GetComponent<Renderer>().material.color != activePlayer.GetComponent<Renderer>().material.color) {
				finished = false;
			} else {
				foreach (PersonMover pm in people) {
					if (!ValidSpace(pm.myloc) || board[(int)pm.myloc.x, (int)pm.myloc.y].GetComponent<Renderer>().material.color != pm.GetComponent<Renderer>().material.color) {
						finished = false;
						break;
					}
				}
			}
			if (!finished) {				
				Invoke("CycleLevel", 1);
				GetComponent<AudioSource>().clip = cycle;
				GetComponent<AudioSource>().Play();
			} else { 
				Invoke("ClearLevel", 1);
				GetComponent<AudioSource>().clip = correct;
				GetComponent<AudioSource>().Play();
			}
		}
	}

	public void CountUp() {
		//activePlayer.active = false;
		bool settled = true;
		bool found = false;
		for (int i = 0; i < people.Count; i++) {
			PersonMover pm = people[i];
			print("checking active vs " + i);
			print((pm.transform.position - activePlayer.transform.position).magnitude);
			if ((pm.transform.position - activePlayer.transform.position).magnitude < close) {
				activePlayer.responsible = true;
				found = true;
				activePlayer.Collision();
				settled = false;
				break;
			}
		}
		for (int i = 0; i < people.Count; i++) {
			PersonMover pm = people[i];
			bool reaction = false;
			for (int j = 0; j < people.Count; j++) {
				PersonMover pm2 = people[j];
				print("checking " + i + " vs " + j);
				print((pm.transform.position - pm2.transform.position).magnitude);
				if (j != i && (pm.transform.position - pm2.transform.position).magnitude < close) {
					pm.Collision();
					settled = false;
					reaction = true;
					if (!found) {
						pm.responsible = true;
						found = true;
					}
					break;
				}
			}
			print("checking " + i + " vs active");
			print((pm.transform.position - activePlayer.transform.position).magnitude);
			if (!reaction && (pm.transform.position - activePlayer.transform.position).magnitude < close) {
				pm.Collision();
				settled = false;
				if (!found) {
					pm.responsible = true;
					found = true;
				}
			}
		}
		if (settled) {
			count++;
			activePlayer.settled = true;
		} else {
			GetComponent<AudioSource>().clip = bump;
			GetComponent<AudioSource>().Play();
			activePlayer.settled = false;
		}
	}

	void CycleLevel() {
		count = 0;
		complete = false;
		activePlayer.active = false;
		activePlayer.transform.GetChild(0).gameObject.SetActive(false);
		people.Add(activePlayer);
		foreach (PersonMover pm in people) {
			pm.Reset();
		}
		activePlayer = people[0];
		people.RemoveAt(0);
		activePlayer.active = true;
		activePlayer.transform.GetChild(0).gameObject.SetActive(true);
	}
}
