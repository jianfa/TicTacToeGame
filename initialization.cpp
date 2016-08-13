//
//  initialization.cpp
//  TicTacToe
//
//  Created by Jianfa Chen on 8/1/16.
//  Copyright (c) 2016 Jianfa Chen. All rights reserved.
//

#include "board.h"
#include "printBoard.cpp"

Board initialization()
{
    Board board;
    int i,j,level;
    
    for(i=0;i < Dim;i++)
        for(j=0;j< Dim;j++)
            board.matrix[i][j]=0;
    board.game = 1;
    board.player = 1;
    do
    {
      level=chooseLevel();
    }while(level!=1 && level!=2 && level !=3);
    
    board.level = level;
    return(board);
    
}