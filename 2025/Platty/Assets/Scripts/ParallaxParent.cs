using System;
using System.Linq;
using UnityEngine;

public class ParallaxParent : MonoBehaviour
{

    public Sprite[] backgrounds;

    void Awake()
    {
        for (int i = 0; i < backgrounds.Length; i++) {
            GameObject go = new GameObject("Layer" + i);
            go.transform.parent = transform;
            go.transform.localPosition = new Vector3(0, 0, 0);
            ParallaxScroll ps = go.AddComponent<ParallaxScroll>();
            ps.sprite = backgrounds[i];
            ps.backgroundSize = 19.2f;
            ps.sortOrder = backgrounds.Length - i;
            ps.parallaxSpeed = (1.0f + i) / backgrounds.Length;
            ps.Setup();
        }   
    }

    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
