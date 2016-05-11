#ifndef DECK_H
#define DECK_H
#include "card.h"
#include<vector>
#include<cstdlib>
#include<ctime>

/// Support shuffle, keep pointers to cards

class Deck
{
	public:
		void printCards();
		void shuffle();
		Card draw();
		unsigned int size();
		
		Deck(unsigned int type_id);
		virtual ~Deck();
	protected:
	private:
		vector<Card> cards;
};

#endif // DECK_H
