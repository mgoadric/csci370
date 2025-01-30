using System.Collections;
using UnityEngine;

public class BuildingThrow : MonoBehaviour
{

    public GameObject piano;

    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        //InvokeRepeating("DropPiano", 2.0f, 2.5f);
        StartCoroutine("DropPiano2");
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    IEnumerator DropPiano2() {
        for(;;) {
            GameObject go = Instantiate(piano);
            yield return new WaitForSeconds(Random.Range(2f, 4f));
        }
    }

    void DropPiano() {
        Instantiate(piano);
    }
}
