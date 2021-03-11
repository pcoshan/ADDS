#include "Human.h"

HumanPlayer::HumanPlayer(){
	
}

char HumanPlayer::makeMove(){
  char move;
  std::cout<<"Enter move: ";
  std::cin>>move;
  return move;
}
