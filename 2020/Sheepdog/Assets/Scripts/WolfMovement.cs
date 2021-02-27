using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WolfMovement : MonoBehaviour {

	public GameObject target;
	public float runSpeed;

	private float horizontal;
	private float vertical;
	private Rigidbody2D body;

	// Use this for initialization
	void Start () {
		body = GetComponent<Rigidbody2D>();
	}

	// Update is called once per frame
	void Update()
	{
		horizontal = Input.GetAxisRaw("Horizontal");
		vertical = Input.GetAxisRaw("Vertical");
	}

	private void FixedUpdate()
	{
		body.AddForce(transform.up * vertical * runSpeed);
		transform.Rotate(Vector3.back * horizontal);
	}

	void OnCollisionEnter2D(Collision2D coll) {
		if (coll.gameObject == target) {
			GetComponent<AudioSource>().Play();
		}
	}
}
