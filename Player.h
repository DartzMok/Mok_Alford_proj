#ifndef PLAYER_H
#define PLAYER_H
#include <cstdlib>
#include <string>
#include "Board.h"
using namespace std;

/*
Class represents the outline of a player character that can play
connect four. This class acts as an "interface" for the human and 
computer player classes
*/

class Player{
protected:
  //Stores the name of the player
  string name;
public:
  //stores what kind of piece represents the player
  char piece;

  //Stores which player is Player one and which is Player two
  static int playerNum;

  //Default constructor that prompts the user for a name and stores it
  Player();

  //Places the player's piece at the location specified by the player
  virtual bool makeMove(Board *&board) = 0;

  //Stores the piece that represents the player in the corresponding variable
  void setPiece(char);

  //Prompts the user for a name and stores it in the cooresponding variable
  void setName();

  //Returns the name of the player
  string getName();

  //Destructor for the player class
  virtual ~Player() = 0;
};

#endif
