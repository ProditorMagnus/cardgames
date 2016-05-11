#include "deck.h"

Deck::Deck(unsigned int type_id)
{
	//ctor
	/// Adds standard 52 items to cards
	if(type_id==52){
		// http://www.calcul.com/catesian-product-calculator
		cards.push_back(Card(Mast::risti,Tugevus::two));
		cards.push_back(Card(Mast::risti,Tugevus::three));
		cards.push_back(Card(Mast::risti,Tugevus::four));
		cards.push_back(Card(Mast::risti,Tugevus::five));
		cards.push_back(Card(Mast::risti,Tugevus::six));
		cards.push_back(Card(Mast::risti,Tugevus::seven));
		cards.push_back(Card(Mast::risti,Tugevus::eight));
		cards.push_back(Card(Mast::risti,Tugevus::nine));
		cards.push_back(Card(Mast::risti,Tugevus::ten));
		cards.push_back(Card(Mast::risti,Tugevus::soldier));
		cards.push_back(Card(Mast::risti,Tugevus::queen));
		cards.push_back(Card(Mast::risti,Tugevus::king));
		cards.push_back(Card(Mast::risti,Tugevus::ace));
		cards.push_back(Card(Mast::poti,Tugevus::two));
		cards.push_back(Card(Mast::poti,Tugevus::three));
		cards.push_back(Card(Mast::poti,Tugevus::four));
		cards.push_back(Card(Mast::poti,Tugevus::five));
		cards.push_back(Card(Mast::poti,Tugevus::six));
		cards.push_back(Card(Mast::poti,Tugevus::seven));
		cards.push_back(Card(Mast::poti,Tugevus::eight));
		cards.push_back(Card(Mast::poti,Tugevus::nine));
		cards.push_back(Card(Mast::poti,Tugevus::ten));
		cards.push_back(Card(Mast::poti,Tugevus::soldier));
		cards.push_back(Card(Mast::poti,Tugevus::queen));
		cards.push_back(Card(Mast::poti,Tugevus::king));
		cards.push_back(Card(Mast::poti,Tugevus::ace));
		cards.push_back(Card(Mast::ruutu,Tugevus::two));
		cards.push_back(Card(Mast::ruutu,Tugevus::three));
		cards.push_back(Card(Mast::ruutu,Tugevus::four));
		cards.push_back(Card(Mast::ruutu,Tugevus::five));
		cards.push_back(Card(Mast::ruutu,Tugevus::six));
		cards.push_back(Card(Mast::ruutu,Tugevus::seven));
		cards.push_back(Card(Mast::ruutu,Tugevus::eight));
		cards.push_back(Card(Mast::ruutu,Tugevus::nine));
		cards.push_back(Card(Mast::ruutu,Tugevus::ten));
		cards.push_back(Card(Mast::ruutu,Tugevus::soldier));
		cards.push_back(Card(Mast::ruutu,Tugevus::queen));
		cards.push_back(Card(Mast::ruutu,Tugevus::king));
		cards.push_back(Card(Mast::ruutu,Tugevus::ace));
		cards.push_back(Card(Mast::artu,Tugevus::two));
		cards.push_back(Card(Mast::artu,Tugevus::three));
		cards.push_back(Card(Mast::artu,Tugevus::four));
		cards.push_back(Card(Mast::artu,Tugevus::five));
		cards.push_back(Card(Mast::artu,Tugevus::six));
		cards.push_back(Card(Mast::artu,Tugevus::seven));
		cards.push_back(Card(Mast::artu,Tugevus::eight));
		cards.push_back(Card(Mast::artu,Tugevus::nine));
		cards.push_back(Card(Mast::artu,Tugevus::ten));
		cards.push_back(Card(Mast::artu,Tugevus::soldier));
		cards.push_back(Card(Mast::artu,Tugevus::queen));
		cards.push_back(Card(Mast::artu,Tugevus::king));
		cards.push_back(Card(Mast::artu,Tugevus::ace));
	}
	if( type_id == 16){
		cards.push_back(Card(Mast::risti,Tugevus::two));
		cards.push_back(Card(Mast::risti,Tugevus::three));
		cards.push_back(Card(Mast::risti,Tugevus::four));
		cards.push_back(Card(Mast::risti,Tugevus::ace));
		cards.push_back(Card(Mast::poti,Tugevus::two));
		cards.push_back(Card(Mast::poti,Tugevus::three));
		cards.push_back(Card(Mast::poti,Tugevus::four));
		cards.push_back(Card(Mast::poti,Tugevus::ace));
		cards.push_back(Card(Mast::ruutu,Tugevus::two));
		cards.push_back(Card(Mast::ruutu,Tugevus::three));
		cards.push_back(Card(Mast::ruutu,Tugevus::four));
		cards.push_back(Card(Mast::ruutu,Tugevus::ace));
		cards.push_back(Card(Mast::artu,Tugevus::two));
		cards.push_back(Card(Mast::artu,Tugevus::three));
		cards.push_back(Card(Mast::artu,Tugevus::four));
		cards.push_back(Card(Mast::artu,Tugevus::ace));
	}
}

Deck::~Deck(){
	//dtor
}


void Deck::printCards(){
	for(auto &i : cards){
		cout<<i<<endl;
	}
}

void Deck::shuffle(){
	srand (time(NULL));
	random_shuffle(cards.begin(),cards.end());
}

Card Deck::draw(){
	if(cards.size()<1){
		assert(false);
	}
	Card card = cards.back();
	cards.pop_back();
	return card;
}

unsigned int Deck::size(){
	return cards.size();
}
