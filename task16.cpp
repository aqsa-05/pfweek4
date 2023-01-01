#include <iostream>
#include <windows.h>
using namespace std;
void maze();
void printpacman(int x, int y);
void gotoxy(int  , int );
main()
{
 system("cls");   
 maze();
 while(true)
{
 int x = 15;
 int y = 6;
 printpacman(x,y); 
 gotoxy(15,6);
 cout<<" ";
 gotoxy(16,6);
 printpacman(16,6);
 gotoxy(16,6);
 cout<<" ";
 gotoxy(17,6);
 printpacman(17,6);
 gotoxy(17,6);
 cout<<" ";
 gotoxy(18,6);
 printpacman(18,6);
 gotoxy(18,6);
 cout<<" ";
 gotoxy(19,6);
 printpacman(19,6);
 gotoxy(19,6);
 cout<<" ";
 gotoxy(20,6);
 printpacman(20,6);
 gotoxy(20,6);
 cout<<" ";
 gotoxy(20,6);
 printpacman(20,6);
 gotoxy(20,6);
 cout<<" ";
 gotoxy(20,6);
 printpacman(20,6);
 gotoxy(20,6);
 cout<<" ";
 gotoxy(21,6);
 printpacman(21,6);
 gotoxy(21,6);
 cout<<" ";
 gotoxy(22,6);
 printpacman(22,6);
 gotoxy(22,6);
 cout<<" ";
 gotoxy(23,6);
 printpacman(23,6);
 gotoxy(23,6);
 cout<<" ";
 gotoxy(24,6);
 printpacman(24,6);
 gotoxy(24,6);
 cout<<" ";
 gotoxy(25,6);
 printpacman(25,6);
 gotoxy(25,6);
 cout<<" ";
 gotoxy(26,6);
 printpacman(26,6);
 gotoxy(26,6);
 cout<<" ";
 gotoxy(27,6);
 printpacman(27,6);
 gotoxy(27,6);
 cout<<" ";
 gotoxy(28,6);
 printpacman(28,6);
 gotoxy(28,6);
 cout<<" ";

 }
}
void maze()
{
cout <<"################################################################################           " <<endl;
cout <<"||.. .............................................................  ........  ||        " <<endl;
cout <<"||.. %%%%%%%%%%%%%%%                     %%%%%%%%%%%%%%%%    |%|..    %%%%    ||     " <<endl;
cout <<"||..             |%|              ...    |%|          |%|    |%|..     |%|    ||        " <<endl;
cout <<"||..             |%|           |%|...    |%|          |%|    |%|..     |%|    || " <<endl;
cout <<"||..      %%%%%%%%%%           |%|...    %%%%%%%%%%%%%%%%       ..    %%%%.   || " <<endl;
cout <<"||..      |%|                  |%|...   ................. |%|   ..            ||  " <<endl;
cout <<"||..      %%%%%%%%%%%%%%%%%%   |%|...   %%%%%%%%%%%       |%|   ..    %%%%.   ||        " <<endl;
cout <<"||..                     |%|   |%|...   |%|......         |%|   ..     |%|.   ||      " <<endl;
cout <<"||..        ............ |%|        P   |%|...... |%|           ..     |%|.   ||       " <<endl;
cout <<"||.. |%|    |%|      |%|.|%|  |%|          ...... |%|           ..|%|  |%|.   ||          " <<endl;
cout <<"||.. |%|    |%|      |%|..    %%%%%%%%     ...... |%|            .|%|.        ||   " <<endl;
cout <<"||.. |%|    |%|      |%|.. G     ...|%|      %%%%%%%%           . |%|.        ||  " <<endl;
cout <<"||.. |%|                .        ...|%|                     |%| ..|%|.        ||   " <<endl;
cout <<"||.. |%|    %%%%%%%%%%%%%%%%%    ...|%|%%%%%%%%%%%%%        |%| ..|%|%%%%%%   ||  " <<endl;
cout <<"||.. .................................................      |%| ...........   || " <<endl;
cout <<"||    ................................................              .......   || " <<endl;
cout <<"||.. |%|  |%|    |%|..      %%%%%%%%%%%%%%%  .....|%|       |%|  ..|%|.       ||                     " <<endl;
cout <<"||.. |%|  |%|    |%|..               ...|%|    %%%%%%       |%|  ..|%|.       ||     " <<endl;
cout <<"||.. |%|             .               ...|%|                 |%|  ..|%|.       ||       " <<endl;
cout <<"||.. |%|  %%%%%%%%%%%%%%%            ...|%|                 |%|  ..|%|%%%%%   ||  " <<endl;
cout <<"||....................................................      |%|  ..........   ||     " <<endl;
cout <<"||..  ................................................               ......   ||  " <<endl;
cout <<"################################################################################  " <<endl;
}
void printpacman(int x, int y)
{
 gotoxy(x-1,y);
 cout<<" ";
 gotoxy(x,y);
 cout <<"p";
 Sleep(400);
}
void gotoxy(int x , int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y= y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}