#include <iostream>
using namespace std;
void flowers();
main()
{

while (true)
  {flowers(); 
   }



}
void flowers()
{
float redRoses;
float whiteRoses;
float tulips;
float redRosep;
float whiteRosep;
float tulipp;
float original;
float discount;
float total;
cout <<"Enter redRoses :";
cin >> redRoses;
redRosep = redRoses*2;
cout << "redRosep" <<redRosep << endl;
cout <<"Enter whiteRoses:";
cin >> whiteRoses;
whiteRosep = whiteRoses* 4.10;
cout <<"whiteRosep" << whiteRosep << endl; 
cout << "Enter tulips:";
cin >> tulips;
tulipp =  tulips*2.50;
cout << "tulipp"<< tulipp << endl;
original = redRosep + whiteRosep+tulipp;
discount = (original*20)/100;
total = original - discount;
cout << "total" << total << endl;
cout << "original" << original << endl;
}


