#include<iostream>
#include<ctime>
using namespace std;
class clsTime
{
    /// Time Hours And  minutes And Seconds
private:
short _Hours = 0 ;
short _Minutes = 0 ;
short _Seconds = 0 ;
 /// @brief Get And  Set Data member s
 clsTime(short Hours , short Minutes , short Seconds)

 {
     _Hours = Hours ;
     _Minutes = Minutes ;
     _Seconds = Seconds ;
 
    }
   
 static clsTime Data ()//this is constroctor From Local time The mathien
{
 
 time_t now = time(0);//this is local time
    tm *ltm = localtime(&now);//this is local time is a structer for time in momant address
   
return  clsTime(ltm->tm_hour , ltm->tm_min , ltm->tm_sec);//this is return the time in the moment
    
}
 public:
static string GetCurrentTime()
{
    clsTime Times = clsTime::Data();
string Line ="";
Line += to_string(Times._Hours) + ":" + to_string(Times._Minutes) + ":" + to_string(Times._Seconds);
return Line;
    

}
};
