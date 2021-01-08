using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour {

	public int sizex;
	public int sizez;
	public int scale;
	public GameObject wall;

	private int HORIZONTAL = 0;
	private int VERTICAL = 1;

	// Use this for initialization
	void Start () {
		CreateMaze();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void CreateMaze() {
		MakeWallStretch (0, 0, sizex, VERTICAL, false);
		MakeWallStretch (0, sizez, sizex, VERTICAL, true);
		MakeWallStretch (0, 0, sizez, HORIZONTAL, false);
		MakeWallStretch (sizex, 0, sizez, HORIZONTAL, false);

		RecursiveSplit(0, sizex, 0, sizez);
	}

	void MakeWallStretch(int x, int z, int count, int horv, bool drop) {
		int which = -1;
		if (drop) {
			which = (int)UnityEngine.Random.Range (0, count - 1);
		}
		for (int i = 0; i < count; i++) {
			if (i != which) {
				GameObject go = Instantiate (wall, new Vector3 (scale * ((horv * i) + x - ((1 - horv) * 0.5f)), 0, 
					scale * (((1 - horv) * i) + z - (horv * 0.5f))),
					Quaternion.Euler (0, horv * 90, 0));
				var gosc = go.transform.localScale;
				gosc.z *= scale;
				go.transform.localScale = gosc;
			}
		}
	}

	void RecursiveSplit(int xmin, int xmax, int zmin, int zmax) {
		int x = (int)UnityEngine.Random.Range (xmin + 1, xmax - 1);
		int z = zmin;
		int length = zmax - zmin;
		int dir = HORIZONTAL;
		if (xmax - xmin < zmax - zmin) {
			z = (int)UnityEngine.Random.Range (zmin + 1, zmax - 1);
			x = xmin;
			length = xmax - xmin;
			dir = VERTICAL;
		}
		MakeWallStretch (x, z, length, dir, true);

		if (length > 1) {
			if (dir == HORIZONTAL) {
				RecursiveSplit (xmin, x, zmin, zmax);
				RecursiveSplit (x, xmax, zmin, zmax);
			} else {
				RecursiveSplit (xmin, xmax, zmin, z);
				RecursiveSplit (xmin, xmax, z, zmax);
			}
		}
	}


}
