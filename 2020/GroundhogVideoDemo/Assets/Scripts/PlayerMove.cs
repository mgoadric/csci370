using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMove : MonoBehaviour
{

    Rigidbody2D body;

    private float horizontal;
    private float vertical;

    private float moveLimiter = 0.7f;

    public float runSpeed = 0.1f;

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
        horizontal = Input.GetAxisRaw("Horizontal");
        vertical = Input.GetAxisRaw("Vertical");
    }

    private void FixedUpdate()
    {
        if (!sliding)
        {
            if (horizontal != 0 && vertical != 0)
            {
                horizontal *= moveLimiter;
                vertical *= moveLimiter;
            }

            body.velocity = new Vector2(horizontal * runSpeed, vertical * runSpeed);
        }
    }

    public void Slide(bool sliding)
    {
        this.sliding = sliding;
    }
}
