using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class GameManager : MonoBehaviour
{

    public static GameManager Instance { get; private set; }

    public GameObject dialogBox;
    public GameObject dialogText;
    public GameObject startButton;
    public GameObject backgroundImage;

    private Coroutine dialogCo;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void Awake()
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

    public void StartDialog(string text)
    {
        dialogBox.SetActive(true);
        dialogCo = StartCoroutine(TypeText(text));
    }

    public void HideDialog()
    {
        dialogBox.SetActive(false);
        StopCoroutine(dialogCo);
    }

    IEnumerator TypeText(string text)
    {
        dialogText.GetComponent<TextMeshProUGUI>().text = "";
        foreach (char c in text.ToCharArray())
        {
            dialogText.GetComponent<TextMeshProUGUI>().text += c;
            yield return new WaitForSeconds(0.1f);
        }

    }

    public void StartButton()
    {
        startButton.SetActive(false);
        StartCoroutine(ColorLerp(new Color(1, 1, 1, 0), 2));
    }

    public void GameOver()
    {
        startButton.SetActive(true);
        StopAllCoroutines();
        HideDialog();
        StartCoroutine(ColorLerp(new Color(1, 1, 1, 1), 2));
    }

    IEnumerator ColorLerp(Color endValue, float duration)
    {
        float time = 0;
        Image sprite = backgroundImage.GetComponent<Image>();
        Color startValue = sprite.color;

        while (time < duration)
        {
            sprite.color = Color.Lerp(startValue, endValue, time / duration);
            time += Time.deltaTime;
            yield return null;
        }
        sprite.color = endValue;
    }

}
