using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rotate : MonoBehaviour
{

    private Rigidbody body;

    private float horizontal, vertical;

    // Start is called before the first frame update
    void Start()
    {
        body = GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
    {
        horizontal = Input.GetAxisRaw("Horizontal");
        vertical = Input.GetAxisRaw("Vertical");

        if (Mathf.Abs(vertical) > 0.01)
        {
            body.AddRelativeForce(vertical * Vector3.forward);
            
        }
        if (Mathf.Abs(horizontal) > 0.01)
        {
            body.AddTorque(4 * horizontal * transform.up);
        }

        if (Input.GetKey("space"))
        {
            GetComponent<Animator>().SetTrigger("forward");
        }
    }
}
