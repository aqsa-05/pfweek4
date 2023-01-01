#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy (int x,int y);
void printA();
void printQ();
void printS();
void printK();



main()
{   system ("cls");
     
   
      printA();
      printQ();
      printS();
      printA();
      printK();
     int x = 13;
     int y = 9;
     gotoxy(x,y);

 
     
       
  
}

void printA()
{
gotoxy(13,9);
  cout <<"   ######";
gotoxy(13,10);
 cout << "   #    #";
gotoxy (13,11);

 cout << "   #    #" ;
gotoxy (13,12);
 cout << "   ###### " ;
gotoxy (13,13);
 cout << "   #    #                                    " << endl;
gotoxy (13,14);
 cout << "   #    #                                   " << endl;
gotoxy (13,15);
 cout << "   #    #                                    " << endl;


} 
void printQ()
{
 gotoxy (13,16 );
 cout << "    #######                       " << endl;
gotoxy (13,17 );
 cout << "    #     #               " << endl;
gotoxy (13,18 );
 cout << "    #     #               " << endl;
gotoxy (13,19 );
 cout << "    #     #               " << endl;
gotoxy (13,20 );
 cout << "    #     #               " << endl;
gotoxy (13,21 );
 cout << "    #######                    " << endl;
gotoxy (13,22 );
 cout << "           ##             " << endl; 
}

void printS()
{
  gotoxy (13,23 );
 cout << "    #########                    " << endl;
gotoxy (13,24 );
 cout << "    #                    " << endl;
gotoxy (13,25 );
 cout << "    #                    " << endl;
gotoxy (13,26 );
 cout << "    #########                    " << endl;
gotoxy ( 13,27);
 cout << "             #           " << endl;
gotoxy (13,28 );
 cout << "             #           " << endl;
gotoxy (13,29 );
 cout << "    #########                    " << endl;
}




void printK()
{
gotoxy(13,30);
  cout <<"   ######";
gotoxy(13,31);
 cout << "   #    #";
gotoxy (13,32);

 cout << "   #    #" ;
gotoxy (13,33);
 cout << "   ###### " ;
gotoxy (13,34);
 cout << "   #    #                                    " << endl;
gotoxy (13,35);
 cout << "   #    #                                   " << endl;
gotoxy (13,36);
 cout << "   #    #                                    " << endl;
}

void gotoxy (int x,int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}







