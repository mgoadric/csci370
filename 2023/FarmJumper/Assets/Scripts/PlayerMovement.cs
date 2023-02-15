using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour
{

    private Rigidbody2D body;
    public float horizontal;

    private Animator animator;
    private SpriteRenderer spriteRenderer;

    public float runSpeed = 5f;

    // Start is called before the first frame update
    void Start()
    {
        body = GetComponent<Rigidbody2D>();
        animator = GetComponent<Animator>();
        spriteRenderer = GetComponent<SpriteRenderer>();
    }

    // Update is called once per frame
    void Update()
    {
        horizontal = Input.GetAxisRaw("Horizontal");
        animator.SetFloat("horizontal", horizontal);
        if (horizontal < 0) {
            spriteRenderer.flipX = true;
        } else {
            spriteRenderer.flipX = false;
        }
        if (Input.GetKeyDown(KeyCode.Space)) {
            print("Space!");
            body.AddForce(new Vector2(0, runSpeed * 100));
        }
    }

    void FixedUpdate() {

        body.velocity = new Vector2(horizontal * runSpeed, body.velocity.y);

    }
}
