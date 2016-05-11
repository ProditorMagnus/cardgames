#ifndef HAND_H
#define HAND_H
#include "deck.h"

class Hand
{
	public:
		Hand();
		void printCards();
		void addCard(Card card);
		vector<Card> getCards();
		virtual ~Hand();
	protected:
	private:
		vector<Card> cards;
};

#endif // HAND_H
