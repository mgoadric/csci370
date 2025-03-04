using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ParallaxScroll : MonoBehaviour
{

    public float backgroundSize;
    public float parallaxSpeed;

    public int sortOrder;
    public Sprite sprite;

    private Transform cameraTransform;

    private GameObject emptyGameObject;
    private Transform[] layers;
    private float viewZone = 10;
    private int leftIndex;
    private int rightIndex;

    private float lastCameraX;


    void Awake()
    {
        //Setup();
    }

    public void Setup()
    {
        cameraTransform = Camera.main.transform;
        lastCameraX = cameraTransform.position.x;
        layers = new Transform[3];

        for (int i = 0; i < 3; i++)
        {
            GameObject go = new GameObject(); 
            go.transform.position = transform.position + new Vector3((i - 1) * backgroundSize, 0, 0);
            go.transform.parent = transform;
            SpriteRenderer spriteRenderer = go.AddComponent<SpriteRenderer>();
            spriteRenderer.sprite = sprite;
            spriteRenderer.sortingOrder = sortOrder;
            spriteRenderer.sortingLayerName = "Background";
            go.name = i.ToString();
            layers[i] = go.transform;
        }

        leftIndex = 0;
        rightIndex = layers.Length - 1;
        
    }

    private void ScrollLeft()
    {
        layers[rightIndex].localPosition = Vector3.right * (layers[leftIndex].localPosition.x - backgroundSize);
        leftIndex = rightIndex;
        rightIndex--;
        if (rightIndex < 0)
        {
            rightIndex = layers.Length - 1;
        }
    }

    private void ScrollRight()
    {
        layers[leftIndex].localPosition = Vector3.right * (layers[rightIndex].localPosition.x + backgroundSize);
        rightIndex = leftIndex;
        leftIndex++;
        if (leftIndex == layers.Length)
        {
            leftIndex = 0;
        }

    }

    // Update is called once per frame
    void Update()
    {
        float deltaX = cameraTransform.position.x - lastCameraX;
        transform.position += Vector3.right * (deltaX * parallaxSpeed);
        lastCameraX = cameraTransform.position.x;

        if (cameraTransform.position.x < (layers[leftIndex].transform.position.x + viewZone))
        {
            ScrollLeft();
        }
        if (cameraTransform.position.x > (layers[rightIndex].transform.position.x - viewZone))
        {
            ScrollRight();
        }
    }
}

