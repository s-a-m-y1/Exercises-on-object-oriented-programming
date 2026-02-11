#pragma once 
#include<iostream>
#include"clsMainScrean.h"
#include"Global.h"
#include"clsUser.h"
using namespace std;
class clsLoginScreen
{
private:
static void _login()
{
 bool IsFeald =false;
 string Username="" ,Password ="";
    do
    {
       if (IsFeald)
    {
        cout << "invalid login username/password \n";
    }
    cout << "Enter Username : ";
    cin >> Username;

    cout << "Enter Password : ";
    cin >> Password;

Current = clsUser::FindUser(Username , Password); 
IsFeald = Current.IsEmpty();

    } while (IsFeald);

clsMainScreen::ShowMainMenue();
}

public:
static void Login()
{

_login();
}

};

