#include <iostream>
using namespace std;
void challan();
main( )
{
   while (true)
  {
 challan();
  }

}
void challan()
{
int speed;
string challenged;
string perfect;
cout <<" Enter speed:";
cin >> speed;
if (speed > 100)
   {
  cout << " you will be challenged" << challenged << endl;
   }

if (speed == 100)
  {
    cout << "perfect! you are going good" << perfect<< endl;
   }
}
