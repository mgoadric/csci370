using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;

public class GameManager : MonoBehaviour
{
    public static GameManager Instance { get; private set; }

    public GameObject canvas;
    public GameObject events;
    public Image spriteToFade;
    public GameObject startButton;
    public GameObject dialogBox;
    public GameObject dialogText;
    public TextMeshProUGUI dText;

    public float power { get; private set; }


    public Color targetColor = new Color(1, 1, 1, 0);


    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);
            DontDestroyOnLoad(canvas);
            DontDestroyOnLoad(events);
            dialogBox.gameObject.SetActive(false);
            dText = dialogText.GetComponent<TextMeshProUGUI>();
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

    public void DialogShow(string text)
    {
        dialogBox.gameObject.SetActive(true);
        StartCoroutine(TypeText(text));
    }

    public void DialogHide()
    {
        dialogBox.gameObject.SetActive(false);
    }

    public void GameOver()
    {
        startButton.SetActive(true);
        StopAllCoroutines();
        DialogHide();
        StartCoroutine(LerpFunction(new Color(1, 1, 1, 1), 1));
    }

    public void StartButton()
    {
        startButton.SetActive(false);
        StartCoroutine(LoadYourAsyncScene());
    }

    public void AddPower(int dp) 
    {
        StopCoroutine("PowerFade");
        power += dp;
        StartCoroutine("PowerFade");
    }

    IEnumerator PowerFade()
    {
        while (power > 0)
        {
         
            power -= 0.01f;
            yield return new WaitForFixedUpdate();
        }
        power = 0;
    }

    IEnumerator TypeText(string text)
    {
        dText.text = "";
        foreach (char c in text.ToCharArray())
        {
            dText.text += c;
            yield return new WaitForSeconds(0.02f);
        }
    }

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

    IEnumerator LoadYourAsyncScene()
    {
        // The Application loads the Scene in the background as the current Scene runs.
        // This is particularly good for creating loading screens.
        // You could also load the Scene by using sceneBuildIndex. In this case Scene2 has
        // a sceneBuildIndex of 1 as shown in Build Settings.

        AsyncOperation asyncLoad = SceneManager.LoadSceneAsync("Scene2");

        // Wait until the asynchronous scene fully loads
        while (!asyncLoad.isDone)
        {
            yield return null;
        }

        StartCoroutine(LerpFunction(targetColor, 3));
    }

}
