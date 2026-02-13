#include<iostream>
#include<fstream>
#include"clsString.h"
#include"clsDate.h"
#include"clsTime.h"
#include"Global.h"
using namespace std;
class  clsLoginiformation
{
    private:


    static string _convetLine()
    {
        string Line ="";
        Line+=to_string( Date.GetDay())+"/"+ to_string( Date.GetMonth())+"/"+ to_string( Date.GetYear())+"/"+clsTime::GetCurrentTime()+"  "+Current.GetUserName()+"  "+Current.GetPassword()+"  "+ to_string( Current.GetPermisson() );        
        return Line;
    }

    static void Addsessions()
    {
     fstream load;
     load.open("sessions.txt",ios::app|ios::out);// Add sessions
     if (load.is_open())
     {
        load<<_convetLine()<<endl;
        
     }
     load.close();
    }

 public:
static void Recordingsessions()
{
Addsessions();

}



};
