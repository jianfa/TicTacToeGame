//
//  main.cpp
//  TicTacToe
//
//  Created by Jianfa Chen on 8/1/16.
//  Copyright (c) 2016 Jianfa Chen. All rights reserved.
//

#include <iostream>
#include "board.h"
#include "move.h"
#include "initialization.cpp"
#include "move.cpp"
#include "checkWin.cpp"
#include "reset.cpp"


int main() {
    
    using namespace std;
    
    Board board;
    bool quit;
    
    welcome();
    board = initialization();
    do
    {
        printBoard(board);
        do
        {
            board = move(board);
            printBoard(board);
        }while(checkWin(board)==-1);//one game loop. -1 represents not finish yet, 0 represents tie, 1 represents someone win
        if(checkWin(board)==0) cout << "It's a tie game.\n";
        else if(board.player%2==1) cout << "Computer wins the game.\n";
        else cout << "Congratulations! You win the game.\n";

        quit = !repeat();
        if(!quit) board = reset(board);
    }while(quit == false);// games loop

    return 0;
}
