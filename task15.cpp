#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y);
void printMaze();
     void printP(int x, int y);
    
main()
  {
      system ("cls");
      printMaze();
      int x = 3;
      int y = 3;

     while (true)
      {
printP (x,y);
gotoxy (3,3);
printP (3,3);
gotoxy (3,3);
cout << " ";
gotoxy (4,4);
printP (4,4);
gotoxy (4,4);
 cout <<" ";
gotoxy (5,5);
printP ( 5,5);
gotoxy (5,5);
cout << " ";

gotoxy (6,6);
printP (6,6);
gotoxy (6,6);
cout << " ";
  

       
      }
  }

void printMaze()
{
  cout <<"  ######################################                          " << endl;
  cout <<"  #                                    #                          " << endl;
  cout <<"  #                                    #                          " << endl;
  cout <<"  #                                    #                          " << endl;
  cout <<"  #                                    #                          " << endl;
  cout <<"  #                                    #                          " << endl;
  cout <<"  #                                    #                          " << endl;
  cout <<"  #                                    #                          " << endl;
  cout <<"  ######################################                          " << endl; 
}
void gotoxy (int x,int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void printP(int x,int y)
{
    gotoxy(x-1,y);
    cout <<"  ";
    gotoxy(3,3);
    cout << "p";
    Sleep (500);

}