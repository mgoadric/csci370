using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AvoidOtherSteer : MonoBehaviour {

	public float speed;
	public float minDist;
	public GameObject target;
	public GameObject dog;

	// Use this for initialization
	void Start () {

	}

	// Update is called once per frame
	void Update () {

		Collider2D[] colls = Physics2D.OverlapCircleAll(transform.position, minDist);

		foreach (Collider2D col in colls) {
			if (col.gameObject != target) {
				Vector2 desired = col.gameObject.transform.position - transform.position;

				float actual = desired.magnitude - minDist;
				if (col.gameObject == dog) {
					actual *= 3;
				}
				GetComponent<Rigidbody2D>().AddForce(desired.normalized *
					actual * speed - GetComponent<Rigidbody2D>().velocity);
			}
		}

	}

}
