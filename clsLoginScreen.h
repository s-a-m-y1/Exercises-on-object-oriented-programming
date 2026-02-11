#pragma once 
#include<iostream>
#include"clsScreen.h"
#include"clsMainScrean.h"
#include"Global.h"
#include"clsUser.h"
using namespace std;
class clsLoginScreen:protected clsScreen
{
private:
static void _login()
{
    clsScreen::_DrawScreenHeader("\t Login Screen");

 bool IsFeald =false;
 string Username="" ,Password ="";
    do
    {
       if (IsFeald)//This condition is met if it is true.
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

