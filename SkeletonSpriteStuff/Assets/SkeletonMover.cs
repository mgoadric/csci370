using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SkeletonMover : MonoBehaviour {

	private Animator animator;

	// Use this for initialization
	void Start () {
		animator = this.GetComponent<Animator>();
	}
	
	// Update is called once per frame
	void Update () {
		var vertical = Input.GetAxis("Vertical");
		var horizontal = Input.GetAxis("Horizontal");

		if (vertical > 0) {
			animator.SetInteger("direction", 0);
		} else if (vertical < 0) {
			animator.SetInteger("direction", 2);
		} else if (horizontal > 0) {
			animator.SetInteger("direction", 1);
		} else if (horizontal < 0) {
			animator.SetInteger("direction", 3);
		} 
	}

	void FixedUpdate() {
		Vector3 pos = transform.position;
		if (animator.GetCurrentAnimatorStateInfo(0).IsName("SkeletonWest")) {
			pos.x -= 0.005f;
		} else if (animator.GetCurrentAnimatorStateInfo(0).IsName("SkeletonEast")) {
			pos.x += 0.005f;
		} else if (animator.GetCurrentAnimatorStateInfo(0).IsName("SkeletonNorth")) {
			pos.y += 0.002f;
		} else if (animator.GetCurrentAnimatorStateInfo(0).IsName("SkeletonSouth")) {
			pos.y -= 0.002f;
		}
		transform.position = pos;
	}
}
