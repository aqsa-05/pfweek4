#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy (int x,int y);
void printA();
void printQ();
void printS();
void printK();



main()
{   
     
   
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
gotoxy(14,9);
 cout << "   #    #";
gotoxy (15,9);

 cout << "   #    #" ;
gotoxy (16,9);
 cout << "   ###### " ;
gotoxy (17,9);
 cout << "   #    #                                    " << endl;
gotoxy (18,9);
 cout << "   #    #                                   " << endl;
gotoxy (19,9);
 cout << "   #    #                                    " << endl;


} 
void printQ()
{
 gotoxy (20,9 );
 cout << "    #######                       " << endl;
gotoxy (21,9 );
 cout << "    #     #               " << endl;
gotoxy (22,9);
 cout << "    #     #               " << endl;
gotoxy (23,9 );
 cout << "    #     #               " << endl;
gotoxy (24,9 );
 cout << "    #     #               " << endl;
gotoxy (25,9 );
 cout << "    #######                    " << endl;
gotoxy (26,22 );
 cout << "           ##             " << endl; 
}

void printS()
{
  gotoxy (27,9 );
 cout << "    #########                    " << endl;
gotoxy (28,9 );
 cout << "    #                    " << endl;
gotoxy (29,9 );
 cout << "    #                    " << endl;
gotoxy (30,9 );
 cout << "    #########                    " << endl;
gotoxy ( 31,9);
 cout << "             #           " << endl;
gotoxy (32,9 );
 cout << "             #           " << endl;
gotoxy (33,9 );
 cout << "    #########                    " << endl;
}




void printK()
{
gotoxy(34,9);
  cout <<"   ######";
gotoxy(35,9);
 cout << "   #    #";
gotoxy (36,9);

 cout << "   #    #" ;
gotoxy (37,9);
 cout << "   ###### " ;
gotoxy (38,9);
 cout << "   #    #                                    " << endl;
gotoxy (39,9);
 cout << "   #    #                                   " << endl;
gotoxy (40,9);
 cout << "   #    #                                    " << endl;
}

void gotoxy (int x,int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}







