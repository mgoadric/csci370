using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Building : MonoBehaviour
{
    public GameObject person;

    // Start is called before the first frame update
    void Start()
    {
        //InvokeRepeating("DropPerson", 2.0f, 2.5f);
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void StartThrowing()
    {
        StartCoroutine("DropPerson2");
    }

    void DropPerson() {
      Instantiate(person);
    }

    IEnumerator DropPerson2() {
      for (;;) {
        Instantiate(person);
        yield return new WaitForSeconds(Random.Range(2f, 4f));
      }
    }
}
