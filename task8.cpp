#include <iostream>

using namespace std;
 
void printA(int x,int y);

main()
{

int number1;
int number2;
while (true)
{cout <<"Enter number1:";
cin >> number1;
cout <<"Enter number2:";
cin >> number2;
printA(number1,number2 );

}




}

void printA(int number1,int number2)
  {
 
     if (number1==number2)
     {cout << "true" << endl;
     }
  if (number1!=number2)
   { cout << "false" << endl;
   }
 }











