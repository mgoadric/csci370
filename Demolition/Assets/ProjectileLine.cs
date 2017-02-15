using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProjectileLine : MonoBehaviour {

	public static ProjectileLine S;

	public float minDist = 0.1f;
	public bool _________________________;

	public LineRenderer line;
	private GameObject _poi;
	public List<Vector3> points;

	void Awake() {
		S = this;
		line = GetComponent<LineRenderer>();
		line.enabled = false;
		points = new List<Vector3>();
	}

	public GameObject poi {
		get {
			return (_poi);
		}
		set {
			_poi = value;
			if (_poi != null) {
				line.enabled = false;
				points = new List<Vector3>();
				AddPoint();
			}
		}
	}

	void Clear() {
		_poi = null;
		line.enabled = false;
		points = new List<Vector3>();
	}

	public void AddPoint() {
		Vector3 pt = _poi.transform.position;
		if (points.Count > 0 && (pt - lastPoint).magnitude < minDist) {
			return;
		}
		if (points.Count == 0) {
			Vector3 launchPos = Slingshot.S.launchPoint.transform.position;
			Vector3 launchPosDiff = pt - launchPos;

			points.Add(pt + launchPosDiff);
			points.Add(pt);

			line.numPositions = 2;
			line.SetPosition(0, points[0]);
			line.SetPosition(1, points[1]);
			line.enabled = true;
		} else {
			points.Add(pt);
			line.numPositions = points.Count;
			line.SetPosition(points.Count - 1, lastPoint);
			line.enabled = true;
		}
	}

	public Vector3 lastPoint {
		get {
			if (points == null) {
				return(Vector3.zero);
			}
			return (points[points.Count - 1]);
		}
	}

	// Use this for initialization
	void Start () {

	}

	// Update is called once per frame
	void FixedUpdate () {
		if (poi == null) {
			if (FollowCam.S.poi != null) {
				if (FollowCam.S.poi.tag == "Projectile") {
					poi = FollowCam.S.poi;
				} else {
					return;
				}
			} else {
				return;
			}
		}
		AddPoint();
		if (poi.GetComponent<Rigidbody>().IsSleeping()) {
			poi = null;
		}
	}
}
