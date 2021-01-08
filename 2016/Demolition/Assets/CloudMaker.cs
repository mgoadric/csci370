using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CloudMaker : MonoBehaviour {
	public int numClouds = 7;
	public int numPieces = 4;
	public int minSize = 1;
	public int maxSize = 3;
	public int minX = 0;
	public int maxX = 60;
	public int minY = 10;
	public int maxY = 15;
	public GameObject cloudPrefab;
	public GameObject[] clouds;
	public float speed = 0.1f;

	// Use this for initialization
	void Awake () {
		clouds = new GameObject[numClouds];

		for (int i = 0; i < numClouds; i++) {
			GameObject cloud = new GameObject();
			clouds[i] = cloud;
			int size = Random.Range(minSize, maxSize);
			cloud.transform.position = new Vector3(
				Random.Range(minX, maxX),
				Random.Range(minY, maxY), 
				15 - size);
			cloud.transform.localScale = new Vector3(
				size,
				size,
				1);

			for (int j = 0; j < numPieces; j++) {
				GameObject c = Instantiate(cloudPrefab) as GameObject;
				c.transform.parent = cloud.transform;
				c.transform.localPosition = new Vector3(
					0.5f - Random.value,
					0.5f - Random.value, 
					1);
				c.transform.localScale = new Vector3(1, 1, 1);
			}
		}
	}

	// Update is called once per frame
	void Update () {
		foreach (GameObject c in clouds) {
			Vector3 cPos = c.transform.position;
			cPos.x -= c.transform.localScale.x * Time.deltaTime * speed;

			if (cPos.x < minX) {
				cPos.x = maxX;
			}

			c.transform.position = cPos;
		}
	}
}
