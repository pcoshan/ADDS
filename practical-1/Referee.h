#include "Human.h"
#include "Computer.h"

#ifndef _REF
#define _REF

class Referee{
public:
	Referee();
	char refGame(HumanPlayer p1, ComputerPlayer p2);
};
#endif