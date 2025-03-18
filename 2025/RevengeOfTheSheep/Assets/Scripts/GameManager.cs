using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{

	public GameObject bot;
	public GameObject wolf;
	public GameObject dog;

	public int numBots;
	public int scale;

	// Use this for initialization
	void Start()
	{

		for (int i = 0; i < numBots; i++)
		{
			GameObject sheep = (GameObject)Instantiate(bot,
				new Vector3(Random.Range(-scale / 2, scale / 2),
					Random.Range(-scale / 2, scale / 2), 0),
				Quaternion.Euler(0, 0, Random.Range(0, 360)));
			sheep.GetComponent<AvoidSteer>().target = wolf;
			sheep.GetComponent<AvoidSteer>().dog = dog;
			sheep.GetComponent<AvoidOtherSteer>().dog = dog;
			sheep.GetComponent<AvoidOtherSteer>().target = wolf;
		}
	}

	// Update is called once per frame
	void Update()
	{

	}
}
