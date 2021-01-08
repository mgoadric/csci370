using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WolfMovement : MonoBehaviour {

	public GameObject target;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {

		Vector3 pos = transform.position;
		var horizontal = Input.GetAxis("Horizontal");
		var vertical = Input.GetAxis("Vertical");
		if (horizontal > 0) {
			GetComponent<Rigidbody2D>().AddForce (Vector3.right);
		} else if (horizontal < 0) {
			GetComponent<Rigidbody2D>().AddForce (Vector3.left);
		} 
		if (vertical > 0) {
			GetComponent<Rigidbody2D>().AddForce (Vector3.up);
		} else if (vertical < 0) {
			GetComponent<Rigidbody2D>().AddForce (Vector3.down);
		} 
		transform.position = pos;

	}

	void OnCollisionEnter2D(Collision2D coll) {
		if (coll.gameObject == target) {
			GetComponent<AudioSource>().Play();
		}
	}
}
