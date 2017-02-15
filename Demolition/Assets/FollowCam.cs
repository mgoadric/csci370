using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowCam : MonoBehaviour {

	public static FollowCam S;
	public float easing = 0.05f;
	public GameObject poi;
	public float camZ;
	public Vector2 minXY;

	void Awake() {
		S = this;
		camZ = this.transform.position.z;
	}

	void FixedUpdate() {
		Vector3 destination;

		if (poi == null) {
			destination = Vector3.zero;
		} else {
			destination = poi.transform.position;
			if (poi.tag == "Projectile") {
				if (poi.GetComponent<Rigidbody>().IsSleeping() ) {
					poi = null;
					return;
				}
			}
		}

		destination.z = camZ;
		destination.x = Mathf.Max(minXY.x, destination.x);
		destination.y = Mathf.Max(minXY.y, destination.y);
		destination = Vector3.Lerp(transform.position, destination, easing);
		transform.position = destination;
		this.GetComponent<Camera>().orthographicSize = destination.y + 10;
	}

}
