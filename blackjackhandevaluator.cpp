#include "blackjackhandevaluator.h"

typedef BlackJackHandEvaluator be;

be::BlackJackHandEvaluator(vector<Card> cards)
{
	//ctor
	this->cards = cards;
}

be::~BlackJackHandEvaluator()
{
	//dtor
}

signed int be::eval(){
	int min_sum = 0;
	int max_sum = 0;
	// see toimib kui on 1 äss... aga kui on 2/3/4?
	for(auto &i : cards){
		if(i.bjValue()==11){
			if(min_sum==max_sum){
				// esimene äss
				//cout<<"Handle ace "<<i<<"\n";
				min_sum+=1;
				max_sum+=11;
			} else {
				// siin on teada, et vähemalt kaks ässa juba on.
				// seega sellest on ainult mõtet võta 1, kuna 11+11>21
				min_sum+=1;
				max_sum+=1;
				//cout<<"Repeated ace "<<i<<"\n";
			}
		} else {
			//cout<<i<<" "<<i.bjValue()<<endl;
			min_sum+=i.bjValue();
			max_sum+=i.bjValue();
		}
	}
	return max_sum>21 ? min_sum : max_sum;
}

signed int be::min_sum(){
	int min_sum = 0;
	int max_sum = 0;
	for(auto &i : cards){
		if(i.bjValue()==11){
			min_sum+=1;
			max_sum+=11;
			//cout<<i<<" "<<1<<endl;
		} else {
			//cout<<i<<" "<<i.bjValue()<<endl;
			min_sum+=i.bjValue();
			max_sum+=i.bjValue();
		}
	}
	return min_sum;
}

signed int be::max_sum(){
	int min_sum = 0;
	int max_sum = 0;
	for(auto &i : cards){
		if(i.bjValue()==11){
			if(min_sum==max_sum){
				min_sum+=1;
				max_sum+=11;
				//cout<<i<<" "<<11<<endl;
			} else {
				min_sum+=1;
				max_sum+=1;
				//cout<<i<<" "<<1<<endl;
			}
		} else {
			//cout<<i<<" "<<i.bjValue()<<endl;
			min_sum+=i.bjValue();
			max_sum+=i.bjValue();
		}
	}
	return max_sum;
}
