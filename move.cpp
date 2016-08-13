//
//  move.cpp
//  TicTacToe
//
//  Created by Jianfa Chen on 8/3/16.
//  Copyright (c) 2016 Jianfa Chen. All rights reserved.
//

#include "move.h"

//prototype of functions
Board move(Board board);
bool isMoveLegal(Coordinate cor,Board board);
Coordinate getHumanMove();
Coordinate getComputerMove(Board board);

Board move(Board board)
{
    using namespace std;
    
    Coordinate cor;
    bool legal;
    
    if(board.player%2==1)
    {
        do
        {
            cor=getHumanMove();
            legal=isMoveLegal(cor,board);
            if(!legal) cout << "Your input is illegal, please input again.\n";
        }while(legal==false);
        cout << "You move is "<<cor.x<<" "<<cor.y << endl;
        board.matrix[cor.x-1][cor.y-1]=1; // 1 represents player
    }
    else
    {
        do
        {
            cor=getComputerMove(board);
        }while(isMoveLegal(cor,board)==false);
        cout << "My move is "<<cor.x<<" "<<cor.y << endl;
        board.matrix[cor.x-1][cor.y-1]=2; //2 represents computer
    }
    
    board.player++; //alter player
    return board;
}

bool isMoveLegal(Coordinate cor,Board board)
{
    if(cor.x > Dim || cor.y > Dim) return false;
    else if(board.matrix[cor.x-1][cor.y-1]!=0) return false;
    else return true;
}

Coordinate getHumanMove()
{
    using namespace std;
    
    Coordinate cor;
    
    cout << "What's your Move? Please type a row number for 1 to " << Dim << ",and a column number from 1 to " << Dim << endl;
    cout << "For example: 1 1\n";
    
    scanf("%d %d",&cor.x,&cor.y);
    return cor;
}

Coordinate getComputerMove(Board board)
{
    Coordinate cor;
    
    if(board.level==1)
    {
        cor.x = rand() % Dim + 1;
        cor.y = rand() % Dim + 1;
       // std::cout << "cor.x is " << cor.x <<" cor.y is " << cor.y << std::endl; // for test
    }
    
    else if(board.level==2)
    {
        cor.x = rand() % Dim + 1;
        cor.y = rand() % Dim + 1;
    }
    else
    {
        cor.x = rand() % Dim + 1;
        cor.y = rand() % Dim + 1;
    }
    return cor;
}
