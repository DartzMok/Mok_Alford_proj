#ifndef HUMANPLAYER_H
#define HUMANPLAYER_H
#include "Player.h"
#include "Board.h"
#include <string>
using namespace std;

/*
Class that defines a human play in the game of connect four.
A human player has the ability to choose what column their 
piece is placed into
*/

class HumanPlayer : public Player{
public:
  //Default constructor for the human player
  HumanPlayer();

  //Implementation of makeMove method in Player.h
  //See Player.h
  bool makeMove(Board *&board);

  //Implementation of setPiece method in Player.h
  //See Player.h
  void setPiece(char);

  //Implementation of setName method in Player.h
  //See Player.h
  void setName();

  //Implementation of getName method in Player.h
  //See Player.h
  string getName();

  //Destructor for the human player class
  ~HumanPlayer();
};
#endif
