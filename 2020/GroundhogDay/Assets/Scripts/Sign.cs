using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Sign : MonoBehaviour
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
        Debug.Log("You are at a sign!");
        if (collision.gameObject.CompareTag("Player"))
        {
            GameManager.Instance.DialogMaker("Hello! This is a really long sign text. So much text. Hoping it will wrap.");
        }
    }
    private void OnTriggerExit2D(Collider2D collision)
    {
        Debug.Log("You are leaving a sign!");
        if (collision.gameObject.CompareTag("Player"))
        {
            GameManager.Instance.DialogHide();
        }
    }
}
