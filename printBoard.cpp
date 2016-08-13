//
//  printBoard.cpp
//  TicTacToe
//
//  Created by Jianfa Chen on 8/3/16.
//  Copyright (c) 2016 Jianfa Chen. All rights reserved.
//

#include "printBoard.h"

//prototype of funcions
void welcome();
int chooseLevel();
void printBoard(Board board);
bool repeat();

void welcome()
{
    using namespace std;
    
    cout << "Welcome to Tac-Tic-Toe world!" << endl;
}

int chooseLevel(){
    using namespace std;
    
    int level;
    
    cout << "Please choose the level of game\n";
    cout << "1:easy\n" << "2:medium\n" << "3:hard\n";
    cout << "Please enter 1, 2, or 3\n";
    
    cin >> level;
    
    return(level);
    
}

void printBoard(Board board)
{
    using namespace std;
    
    int i,j;
    
    cout << "You are X, computer is O\n";
    cout << "Game " << board.game << endl;
    //print first line
    cout << " ";
    for(i=0;i<Dim;i++)
        cout << " " << i+1;
    cout << endl;
    //print second line
    cout << " +";
    for(i=0;i<Dim;i++)
        cout << "-+";
    cout << endl;
    //print the content of matrix
    
    for(j=0;j<Dim;j++)  // row index
    {
        cout << j+1 <<"|";
        for(i=0;i<Dim;i++) // column index
        {
            switch (board.matrix[j][i]) {
                case 0:
                    cout << " |";
                    break;
                case 1:
                    cout << "X|";
                    break;
                case 2:
                    cout << "O|";
                    break;
                default:
                    break;
            }
        }
        cout << endl;
        
        cout << " +";
        for(i=0;i<Dim;i++)
            cout << "-+";
        cout << endl;
    }
   // cout << "1 1 is " <<board.matrix[0][0]<<endl;// for test
   // cout << "1 2 is " <<board.matrix[0][1]<<endl;// for test
}

bool repeat()
{
    using namespace std;
    
    string r;
    
    do
    {
        cout << "Do you want to play again?\n";
        cout << "Press Y to continue, press Q to quit\n";
        cin >> r;
    }while(r!="Y" && r!= "y" && r!="Q" && r!="q");
    if(r=="Y" || r == "y") return true;
    else return false;
}