//
//  reSet.cpp
//  TicTacToe
//
//  Created by Jianfa Chen on 8/3/16.
//  Copyright (c) 2016 Jianfa Chen. All rights reserved.
//

#include "reset.h"

Board reset(Board board)
{
    using namespace std;
    
    int i,j;
    
    for(i=0;i < Dim;i++)
        for(j=0;j< Dim;j++)
            board.matrix[i][j]=0;
    board.game++;
    board.player = board.game;
    cout << "Game " << board.game << endl;//
    return board;
}