using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    public static GameManager Instance { get; private set; }

    public Image spriteToFade;
    public GameObject startButton;

    public GameObject game;

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }

    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void StartButton()
    {
        startButton.SetActive(false);
        StartCoroutine(LerpFunction(targetColor, 3));
        Instantiate(game);
        GameObject player = GameObject.FindGameObjectWithTag("Player");
        GameObject camera = GameObject.FindGameObjectWithTag("MainCamera");
        camera.GetComponent<FollowCam>().playerSprite = player;

    }

    public Color targetColor = new Color(1, 1, 1, 0);


    IEnumerator LerpFunction(Color endValue, float duration)
    {
        float time = 0;
        Color startValue = spriteToFade.color;

        while (time < duration)
        {
            spriteToFade.color = Color.Lerp(startValue, endValue, time / duration);
            time += Time.deltaTime;
            yield return null;
        }
        spriteToFade.color = endValue;
    }
}
