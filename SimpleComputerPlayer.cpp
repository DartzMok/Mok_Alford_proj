#include "SimpleComputerPlayer.h"
#include "Board.h"
#include <string>
#include <iostream>
using namespace std;

SimpleComputerPlayer::SimpleComputerPlayer(){
  setName();
  playerNum++;
}

void SimpleComputerPlayer::setName(){
  name = "Zoey";

  if(playerNum ==1){
    cout << "Player One, please enter your name: " << name << endl;
  }
  else if(playerNum == 2){
    cout << "Player Two, please enter your name: " << name << endl;
  }
}

bool SimpleComputerPlayer::makeMove(Board *&board){
  int col = 1;

  while(board -> checkCol(col) != true){
    col++;
  }

  cout << name << "'s turn, Please enter an integer between 1 and 7: " << col << endl;

  board ->addPiece(piece, col);

  if(board -> checkWinner() == false){
    cout << name << " Connected Four and Wins!" << endl;
    return false;
  }
  return true;
}

SimpleComputerPlayer::~SimpleComputerPlayer(){
}
