#include "bjgame.h"
#include "hand.h"
#include "bjdisplay.h"
typedef BJgame bg;
typedef BlackJackHandEvaluator BE;

bg::BJgame(BJdisplay *display, Deck *deck)
{
    //ctor
    this->display = display;
    this->deck = deck;
    this->p1 = Hand();
    this->p2 = Hand();
    p1.addCard(this->deck->draw());
    p1.addCard(this->deck->draw());
    p2.addCard(this->deck->draw());
    p2.addCard(this->deck->draw());
    if(evalp1()==21 && evalp2()!=21){
        /// player 1 wins
        result = 1;
        display->win1();
        cout<<"Player 1 wins, game over!"<<endl;
    }
}

bg::~BJgame()
{
	//dtor
}

void bg::drawp1(){
	p1.addCard(deck->draw());
	if(evalp1()>21){
		/// player 1 loses
        finish();
        //cout<<"Player 1 lost"<<endl;
        //display->lose1();
	}
}
void bg::drawp2(){
	p2.addCard(deck->draw());
	if(evalp2()>21){
		/// player 1 wins
        finish();
        //cout<<"Player 1 won"<<endl;
        //display->win1();
	}
}

unsigned int bg::evalp1(){
	BE be1(p1.getCards());
	return be1.eval();
}

unsigned int bg::evalp2(){
	BE be2(p2.getCards());
	return be2.eval();
}

void bg::print(){
	cout<<"p1:"<<endl;
	p1.printCards();
	BE be1(p1.getCards());
	cout<<be1.eval()<<endl;
	cout<<"p2:"<<endl;
	p2.printCards();
	BE be2(p2.getCards());
	cout<<be2.eval()<<endl;
}

void bg::dealerplay(){
	if(result!=0){
        finish();
		return;
	}
	cout<<"Starting dealer turn "<<evalp2()<<endl;
	BE be(p2.getCards());
	if(be.max_sum()<17){
		/// kui suurim võimalik summa on alla 17 siis peab juurde võtma
		p2.addCard(deck->draw());
		return dealerplay();
	}
	/// kas dealer teab, kui palju mängija sai?
	cout<<"Ended dealer actions "<<evalp2()<<endl;
    finish();
}

void bg::finish(){
    cout<<"p1 "<<evalp1()<<endl;
    cout<<"p2 "<<evalp2()<<endl;
	if(evalp1()>21){
		/// player 1 loses
		result = -1;
        display->lose1();
		cout<<"Finished with player 1 loss"<<endl;
	} else if(evalp2()>21){
		/// player 1 wins
		result = 1;
        display->win1();
		cout<<"Finished with player 1 win"<<endl;
		return;
	} else if(evalp1()>evalp2()){
		/// player 1 wins
		result = 1;
        display->win1();
		cout<<"Finished with player 1 win"<<endl;
	} else if(evalp2()>evalp1()){
		/// player 1 loses
		result = -1;
        display->lose1();
		cout<<"Finished with player 1 loss"<<endl;
	} else {
		/// draw, but letting player 1 win
		result = 1;
        display->win1();
		cout<<"Finished game with draw, so granted win to player 1"<<endl;
	}
}
