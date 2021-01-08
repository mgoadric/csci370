using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Slingshot : MonoBehaviour {

	public GameObject launchPoint;
	public GameObject projectilePrefab;
	public Vector3 launchPos;
	public GameObject projectile;
	public bool aimingMode;
	public static Slingshot S;

	public float velocityMult = 4f;

	void Awake() {
		S = this;
		Transform launchPointTrans = transform.Find("LaunchPoint");
		launchPoint = launchPointTrans.gameObject;
		launchPoint.SetActive(false);
		launchPos = launchPointTrans.position;
	}

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if (!aimingMode) return;
		Vector3 mousePos2D = Input.mousePosition;
		mousePos2D.z = -Camera.main.transform.position.z;
		Vector3 mousePos3D = Camera.main.ScreenToWorldPoint(mousePos2D);

		Vector3 mouseDelta = mousePos3D - launchPos;
		float maxMagnitude = this.GetComponent<SphereCollider>().radius;
		if (mouseDelta.magnitude > maxMagnitude) {
			mouseDelta.Normalize();
			mouseDelta *= maxMagnitude;
		}

		Vector3 projPos = launchPos + mouseDelta;
		projectile.transform.position = projPos;

		if (Input.GetMouseButtonUp(0)) {
			aimingMode = false;
			projectile.GetComponent<Rigidbody>().isKinematic = false;
			projectile.GetComponent<Rigidbody>().velocity = -mouseDelta * velocityMult;
//			projectile.GetComponent<Rigidbody>().AddForce(-mouseDelta * velocityMult);
			FollowCam.S.poi = projectile;
			projectile = null;
		}
			
	}

	void OnMouseEnter() {
		launchPoint.SetActive(true);
	}

	void OnMouseExit() {
		launchPoint.SetActive(false);
	}

	void OnMouseDown() {
		aimingMode = true;
		projectile = Instantiate(projectilePrefab) as GameObject;
		projectile.transform.position = launchPos;
		projectile.GetComponent<Rigidbody>().isKinematic = true;
	}
}
