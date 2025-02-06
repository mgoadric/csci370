using UnityEngine;

public class CatchPiano : MonoBehaviour
{

    public GameObject noteParticles;

    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnCollisionEnter2D(Collision2D col) {
        Debug.Log("OnCollisionEnter2d");
        Destroy(col.gameObject);

        GameManager.Instance.IncScore(1);
        GameObject go = Instantiate(noteParticles);
        go.transform.parent = transform;
    }
}
