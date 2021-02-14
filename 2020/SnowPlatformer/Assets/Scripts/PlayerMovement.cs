using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
    // Derived from https://stuartspixelgames.com/2018/06/24/simple-2d-top-down-movement-unity-c/
    Rigidbody2D body;
    Animator animator;
    SpriteRenderer sprite;

    float horizontal;

    public float runSpeed = 5f;
    public float jumpForce = 300f;

    public bool jumping = false;

    void Start()
    {
        body = GetComponent<Rigidbody2D>();
        animator = GetComponent<Animator>();
        sprite = GetComponent<SpriteRenderer>();
    }

    void Update()
    {
        // Gives a value between -1 and 1
        horizontal = Input.GetAxisRaw("Horizontal"); // -1 is left
        animator.SetFloat("horizontal", horizontal);

        if (Input.GetKeyDown("space") && !jumping)
        {
            Debug.Log("Space pressed");
            animator.SetTrigger("jump");
            body.AddForce(new Vector2(0, jumpForce));
            jumping = true;
        }

        if (horizontal < 0)
        {
            sprite.flipX = false;

        }
        else
        {
            sprite.flipX = true;
        }
    }

    void FixedUpdate()
    {
        body.velocity = new Vector2(horizontal * runSpeed, body.velocity.y);
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        jumping = false;
    }
}