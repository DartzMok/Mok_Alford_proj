#include "Player.h"
#include <string>

int Player::playerNum = 1;

Player::Player(){
  name = "";
}

void Player::setPiece(char c){
  piece = c;
}

string Player::getName(){
  return name;
}

Player::~Player(){
}
