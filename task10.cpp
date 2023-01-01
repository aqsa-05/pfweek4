#include <iostream>
using namespace std;
void airline( );
main()
{ 
   while( true)
   {


airline( );
}


}


void airline()
{


int ticketDollars;
float discount;
string country;
float total;
cout << " Enter ticketDollars:";
cin >> ticketDollars;
cout <<" Enter country:";
cin >> country;

if (country == "pakistan")
{ discount =  (ticketDollars*5)/100;
  total = ticketDollars - discount;

  cout << "total" << total << endl;
}

if (country == "ireland")
{ discount =  (ticketDollars*10)/100;
total = ticketDollars - discount;
  cout << "total" << total << endl;
}

if (country == "india")
{ discount =  (ticketDollars*20)/100;
total = ticketDollars - discount;
  cout << "total" << total << endl;
}

if (country == "england")
{ discount =  (ticketDollars*30)/100;
total = ticketDollars - discount;
  cout << "total" << total << endl;
}

if (country == "canada")
{ discount =  (ticketDollars*45)/100;
total = ticketDollars - discount;
  cout << "total" << total << endl;
}
}




