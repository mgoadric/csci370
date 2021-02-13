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
        Debug.Log("Hit ICE!");
        if (collision.gameObject.CompareTag("Player"))
        {
            PlayerControl pc = collision.gameObject.GetComponent<PlayerControl>();
            pc.Slide(true);
        }
    }
    private void OnTriggerExit2D(Collider2D collision)
    {
        Debug.Log("Leaving ICE!");
        if (collision.gameObject.CompareTag("Player"))
        {
            PlayerControl pc = collision.gameObject.GetComponent<PlayerControl>();
            pc.Slide(false);
        }
    }
}
