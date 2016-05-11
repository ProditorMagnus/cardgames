#ifndef CARD_H
#define CARD_H
#include<list>
#include<string>
#include<sstream>
#include<cmath>
#include<vector>
#include<iostream>
#include<algorithm>
#include<cassert>

using namespace std;

namespace mast{
	enum class Mast { // c++11 strongly typed enum
		risti = 1,
		poti = 2,
		ruutu = 3,
		artu = 4
	};
}
using namespace mast;

namespace tugevus{
	enum class Tugevus {
		two = 2,
		three = 3,
		four = 4,
		five = 5,
		six = 6,
		seven = 7,
		eight = 8,
		nine = 9,
		ten = 10,
		soldier = 11,
		queen = 12,
		king = 13,
		ace = 14
	};
}
using namespace tugevus;

class Card {
public:
	Mast mast;
	Tugevus tugevus;
	signed int bjValue();
	
	Card(Mast mast, Tugevus tugevus);
	
	
	string mastToString(const Mast &mast) const;
	string tugevusToString(const Tugevus &tugevus) const;
	
    string imageName() const;

	std::string toString() const {
		std::string s = "Card(";
		std::ostringstream os;
		s+=mastToString(mast);
		os<<":";
		os<<tugevusToString(tugevus);
		s+=os.str();
		s+=")";
		return s;
		
	}
	/// Shifts description to steam
	friend std::ostream& operator<<(std::ostream& out, const Card& p){
		out<<p.toString();
		return out;
	};
};


#endif // CARD_H
