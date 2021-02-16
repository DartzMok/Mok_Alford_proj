#include <iostream>
#include <stdlib.h>
#include <string>
#include "Board.h"
#include "Player.h"
#include "HumanPlayer.h"
#include "SimpleComputerPlayer.h"
using namespace std;

/*
Plays a game of connect four
*/

int main(int argc, char * argv[]){
  Board * play = new Board();
  string input1 = argv[1]; string input2 = argv[2];
  Player * pla1, * pla2;
  if(input1 == "-c"){
    SimpleComputerPlayer * playerComp1 = new SimpleComputerPlayer();
    pla1 = playerComp1;
  }
  else if(input1 == "-h"){
    HumanPlayer * playerHuman1 = new HumanPlayer();
    pla1 = playerHuman1;
  }
  if(input2 == "-c"){
    SimpleComputerPlayer * playerComp2 = new SimpleComputerPlayer();
    pla2 = playerComp2;
  }
  else if(input2 == "-h"){
    HumanPlayer * playerHuman2 = new HumanPlayer();
    pla2 = playerHuman2;
  }
  pla1 -> setPiece('X'); pla2 -> setPiece('O');
  play -> printBoard();
  while(play -> stillPlaying()){
    if(play -> stillPlaying()){pla1 -> makeMove(play);}
    if(play -> stillPlaying()){pla2 -> makeMove(play);}
  }
  delete play;delete pla1;delete pla2;
}
