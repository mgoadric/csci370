using UnityEngine;

public class ChangeScene : MonoBehaviour
{

    //name of the scene you want to load
    public string scene;
	public Color loadToColor = Color.white;
	
    public float multiplier = 1.0f;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        
    }


    // Update is called once per frame
    void Update()
    {
        
    }

    public void GoFade(string scene)
    {
        Initiate.Fade(scene, loadToColor, multiplier);
    }
}
