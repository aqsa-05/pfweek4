#include <iostream>
using namespace std;
void print();
main( )
{
   while (true)
   {
   print();
   }



}

void print()
{string userValue;
cout <<"Enter userValue:";
cin >> userValue;
if(userValue == "true")
  { cout << "false" <<endl;
  }
if (userValue == "false")
  { cout << "true" << endl;
  }
}