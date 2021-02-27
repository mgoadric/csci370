using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WanderSteer : MonoBehaviour
{
	public float speed;

	private Rigidbody2D body;

	// Use this for initialization
	void Start()
	{
		body = GetComponent<Rigidbody2D>();

	}

	// Update is called once per frame
	void Update()
	{
		body.AddForce(transform.up * speed);
		transform.Rotate(Vector3.back * (Random.value * 2 - 1));
	}
}
