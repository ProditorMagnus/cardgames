#ifndef BJGAME_H
#define BJGAME_H
#include "blackjackhandevaluator.h"


/**
	see peab siis käituma kui vahelüli graafilise poole ja loogika vahel
	dealer is referred to as player2
*/
class BJdisplay;
class BJgame
{
	public:
        BJdisplay *display = nullptr;

        BJgame(BJdisplay *display, Deck *deck);
		
		signed int result = 0; /// 1 kui võidab mängija 1 ja -1 kui kaotab mängija 1
		
		Deck* deck;
		Hand p1;
		Hand p2;
		void drawp1();
		void drawp2();
		
		unsigned int evalp1();
		unsigned int evalp2();
		
		void dealerplay();
		
		void print();
		void finish();
		virtual ~BJgame();
	protected:
	private:
};

#endif // BJGAME_H
