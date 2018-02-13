using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using GooglePlayGames;
using GooglePlayGames.BasicApi;

public class GooglePlayManager : MonoBehaviour {
	private static GooglePlayManager sInstance = new GooglePlayManager();
	private bool mAuthenticating = false;
	private int mHighestPostedScore = 0;

	public static GooglePlayManager Instance {
		get {
			return sInstance;
		}
	}

	public bool Authenticating {
		get {
			return mAuthenticating;
		}
	}

	public bool Authenticated {
		get {
			return Social.Active.localUser.authenticated;
		}
	}

	public void Authenticate() {
		if(Authenticated || mAuthenticating) {
			return;
		}

		PlayGamesPlatform.DebugLogEnabled = true;
		PlayGamesPlatform.Activate();

		((PlayGamesPlatform) Social.Active).SetDefaultLeaderboardForUI(GooglePlayID.leaderboardID);

		mAuthenticating = true;
		Social.localUser.Authenticate(success => {
			mAuthenticating = false;
			if(success) {

			}

			else {

			}
		});
	}

	public void ShowLeaderboardUI() {
		if (Authenticated) {
			Social.ShowLeaderboardUI();
		}
	}
	
	public void ShowAchievementsUI() {
		if (Authenticated) {
			Social.ShowAchievementsUI();
		}
	}

	public void PostToLeaderboard() {
		int score = PlayerPrefs.GetInt("FinalScore");
		if(Authenticated && score > mHighestPostedScore) {
			//Social.ReportScore()
			mHighestPostedScore = score;
			Social.ReportScore(mHighestPostedScore, GooglePlayID.leaderboardID, (bool success) => {

			});
		}

		else {
			Debug.LogWarning("Not Reporting Score, auth = " + Authenticated + " " + score + " <= " + mHighestPostedScore);
		}
	}

	public void LogOut() {
		((PlayGamesPlatform) Social.Active).SignOut();
	}
}