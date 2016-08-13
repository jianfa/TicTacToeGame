//
//  checkWin.cpp
//  TicTacToe
//
//  Created by Jianfa Chen on 8/3/16.
//  Copyright (c) 2016 Jianfa Chen. All rights reserved.
//

#include "checkWin.h"

int checkWin(Board board) //-1 represents not finish yet, 0 represents tie, 1 represents someone win
{
    using namespace std;
    
    int i,j;
    bool win,nonzero;
    
    if(Dim==1)return 1; // always win in 1X1 case
    
    //check row
    for(i=0;i<Dim;i++)
    {
        win = (board.matrix[i][0] != 0);
        j=1;
        do
        {
            win=(board.matrix[i][0]==board.matrix[i][j] && win);
            j++;
        }while(win && j<Dim);
        if(win) return 1;
    }
    
    //check column
    for(i=0;i<Dim;i++)
    {
        win = (board.matrix[i][0] != 0);
        j=1;
        do
        {
            win=(board.matrix[0][i]==board.matrix[j][i] && win);
            j++;
        }while(win && j<Dim);
        if(win) return 1;
    }
    
    //check diagonal 
    win = (board.matrix[0][0] != 0);
    i=0;
    do
    {
        win=(board.matrix[0][0]==board.matrix[i][i] && win);
        i++;
    }while(win && i<Dim);
    if(win) return 1;
    
    // check diagonal /
    win = (board.matrix[0][Dim-1] != 0);
    i=0;
    do
    {
        win=(board.matrix[0][Dim-1]==board.matrix[i][Dim-1-i] && win);
        i++;
    }while(win && i<Dim);
    if(win) return 1;
    
    // check whether board is full
    nonzero=true;
    for(i=0;i<Dim;i++)
        for(j=0;j<Dim;j++)
            nonzero= nonzero && board.matrix[i][j]!=0;
    if(nonzero) return 0; // board is full
    else return -1;  // board is not full
    
}