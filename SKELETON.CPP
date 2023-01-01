#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y);
void printMaze();
main()
{
      system ("cls");
      print maze();
}

void printMaze()
{
cout <<"  ######################################                          " << endl;
cout <<"  #                                    # " << endl;
cout <<"  #                                    # " << endl;
cout <<"  #                                    #  " << endl;
cout <<"  #                                    #" << endl;
cout <<"  #                                    # " << endl;
cout <<"  #                                    #                          " << endl;
cout <<"  #                                    # " << endl;
cout <<"  ######################################                          " << endl; 
}
void gotoxy (int x,int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStHandle(STD_OUTPUT_HANDLE), coordinates);
}







}