using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SkeletonMover : MonoBehaviour {

	private Animator animator;
	public float speed;
	private bool grounded;


	// Use this for initialization
	void Start () {
		animator = this.GetComponent<Animator>();
		grounded = true;

		StartCoroutine("MakeChoice");
	}

	IEnumerator MakeChoice() {
		while (true) {
			animator.SetInteger("direction", Random.Range(0, 4));
			yield return new WaitForSeconds(1.0f);
		}
	}

	IEnumerator Fade() {
		for (float f = 1f; f >= 0; f -= 0.05f) {
			Color c = GetComponent<SpriteRenderer>().color;
			c.a = f;
			GetComponent<SpriteRenderer>().color = c;
			yield return new WaitForSeconds(0.2f);
		}

	}

	// Update is called once per frame
	void Update () {

		/*
		var horizontal = Input.GetAxis("Horizontal");

		if (horizontal > 0) {
			animator.SetInteger("direction", 1);
		} else if (horizontal < 0) {
			animator.SetInteger("direction", 3);
		} 
		*/

		if (Input.GetKeyDown("space") && grounded) {
			GetComponent<Rigidbody2D>().AddForce(new Vector2(0, 250));
			grounded = false;
			StartCoroutine("Fade");
		}
	}

	void FixedUpdate() {
		Vector3 pos = transform.position;
		if (animator.GetCurrentAnimatorStateInfo(0).IsName("SkeletonWest")) {
			pos.x -= speed;
		} else if (animator.GetCurrentAnimatorStateInfo(0).IsName("SkeletonEast")) {
			pos.x += speed;
		} 
		transform.position = pos;
	}

	void OnCollisionEnter2D(Collision2D coll) {
		if (coll.gameObject.tag == "Ground") {
			grounded = true;
		}
	}
}
