#include "hand.h"

Hand::Hand()
{
	//ctor
}

Hand::~Hand()
{
	//dtor
}

void Hand::addCard(Card card){
	cards.push_back(card);
}

void Hand::printCards(){
	for(auto &i : cards){
		cout<<i<<endl;
	}
}

vector<Card> Hand::getCards(){
	return cards;
}
