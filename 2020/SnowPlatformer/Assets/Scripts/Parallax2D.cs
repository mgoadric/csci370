using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Parallax2D : MonoBehaviour
{

    public float backgroundSize;

    private Transform cameraTransform;
    private Transform[] layers;
    private int leftIndex;
    private int rightIndex;

    // Start is called before the first frame update
    void Start()
    {
        cameraTransform = Camera.main.transform;

        layers = new Transform[transform.childCount];
        for (int i = 0; i < transform.childCount; i++)
        {
            layers[i] = transform.GetChild(i);
        }

        leftIndex = 0;
        rightIndex = layers.Length - 1;

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
