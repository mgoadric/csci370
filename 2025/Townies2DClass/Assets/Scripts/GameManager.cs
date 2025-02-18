using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{


    public void ReactToClick() {
        Debug.Log("I've been clicked!!!");
        //SceneManager.LoadSceneAsync("SampleScene");
        Initiate.Fade("SampleScene",Color.black,0.2f);
    }

    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
