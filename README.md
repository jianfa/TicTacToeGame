# TicTacToeGame  

The most common board size in two-dimensional Tic-Tac-Toe is 3x3, meaning a square grid with three rows and three columns.   
Board sizes larger than 3x3 are also possible: 4x4, 5x5, etc.  
Board sizes of 1x1 and 2x2 are always won by the first player.  
Design your game to work properly for any board size starting with 1x1. Make the board size a declared constant in your program.  
You will be playing against computer. Computer will decide it's moves based on empty locations.  
You can have three difficluty levels of game: 1. easy, 2. medium, 3. hard  
	- For easy level computer generates random numbers. If a spot is already taken then another number is generated.  
	- For medium level computer checks if it can win in next move.  
	- For hard level computer always tries to pick spots to win the game. Random number generation is not needed for this. You will need some predfined moves based on user moves.  
	- User selects the level of difficulty.  
	- User goes first in first game then it alternates for any subsequent games.  

Sample output:  
--------------
Welcome to Tic-Tac-Toe!  
  1 2 3  
 +-+-+-+  
1| | | |  
 +-+-+-+  
2| | | |  
 +-+-+-+  
3| | | |  
 +-+-+-+  
What is your move? Please type a row number
from 1 to 3 and a column number from 1 to 3.
1 1
  1 2 3
 +-+-+-+
1|X| | |
 +-+-+-+
2| | | |
 +-+-+-+
3| | | |
 +-+-+-+
My move is row 1 column 3.
  1 2 3
 +-+-+-+
1|X| |O|
 +-+-+-+
2| | | |
 +-+-+-+
3| | | |
 +-+-+-+
What is your move? Please type a row number
from 1 to 3 and a column number from 1 to 3.
3 3
  1 2 3
 +-+-+-+
1|X| |O|
 +-+-+-+
2| | | |
 +-+-+-+
3| | |X|
 +-+-+-+

My move is row 3 column 2.
  1 2 3
 +-+-+-+
1|X| |O|
 +-+-+-+
2| | | |
 +-+-+-+
3| |O|X|
 +-+-+-+

What is your move? Please type a row number
from 1 to 3 and a column number from 1 to 3.
2 2
  1 2 3
 +-+-+-+
1|X| |O|
 +-+-+-+
2| |X| |
 +-+-+-+
3| |O|X|
 +-+-+-+

Congratulations! You win!
Thank you for playing Tic-Tac-Toe.



 Created by Jianfa Chen on August 3, 2016  
 Use the following commands to compile:  
 c++ main.cpp -o a.out  
 or  
 g++ main.cpp -o a.out  
The default dimension is 3x3. It can be changed by changing the Dim varialb in **board.h file**.  
 So far only the easy mode works. Both medium mode and hard mode is easy mode in fact.


