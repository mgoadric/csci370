using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerControl : MonoBehaviour
{

    private Rigidbody2D body;

    private float horizontal;
    private float vertical;

    public float runSpeed = 50f;
    private float moveLimiter = 0.7f;

    private bool sliding;


    // Start is called before the first frame update
    void Start()
    {
        body = GetComponent<Rigidbody2D>();
        sliding = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (!sliding)
        {
            horizontal = Input.GetAxisRaw("Horizontal");
            vertical = Input.GetAxisRaw("Vertical");
        }
    }

    private void FixedUpdate()
    {
        if (horizontal != 0 && vertical != 0)
        {
            horizontal *= moveLimiter;
            vertical *= moveLimiter;
        }
        body.velocity = new Vector2(horizontal * runSpeed, vertical * runSpeed);
    }

    public void Slide(bool sliding)
    {
        this.sliding = sliding;
    }
}
