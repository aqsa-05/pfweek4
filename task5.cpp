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
      printK();
     int x = 13;
     int y = 9;
     gotoxy(x,y);

 
     
       
  
}

void printA()
{
gotoxy(10,3);
  cout <<"   ######";
gotoxy(10,4);
 cout << "   #    #";
gotoxy (10,5);

 cout << "   #    #" ;
gotoxy (10,6);
 cout << "   ###### " ;
gotoxy (10,7);
 cout << "   #    # " << endl;
gotoxy (10,8);
 cout << "   #    #" << endl;
gotoxy (10,9);
 cout << "   #    #" << endl;


} 
void printQ()
{
 gotoxy (21,3 );
 cout << "    #######  " << endl;
gotoxy (21,4 );
 cout << "    #     #   " << endl;
gotoxy (21,5 );
 cout << "    #     #  " << endl;
gotoxy (21,6 );
 cout << "    #     #   " << endl;
gotoxy (21,7 );
 cout << "    #     #    " << endl;
gotoxy (21,8 );
 cout << "    #######   " << endl;
gotoxy (21,9 );
 cout   << "         ## " << endl; 
}

void printS()
{
  gotoxy (32,3 );
 cout << " ##### " << endl;
gotoxy (32,4 );
 cout << " # "  << endl;
gotoxy (32,5 );
 cout <<" # " << endl;
gotoxy (32,6 );
 cout << " ######" << endl;
gotoxy (32,7);
   cout <<"       # " << endl;
gotoxy (32,8 );
    cout << "       #" << endl;
gotoxy (32,9 );
 cout << " ######" << endl;
}




void printK()
{
gotoxy(43,3);
  cout <<"   ######";
gotoxy(43,4);
 cout << "   #    #";
gotoxy (43,5);

 cout << "   #    #" ;
gotoxy (43,6);
 cout << "   ###### " ;
gotoxy (43,7);
 cout << "   #    # " << endl;
gotoxy (43,8);
 cout << "   #    # " << endl;
gotoxy (43,9);
 cout << "   #    #  " << endl;
}

void gotoxy (int x,int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}







