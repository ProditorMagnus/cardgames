#include "card.h"
#include<string>
#include<cmath>

using namespace std;
using namespace mast;
using namespace tugevus;

string Card::mastToString(const Mast &mast) const {
	switch (mast){
	case Mast::risti:
		return "clubs";
	case Mast::poti:
		return "spades";
	case Mast::ruutu:
		return "tiles";
	case Mast::artu:
		return "hearts";
	}
	assert(false);
}

string Card::tugevusToString(const Tugevus &tugevus) const {
	switch (tugevus){
	case Tugevus::ace:
		return "ace";
	case Tugevus::king:
		return "king";
	case Tugevus::queen:
		return "queen";
	case Tugevus::soldier:
		return "soldier";
	case Tugevus::two:
		return "two";
	case Tugevus::three:
		return "three";
	case Tugevus::four:
		return "four";
	case Tugevus::five:
		return "five";
	case Tugevus::six:
		return "six";
	case Tugevus::seven:
		return "seven";
	case Tugevus::eight:
		return "eight";
	case Tugevus::nine:
		return "nine";
	case Tugevus::ten:
		return "ten";
	}
	assert(false);
}

Card::Card(Mast mast, Tugevus tugevus){
	this->mast = mast;
	this->tugevus = tugevus;
}

signed int Card::bjValue(){
	switch (tugevus){
	case Tugevus::ace:
		return 11;
	case Tugevus::king:
		return 10;
	case Tugevus::queen:
		return 10;
	case Tugevus::soldier:
		return 10;
	case Tugevus::two:
		return 2;
	case Tugevus::three:
		return 3;
	case Tugevus::four:
		return 4;
	case Tugevus::five:
		return 5;
	case Tugevus::six:
		return 6;
	case Tugevus::seven:
		return 7;
	case Tugevus::eight:
		return 8;
	case Tugevus::nine:
		return 9;
	case Tugevus::ten:
		return 10;
	}
	assert(false);
}
