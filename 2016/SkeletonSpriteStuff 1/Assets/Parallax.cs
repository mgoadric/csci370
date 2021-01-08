using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Parallax : MonoBehaviour {

	public float backgroundSize;

	private float parallaxSpeed;
	private float lastCameraX;

	private Transform cameraTransform;
	private Transform[] layers;
	private float viewZone = 10;
	private int leftIndex;
	private int rightIndex;

	// Use this for initialization
	void Start () {
		parallaxSpeed = transform.position.z;
		cameraTransform = Camera.main.transform;
		lastCameraX = cameraTransform.position.x;
		layers = new Transform[transform.childCount];
		for (int i = 0; i < transform.childCount; i++) {
			layers[i] = transform.GetChild(i);
		}
		leftIndex = 0;
		rightIndex = layers.Length - 1;
	}

	private void ScrollRight() {
		layers[leftIndex].position += Vector3.right * layers.Length * backgroundSize;
		rightIndex = leftIndex;
		leftIndex++;
		leftIndex %= layers.Length;
	}

	private void ScrollLeft() {
		layers[rightIndex].position += Vector3.left * layers.Length * backgroundSize;
		leftIndex = rightIndex;
		rightIndex += layers.Length - 1;
		rightIndex %= layers.Length;
	}

	// Update is called once per frame
	void Update () {

		float deltaX = cameraTransform.position.x - lastCameraX;
		transform.position += Vector3.right * deltaX * parallaxSpeed;

		lastCameraX = cameraTransform.position.x;

		if (cameraTransform.position.x < (layers[leftIndex].transform.position.x + viewZone)) {
			ScrollLeft();
		} 
		if (cameraTransform.position.x > (layers[rightIndex].transform.position.x - viewZone)) {
			ScrollRight();
		} 


	}
}
