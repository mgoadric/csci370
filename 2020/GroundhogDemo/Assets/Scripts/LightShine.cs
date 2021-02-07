using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LightShine : MonoBehaviour
{

    public int power;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.CompareTag("Player"))
        {
            GameManager.Instance.AddPower(power);
            Destroy(gameObject);
        }
    }
}
