using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ice : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        Debug.Log("Walking on Ice!");
        if (collision.gameObject.CompareTag("Player"))
        {
            PlayerMove pm = collision.gameObject.GetComponent<PlayerMove>();
            pm.Slide(true);
        }
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        Debug.Log("Leaving the Ice!");
        if (collision.gameObject.CompareTag("Player"))
        {
            PlayerMove pm = collision.gameObject.GetComponent<PlayerMove>();
            pm.Slide(false);
        }
    }

}
