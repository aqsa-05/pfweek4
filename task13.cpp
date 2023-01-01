#include <iostream>
using namespace std;
void tomsleep();
main()
{
while (true)

{

tomsleep();
}


}
void tomsleep()
{
int totalDays = 365;
int workingDays;
int holidays;
int timeofHolidays;
int timeofWorkingdays;
int tomtime = 30000;
int tomtotaltime;
int difference;
 

cout <<"Enter holidays:";
cin >> holidays;
timeofHolidays = holidays*127;
cout << "timeofHolidays" << timeofHolidays << endl;
 workingDays = 365 - holidays;
timeofWorkingdays = workingDays*63;
cout << "timeofWorkingdays" << timeofWorkingdays << endl;

tomtotaltime = timeofHolidays+ timeofWorkingdays;
cout << "tomtotaltime" << tomtotaltime << endl;
difference = tomtime - tomtotaltime;
if (difference > 30000)
   { cout << "tom will run away" << endl;
    }
if (difference < 30000)
  { cout << "tom will sleep well" << endl;
   }
   
}







