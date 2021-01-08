using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowSteer : MonoBehaviour {

	public GameObject target;
	public float speed;
	public float rotationSpeed;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		Vector2 desired = (target.transform.position - transform.position).normalized;
		GetComponent<Rigidbody2D>().AddForce(desired * speed - 
			GetComponent<Rigidbody2D>().velocity);

		float angle = (Mathf.Atan2(desired.y, desired.x) * Mathf.Rad2Deg) - 90;
		Quaternion q = Quaternion.AngleAxis(angle, Vector3.forward);
		transform.rotation = Quaternion.Slerp(transform.rotation,
			q, Time.deltaTime * rotationSpeed);

	}

	public void IncreaseSpeed() {
		speed *= 1.2f;
	}

	void OnDrawGizmos() {
		Gizmos.color = Color.yellow;
		Vector3 direction = GetComponent<Rigidbody2D>().velocity;
		Gizmos.DrawRay(transform.position, direction);
	}

	void OnCollisionEnter2D(Collision2D coll) {
		if (coll.gameObject == target) {
			GetComponent<AudioSource>().Play();
		}
	}
}
