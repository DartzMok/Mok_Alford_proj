#include "HumanPlayer.h"
#include "Board.h"
#include <string>
#include <iostream>
using namespace std;


HumanPlayer::HumanPlayer(){
  setName();
}


void HumanPlayer::setName(){
  if(Player::playerNum == 1){
    cout << "Player One, please enter your name: ";
  }
  else if(Player::playerNum == 2){
    cout << "Player Two, please enter your name: ";
  }
  cin >> name; cout << endl;
  Player::playerNum++;
}


bool HumanPlayer::makeMove(Board *&board){
  int col;
  cout << name << "'s turn, Please enter an integer between 1 and 7: ";
  cin >> col; cout << endl;
  board -> addPiece(piece, col);
  
  if(board -> checkWinner() == false){
    cout << name << " Connected Four and Wins!" << endl;
    return false;
  }
  return true;
}

HumanPlayer::~HumanPlayer(){
}
