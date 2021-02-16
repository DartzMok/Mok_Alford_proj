#ifndef BOARD_H
#define BOARD_H

/* 
The class represents a 7x7 board of the game connect four.
It also detects if any player is the winner of the game or
if the game ends in a draw 
*/

class Board{
private:
  //Counts the number of pieces in the board
  int numPieces;

  //2D array that represents the board
  char board[7][7] = {};
public:
  //Default constructor for the board
  Board();

  //Prints the contents of the board
  void printBoard();

  //Initializes the 2d array to be filled with "_" characters
  //marking an empty board
  void populateBoard();

  //Adds a certain piece to the board
  void addPiece(char c, int col);

  //Checks for the next availible space within the board
  //to determine where a piece can be dropped
  bool checkCol(int col);

  //Returns a bool value based on if a winner has been found
  bool stillPlaying();

  //Destructor for the board class
  ~Board() {};

  //Calls checkMatching and checkDiagonal to see if
  //four in a row has been found
  bool checkWinner();

  //Checks for four in a row vertically and horizontally
  bool checkMatching();

  //Checks for four in a row diagonally
  bool checkDiagonal();
};

#endif
