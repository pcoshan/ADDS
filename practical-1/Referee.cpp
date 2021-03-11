#include "Referee.h"

Referee::Referee(){

}
char Referee::refGame(HumanPlayer p1, ComputerPlayer p2){
	char p1move = p1.makeMove();
	char pcmove = p2.makeMove();
	if(p1move == 'S'){
		return 'L';
	}else if(p1move == 'P'){
		return 'W';
	}else{
		return 'D';
	}
}