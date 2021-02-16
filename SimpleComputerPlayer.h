#ifndef SIMPLECOMPUTERPLAYER_H
#define SIMPLECOMPUTERPLAYER_H
#include "Player.h"
#include "Board.h"
#include <string>
using namespace std;


/*
 The class represents a simple computer palyer for the game
 of connect four. The simple computer places a piece at the
 next availible left-most space in the board and will continue
 to do so until the game finishes
*/

class SimpleComputerPlayer : public Player{
public:
  //Default constructor for the simple computer player class 
  SimpleComputerPlayer();

  //Implementation of the makeMove method in Player.h
  //See Player.h
  bool makeMove(Board *&board);

  //Implementation of setPiece method in Player.h
  //See Player.h
  void setPiece(char);

  //Implementation of setName method in Player.h
  //Always sets name to "Zoey"
  //See Player.h
  void setName();

  //Implementation of getName method in Player.h
  //See Player.h
  string getName();

  //Destructor for simple computer player class
  ~SimpleComputerPlayer();
};

#endif
