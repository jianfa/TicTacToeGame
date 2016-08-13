//
//  initialization.h
//  TicTacToe
//
//  Created by Jianfa Chen on 8/1/16.
//  Copyright (c) 2016 Jianfa Chen. All rights reserved.
//

#ifndef __TicTacToe__initialization__
#define __TicTacToe__initialization__

#include <stdio.h>
#include <iostream>

const int Dim = 3;

class Board
{
public:
    int matrix[Dim][Dim];
    int game;
    int player;
    int level;
};

#endif /* defined(__TicTacToe__initialization__) */
