#include "Board.h"
#include <string>
#include <iostream>
using namespace std;

Board::Board(){
  numPieces = 0;
  populateBoard();
}

void Board::populateBoard(){
  for(int i = 0; i < 6; i++){
    for(int j = 0; j < 7; j++){

      board[i][j] = '_';
    }
  }
}

void Board::printBoard(){
  for(int i = 0; i < 6; i++){
    for(int j = 0; j < 7; j++){

      cout << "|" << board[i][j];
    }
    cout << "|" << endl;
  }
}

void Board::addPiece(char c, int col){
  int boardCol = col - 1;
  bool spaceOccupied = true;
  int temp = 5;
  while(spaceOccupied == true){
    if(board[temp][boardCol] == '_'){
      board[temp][boardCol] = c;
      spaceOccupied = false;
    }
    else{
      temp--;
    }
  }
  numPieces++;
  printBoard();
}

bool Board::checkCol(int col){
  int boardCol = col - 1;
  for(int i = 0; i < 6; i++){
    if(board[i][boardCol] == '_'){
      return true;
    }
  }
  return false; 
}

bool Board::stillPlaying(){
  if(numPieces == 42){
    cout << "The board is full, it is a draw!" << endl;
    return false;
  }
  
  return checkWinner();
}

bool Board::checkWinner(){
  if(checkMatching() == false){
    return false;
  }
  else if(checkDiagonal() == false){
    return false;
  }
  return true;
}

bool Board::checkMatching(){
  string match = "";
  for(int i = 0; i < 6; i++){
    for(int j = 0;j < 7; j++){
      match += board[i][j];
    }
    match += " ";
  }
  for(int i = 0; i < 7; i++){
    for(int j = 0; j < 6; j++){
      match += board[j][i];
    }
    match += " ";
  }

  if(match.find("XXXX") != string::npos || match.find("OOOO") != string::npos){
    return false;
  }
  return true;
}

bool Board::checkDiagonal(){
  string match = "";
  for(int i = 3; i < 6; i++){
    for(int j = 0; j < 4; j++){
      match = "";
      match += board[i][j];
      match += board[i-1][j+1];
      match += board[i-2][j+2];
      match += board[i-3][j+3];
      if(match == "XXXX" || match == "OOOO"){
        return false;
      }
    }
  }

  for(int i = 3; i  < 6; i++){
    for(int j = 3; j < 7; j++){
      match = "";
      match += board[i][j];
      match += board[i-1][j-1];
      match += board[i-2][j-2];
      match += board[i-3][j-3];
      if(match == "XXXX" || match == "OOOO"){
        return false;
      }
    }
  }
  return true;
}
