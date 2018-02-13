using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class MainUIEvents : MonoBehaviour
{
//    public Button googleLogInButton;

    static bool sAutoAuthenticate = true;
    public Text bestScore;
    public GameObject menuImg;
    public GameObject fmenuImg;
    public GameObject fhowtoImg;
    public GameObject fstotyImg;
    public GameObject titleText;

    public GameObject bgSndOn;
    public GameObject bgSndOff;
    public GameObject efSndOn;
    public GameObject efSndOff;
    public GameObject slSndOn;
    public GameObject slSndOff;

    int playCount;
    bool menuBool;
    bool slSoundBool;
    bool bgSoundBool;
    bool effSoundBool;

    // Use this for initialization
    void Start()
    {
        menuBool = false;
        if (sAutoAuthenticate)
        {
            GooglePlayManager.Instance.Authenticate();
            sAutoAuthenticate = false;
        }
    }


    void Update()
    {
        if (GooglePlayManager.Instance.Authenticated)
        {
//googleLogInButton.interactable = false;
        }

        bestScore.text = PlayerPrefs.GetInt("BestScore").ToString();
    }

    // 로그인 함수
    public void OnLogIn()
    {
        if (GooglePlayManager.Instance.Authenticating)
        {
            return;
        }

        if (GooglePlayManager.Instance.Authenticated)
        {
            GooglePlayManager.Instance.LogOut();
        }

        else
        {
            GooglePlayManager.Instance.Authenticate();
        }
    }

    // 리더보드 함수
    public void OnLeaderboard()
    {
        GooglePlayManager.Instance.ShowLeaderboardUI();
    }

	public void OnClick(GameObject obj) {
		if (obj.tag == "MENU") {
            if (menuBool == false) {
                menuImg.SetActive(true);
                titleText.SetActive(false);
                menuBool = true;
            }
            else {
                menuImg.SetActive(false);
                titleText.SetActive(true);
                menuBool = false;
            }
        }
        else if (obj.tag == "CANCLE") {
            menuImg.SetActive(false);
            titleText.SetActive(true);
        }
        else if (obj.tag == "RANK") {
			OnLeaderboard();
		}
        else if (obj.tag == "PLAY")
        {
            Application.LoadLevel(1);
        }
        else if (obj.tag == "FMENU") {
            fmenuImg.SetActive(true);
            fhowtoImg.SetActive(false);
            fstotyImg.SetActive(false);
        }
        else if (obj.tag == "FHOWTO") {
            fmenuImg.SetActive(false);
            fhowtoImg.SetActive(true);
            fstotyImg.SetActive(false);
        }
        else if (obj.tag == "FSTORY") {
            fmenuImg.SetActive(false);
            fhowtoImg.SetActive(false);
            fstotyImg.SetActive(true);
        }
        else if (obj.tag == "BGSNDON") {
            slSoundBool = true;
        }
        else if (obj.tag == "BGSNDOFF") {
            slSoundBool = false;
        }
        else if (obj.tag == "EFSNDON") {
            bgSoundBool = true;
        }
        else if (obj.tag == "EFSNDOFF") {
            bgSoundBool = false;
        }
        else if (obj.tag == "SLSNDON") {
            effSoundBool = true;
        }
        else if (obj.tag == "SLSNDOFF") {
            effSoundBool = false;
        }
    }
}