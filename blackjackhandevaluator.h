#ifndef BLACKJACKHANDEVALUATOR_H
#define BLACKJACKHANDEVALUATOR_H
#include "hand.h"

class BlackJackHandEvaluator
{
	public:
        BlackJackHandEvaluator(Hand &hand);
		signed int eval();
		signed int min_sum();
		signed int max_sum();
		
		virtual ~BlackJackHandEvaluator();
	protected:
	private:
        Hand hand;
};

#endif // BLACKJACKHANDEVALUATOR_H
