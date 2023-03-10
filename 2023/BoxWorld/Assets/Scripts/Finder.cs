using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class Finder : MonoBehaviour
{
    public Transform goal;
    public GameObject body;

    private Rigidbody rigidbody;

    private Animator animator;

    private NavMeshAgent agent;

    private bool grounded = true;
    
    void Start () {
        agent = GetComponent<NavMeshAgent>();
        agent.destination = goal.position; 
        animator = body.GetComponent<Animator>();
        rigidbody = GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
    {
        animator.SetFloat("speed", agent.velocity.sqrMagnitude);

        // https://stackoverflow.com/questions/66007738/unity-how-to-jump-using-a-navmeshagent-and-click-to-move-logic
        // clicking on the nav mesh, sets the destination of the agent and off he goes
        if (Input.GetMouseButtonDown(0) && (!agent.isStopped))
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            if (Physics.Raycast(ray, out RaycastHit hit))
            {
                agent.SetDestination(hit.point);
            }
        }

        // when you want to jump
        if (Input.GetKeyDown(KeyCode.Space) && grounded)
        {
            grounded = false;
            Vector3 currentVelocity = new Vector3(0, 0 , 0);
            if (agent.enabled)
            {
                // set the agents target to where you are before the jump
                // this stops her before she jumps. Alternatively, you could
                // cache this value, and set it again once the jump is complete
                // to continue the original move
                currentVelocity = agent.desiredVelocity;
                agent.SetDestination(transform.position);
                // disable the agent
                agent.updatePosition = false;
                agent.updateRotation = false;
                agent.isStopped = true;
            }
            // make the jump
            rigidbody.isKinematic = false;
            rigidbody.useGravity = true;
            rigidbody.AddRelativeForce(-currentVelocity, ForceMode.Impulse);
            rigidbody.AddRelativeForce(new Vector3(0, 5f, 0), ForceMode.Impulse);
            animator.SetTrigger("jump");
        }
    }

    /// <summary>
    /// Check for collision back to the ground, and re-enable the NavMeshAgent
    /// </summary>
    private void OnCollisionEnter(Collision collision)
    {
        print("Hit Something!");
        if (collision.collider != null && collision.collider.tag == "Ground")
        {
            print("It is the ground!");
            if (!grounded)
            {
                if (agent.enabled)
                {
                    agent.nextPosition = transform.position;
                    agent.SetDestination(transform.position);
                    agent.updatePosition = true;
                    agent.updateRotation = true;
                    agent.isStopped = false;
                }
                rigidbody.isKinematic = true;
                rigidbody.useGravity = false;
                grounded = true;
            }
        }
    }
}
