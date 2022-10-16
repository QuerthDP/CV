#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
#include <time.h>
#include <conio.h>
#include <fstream>

using namespace std;

void wait( int sec )
{
    clock_t end;
    end = clock() + sec * CLOCKS_PER_SEC;
    while( clock() < end ) { }
}

int main() {
	setlocale(LC_CTYPE, "Polish");
	srand( time( NULL ) );




int i, p, q, k, a, b, c, d;

int lost_count;
ifstream loadl("lost.txt");
		i = 0;
		if(loadl.is_open())
		{
			int plost;
			while(loadl>>plost)
			{
				if(i == 4){
				lost_count = plost;
				}
				i++;
			}
		}
		loadl.close();

string p1;
string p2;
string p3;
string p4;

ifstream names("names.txt");
	i = 0;
	if(names.is_open())
	{
		char name[100];
		while(names>>name)
		{
			if(i == 0){
			p1 = name;
			}
			if(i == 1){
			p2 = name;
			}
			if(i == 2){
			p3 = name;
			}
			if(i == 3){
			p4 = name;
			}
			i++;
		}
	}
	names.close();
	
int p1_money, p1_deposit, p1_ready;
int p2_money, p2_deposit, p2_ready;
int p3_money, p3_deposit, p3_ready;
int p4_money, p4_deposit, p4_ready;	

	ifstream loadm("money.txt");
	i = 0;
	if(loadm.is_open())
	{
		int pmoney;
		while(loadm>>pmoney)
		{
			if(i == 0){
			p1_money = pmoney;
			}
			if(i == 1){
			p2_money = pmoney;
			}
			if(i == 2){
			p3_money = pmoney;
			}
			if(i == 3){
			p4_money = pmoney;
			}
			i++;
		}
	}
	loadm.close();
	
	ifstream loadd("deposit.txt");
	i = 0;
	if(loadd.is_open())
	{
		int pdeposit;
		while(loadd>>pdeposit)
		{
			if(i == 0){
			p1_deposit = pdeposit;
			}
			if(i == 1){
			p2_deposit = pdeposit;
			}
			if(i == 2){
			p3_deposit = pdeposit;
			}
			if(i == 3){
			p4_deposit = pdeposit;
			}
			i++;
		}
	}
	loadd.close();

int p1_rw = 0;
int p2_rw = 0;
int p3_rw = 0;
int p4_rw = 0;

ifstream load("ready.txt");
	i = 0;
	if(load.is_open())
	{
		int pready;
		while(load>>pready)
		{
			if(i == 0){
			p1_ready = pready;
			}
			if(i == 1){
			p2_ready = pready;
			}
			if(i == 2){
			p3_ready = pready;
			}
			if(i == 3){
			p4_ready = pready;
			}
			i++;
		}
	}
	load.close();
	
int card_id[52];
	for (i = 0; i < 52; i++){
		card_id[i] = i+1;
	}

int card_value[52];
	q = 2;
	p = 1;
	for (i = 0; i < 52; i++){
		card_value[i] = q;
		p = p+1;
		if(p > 4){
			q = q+1;
			p = 1;
		}	
	}
		
char card_type[52];
	q = 3;
	for (i = 0; i < 52; i++){
		card_type[i] = q;
		q = q+1;
		if(q > 6){
			q = 3;
		}	
	}
	
int card_usage[52];
	for (i = 0; i < 52; i++){
			card_usage[i] = 0;
	}
	
string card_name[52];
	for (i = 0; i < 52; i++){
		card_name[i] = "0";
		if(card_value[i] == 11){
			card_name[i] = "J";
		}
		if(card_value[i] == 12){
			card_name[i] = "Q";
		}
		if(card_value[i] == 13){
			card_name[i] = "K";
		}
		if(card_value[i] == 14){
			card_name[i] = "A";
		}
	}	

int player1[7];
int player2[7];
int player3[7];
int player4[7];
int common[5];	

ifstream load2("card_players.txt");
	i = 0;
	k = 0;
	if(load2.is_open())
	{
		int player;
		while(load2>>player)
		{
			if(k == 0){
				player1[i] = player;
				i++;
			}
			if(k == 1){
				player2[i] = player;
				i++;
			}
			if(k == 2){
				player3[i] = player;
				i++;
			}
			if(k == 3){
				player4[i] = player;
				i++;
			}
			if(k == 4){
				common[i] = player;
				i++;
			}
			if(i == 2 && k != 4){
				k++;
				i = 0;
			}
		}
	}
	load2.close();



for (i = 2; i < 7; i++){
	player1[i] = common[i-2];
	player2[i] = common[i-2];
	player3[i] = common[i-2];
	player4[i] = common[i-2];
}		
			
		int p1_is_colour[7];
			for (i = 0; i < 7; i++){
				p1_is_colour[i] = 0;
			}
		int p1_is_straight[7];
			for (i = 0; i < 7; i++){
				p1_is_straight[i] = 0;
			}
		int p1_is_multiple[7];
			for (i = 0; i < 7; i++){
				p1_is_multiple[i] = 0;
			}	
			
		// Si³a Rêki
		int hand_value = 0;
		
		for (i = 0; i < 7; i++){
			for (q = 0; q < 6; q++){
				if (player1[q] > player1[q+1]){
					a = player1[q];
					b = player1[q+1];
					player1[q] = b;
					player1[q+1] = a;
				}
			}
		}
		
		//Szukanie koloru
		int t1 = 0;
		int t2 = 0;
		int t3 = 0;
		int t4 = 0;
		for (i = 0; i < 7; i++){
			q = player1[i];
			if(card_type[q] == 3){
				t1++;
			}
			if(card_type[q] == 4){
				t2++;
			}
			if(card_type[q] == 5){
				t3++;
			}
			if(card_type[q] == 6){
				t4++;
			}
		}
		for (i = 0; i < 7; i++){
			if(t1 >=5){
				if(card_type[player1[i]] == 3){
					p1_is_colour[i] = 1;
				}
			}
		}
		for (i = 0; i < 7; i++){
			if(t2 >=5){
				if(card_type[player1[i]] == 4){
					p1_is_colour[i] = 1;
				}
			}
		}
		for (i = 0; i < 7; i++){
			if(t3 >=5){
				if(card_type[player1[i]] == 5){
					p1_is_colour[i] = 1;
				}
			}
		}
		for (i = 0; i < 7; i++){
			if(t4 >=5){
				if(card_type[player1[i]] == 6){
					p1_is_colour[i] = 1;
				}
			}
		}
		
		//Szukanie strita
		//Naprawa b³êdu dotycz¹cego POKER
		for (i = 0; i < 7; i++){
			for (q = 0; q < 6; q++){
				if (p1_is_colour[q] > p1_is_colour[q+1]){
					a = player1[q];
					b = player1[q+1];
					player1[q] = b;
					player1[q+1] = a;
					c = p1_is_colour[q];
					d = p1_is_colour[q+1];
					p1_is_colour[q] = d;
					p1_is_colour[q+1] = c;
				}
			}
		}
		
		int straight[7];
		for (i = 0; i < 7; i++){
			straight[i] = card_value[player1[i]];
		}	
		
		//w kolorze
		if(t1 >= 5 || t2 >= 5  || t3 >=5  || t4 >= 5){
			int straight_count = 0;
			for (i = 0; i < 6; i++){
				if((straight[6-i] == straight[5-i] + 1) && p1_is_colour[6-i] == p1_is_colour[5-i] && p1_is_colour[6-i] == 1){
					straight_count++;
				}
				if((straight[6-i] > straight[5-i] + 1) || p1_is_colour[6-i] != p1_is_colour[5-i] || p1_is_colour[6-i] != 1){
					straight_count = 0;
				}
				if(straight_count == 4){
					p1_is_straight[5-i] = 1;
					p1_is_straight[6-i] = 1;
					p1_is_straight[7-i] = 1;
					p1_is_straight[8-i] = 1;
					p1_is_straight[9-i] = 1;
					break;
				}
			}
		}
		
		//bez koloru
		if(t1 < 5 && t2 < 5  && t3 < 5  && t4 < 5){	
			int straight_count = 0;
			int additional_straight = 0;
			for (i = 0; i < 6; i++){
				if(straight[6-i] == straight[5-i] + 1){
					straight_count++;
				}
				if(straight[6-i] == straight[5-i]){
					additional_straight++;
				}
				if(straight[6-i] > straight[5-i] + 1){
					straight_count = 0;
				}
				if(straight_count == 4){
					p1_is_straight[5-i] = 1;
					p1_is_straight[6-i] = 1;
					p1_is_straight[7-i] = 1;
					p1_is_straight[8-i] = 1;
					p1_is_straight[9-i] = 1;
					if(additional_straight > 0){
						p1_is_straight[10-i] = 1;	
					}
					if(additional_straight > 1){
						p1_is_straight[11-i] = 1;	
					}
					break;
				}
			}
		}
	
		//kareta, ful, trójka, pary
		int pairs[7];
		for (i = 0; i < 7; i++){
			pairs[i] = card_value[player1[i]];
		}	
		
		for (i = 0; i < 7; i++){
			if(pairs[6-i] == pairs[5-i]){
				p1_is_multiple[6-i]++;
				p1_is_multiple[5-i]++;
			}
		}
		
		int quad = 0;
		int full = 0;
		int triple = 0;
		int two_pairs = 0;
		int pair = 0;
		for (i = 0; i < 7; i++){
			if(p1_is_multiple[i] == 2){
				triple++;
			}
			if(p1_is_multiple[i] == 1){
				pair++;
			}
			if(triple == 2){
				quad++;
			}
			if(triple == 1 && pair >= 4){
				full++;
			}
			if(pair >= 4){
				two_pairs++;
			}
		}
	
		int hand_value2 = 0;
		//wartoœæ par
		for (i = 0; i < 7; i++){
			if(p1_is_multiple[6-i] == 2){
				hand_value = card_value[player1[6-i]];
				break;
			}	
			if(i == 6){
				for (q = 0; q < 7; q++){
					if(p1_is_multiple[6-q] == 1){
						hand_value = card_value[player1[6-q]];
						break;
					}
				}
			}
		}
		for (i = 0; i < 7; i++){
			if(p1_is_multiple[6-i] == 2 && card_value[player1[6-i]] != hand_value){
				hand_value2 = card_value[player1[6-i]];
				break;
			}	
			if(p1_is_multiple[6-i] == 1 && card_value[player1[6-i]] != hand_value){
				hand_value2 = card_value[player1[6-i]];
				break;
			}	
		}
		
		//wartoœæ koloru
		for (i = 0; i < 7; i++){
			if(p1_is_colour[6-i] == 1){
				hand_value = card_value[player1[6-i]];
				break;
			}	
		}
		
		//wartoœæ strita
		for (i = 0; i < 7; i++){
			if(p1_is_straight[6-i] == 1){
				if (straight[6-i] > hand_value){
				hand_value = straight[6-i];
				}
			}	
		}
		
		//wysoka karta
		int highest_card = -1;
		for (i = 0; i < 7; i++){
			if (player1[i] > highest_card && p1_is_multiple[i] == 0){
				highest_card = player1[i];
			}
		}	
		
		int highest_card2 = -1;
		for (i = 0; i < 7; i++){
			if (player1[i] > highest_card2 && player1[i] < highest_card && p1_is_multiple[i] == 0){
				highest_card2 = player1[i];
			}
		}	
		
		int highest_card3 = -1;
		for (i = 0; i < 7; i++){
			if (player1[i] > highest_card3 && player1[i] < highest_card2 && p1_is_multiple[i] == 0){
				highest_card3 = player1[i];
			}
		}	
		
		int highest_card4 = -1;
		for (i = 0; i < 7; i++){
			if (player1[i] > highest_card4 && player1[i] < highest_card3 && p1_is_multiple[i] == 0){
				highest_card4 = player1[i];
			}
		}	
		
		int highest_card5 = -1;
		for (i = 0; i < 7; i++){
			if (player1[i] > highest_card5 && player1[i] < highest_card4 && p1_is_multiple[i] == 0){
				highest_card5 = player1[i];
			}
		}	
		
		
		if(t1 >= 5 || t2 >= 5  || t3 >=5  || t4 >= 5){
			highest_card = -1;
			for (i = 0; i < 7; i++){
				if (player1[i] > highest_card && p1_is_colour[i] == 1){
					highest_card = player1[i];
				}
			}	
			
			highest_card2 = -1;
			for (i = 0; i < 7; i++){
				if (player1[i] > highest_card2 && player1[i] < highest_card && p1_is_colour[i] == 1){
					highest_card2 = player1[i];
				}
			}	
			
			highest_card3 = -1;
			for (i = 0; i < 7; i++){
				if (player1[i] > highest_card3 && player1[i] < highest_card2 && p1_is_colour[i] == 1){
					highest_card3 = player1[i];
				}
			}	
			
			highest_card4 = -1;
			for (i = 0; i < 7; i++){
				if (player1[i] > highest_card4 && player1[i] < highest_card3 && p1_is_colour[i] == 1){
					highest_card4 = player1[i];
				}
			}	
			
			highest_card5 = -1;
			for (i = 0; i < 7; i++){
				if (player1[i] > highest_card5 && player1[i] < highest_card4 && p1_is_colour[i] == 1){
					highest_card5 = player1[i];
				}
			}
		}
	
		string hand_name, hand_name2;
			hand_name = "0";
			hand_name2 = "0";
			if(hand_value == 11){
				hand_name = "J";
			}
			if(hand_value == 12){
				hand_name = "Q";
			}
			if(hand_value == 13){
				hand_name = "K";
			}
			if(hand_value == 14){
				hand_name = "A";
			}
			if(hand_value2 == 11){
				hand_name2 = "J";
			}
			if(hand_value2 == 12){
				hand_name2 = "Q";
			}
			if(hand_value2 == 13){
				hand_name2 = "K";
			}
			if(hand_value2 == 14){
				hand_name2 = "A";
			}
				
		//uk³ad kart
		int p1_hand_type;
		int p1_hand_value, p1_hand_value2;
		p1_hand_value = hand_value;	
		p1_hand_value2 = hand_value2;	
		
		//cout << endl;
		for (i = 0; i < 7; i++){
			if(p1_is_colour[6-i] == 1 && p1_is_straight[6-i] == 1 && p1_hand_value == 14){
		//		cout << "POKER KRÓLEWSKI!";
				p1_hand_type = 1;
				break;
			}
			if(p1_is_colour[6-i] == 1 && p1_is_straight[6-i] == 1){
		//		cout << "POKER!";
				p1_hand_type = 2;
				break;
			}
			if(quad >= 1 && i == 6){
		//		cout << "KARETA ";
				p1_hand_type = 3;
		/*		if(hand_name != "0"){
					cout << hand_name;
				}else{
					cout << hand_value;
				}	
				cout << "!";
		*/		break;
			}
			if(full >= 1 && i == 6){
		//		cout << "FULL ";
				p1_hand_type = 4;
		/*		if(hand_name != "0"){
					cout << hand_name;
				}else{
					cout << hand_value;
				}	
				cout << " i ";
				if(hand_name2 != "0"){
					cout << hand_name2;
				}else{
					cout << hand_value2;
				}	
				cout << "!";
		*/		break;
			}
			if(p1_is_colour[6-i] == 1){
		//		cout << "KOLOR!";
				p1_hand_type = 5;
				break;
			}
			if(p1_is_straight[6-i] == 1){
		//		cout << "STRIT!";
				p1_hand_type = 6;
				break;
			}	
			if(triple >= 1 && i == 6){
		//		cout << "TRÓJKA ";
				p1_hand_type = 7;
		/*		if(hand_name != "0"){
					cout << hand_name;
				}else{
					cout << hand_value;
				}	
				cout << "!";
		*/		break;
			}
			if(two_pairs >= 1 && i == 6){
		//		cout << "DWIE PARY ";
				p1_hand_type = 8;
		/*		if(hand_name != "0"){
					cout << hand_name;
				}else{
					cout << hand_value;
				}	
				cout << " i ";
				if(hand_name2 != "0"){
					cout << hand_name2;
				}else{
					cout << hand_value2;
				}	
				cout << "!";
		*/		break;
			}
			if(pair >= 2 && i == 6){
		//		cout << "PARA ";
				p1_hand_type = 9;
		/*		if(hand_name != "0"){
					cout << hand_name;
				}else{
					cout << hand_value;
				}	
				cout << "!";
		*/		break;
			}
			if(i == 6){
		//	cout << "WYSOKA KARTA: ";
			p1_hand_type = 10;
		/*	if(card_name[highest_card] != "0"){
				cout << card_name[highest_card];
			}else{
				cout << card_value[highest_card];
			}
			cout << card_type[highest_card];
		*/	break;
			}
		}
		
		int p1_hand_value3, p1_hand_value4, p1_hand_value5, p1_hand_value6, p1_hand_value7;
		p1_hand_value3 = card_value[highest_card];
		p1_hand_value4 = card_value[highest_card2];
		p1_hand_value5 = card_value[highest_card3];
		p1_hand_value6 = card_value[highest_card4];
		p1_hand_value7 = card_value[highest_card5];
		
		//wypisywanie najmocniejszej rêki
		int p1_card_set[5];
		int s = 0;
		int f = 0;
		
		if(p1_hand_type == 10 || p1_hand_type == 5 || p1_hand_type == 2 || p1_hand_type == 1){
			for (i = 0; i < 5; i++){
				if (p1_hand_type == 10 || (p1_hand_type != 10 && p1_is_colour[6-i] == 1)){
					p1_card_set[s] = player1[6-i];
					s++;
				}
				if(s == 5){
					break;
				}
			}
		}
		if(p1_hand_type == 9 || p1_hand_type == 8 || p1_hand_type == 7 || p1_hand_type == 3){
			for (i = 0; i < 7; i++){
				if(p1_is_multiple[6-i] == 1 || p1_is_multiple[6-i] == 2){
					p1_card_set[s] = player1[6-i];
					s++;
					f = i+1;
					break;
				}
			}
			for (i = f; i < 7; i++){
				if(p1_is_multiple[6-i] == 1 || p1_is_multiple[6-i] == 2){
					p1_card_set[s] = player1[6-i];
					s++;
					f = i+1;
					break;
				}
			}
			if(p1_hand_type == 8 || p1_hand_type == 7 || p1_hand_type == 3){
				for (i = f; i < 7; i++){
					if(p1_is_multiple[6-i] == 1 || p1_is_multiple[6-i] == 2){
						p1_card_set[s] = player1[6-i];
						s++;
						f = i+1;
						break;
					}
				}
				if(p1_hand_type == 8 || p1_hand_type == 3){
					for (i = f; i < 7; i++){
						if(p1_is_multiple[6-i] == 1 || p1_is_multiple[6-i] == 2){
							p1_card_set[s] = player1[6-i];
							s++;
							f = i+1;
							break;
						}
					}	
				}
			}
			for (i = 0; i < 7; i++){
				if(p1_is_multiple[6-i] == 0){
					p1_card_set[s] = player1[6-i];
					s++;
				}
				if(s == 5){
					break;
				}
			}
		}
		if(p1_hand_type == 4){
			for (i = 0; i < 7; i++){
				if (card_value[player1[6-i]] == p1_hand_value){
					p1_card_set[s] = player1[6-i];
					s++;
				}
				if (card_value[player1[6-i]] == p1_hand_value2){
					p1_card_set[s] = player1[6-i];
					s++;
				}
				if (s == 5){
					break;
				}
			}
		}
		if(p1_hand_type == 6){
			for (i = 0; i < 7; i++){
				if (card_value[player1[6-i]] != card_value[player1[7-i]] && p1_is_straight[6-i] == 1){
					p1_card_set[s] = player1[6-i];
					s++;
				}
				if(s == 5){
					break;
				}
			}
		}
		
		cout << p1 << ": ";
		for (i = 0; i < 5; i++){
				if(card_name[p1_card_set[i]] != "0"){
					cout << card_name[p1_card_set[i]];
				}else{
				cout << card_value[p1_card_set[i]];
					}
				cout << card_type[p1_card_set[i]] << " ";
			}
		if(p1_ready == -1){
			cout << "   PAS";
		}	
		cout << endl << endl;
		
		//P2
		
		int p2_is_colour[7];
			for (i = 0; i < 7; i++){
				p2_is_colour[i] = 0;
			}
		int p2_is_straight[7];
			for (i = 0; i < 7; i++){
				p2_is_straight[i] = 0;
			}
		int p2_is_multiple[7];
			for (i = 0; i < 7; i++){
				p2_is_multiple[i] = 0;
			}	
			
		// Si³a Rêki
		hand_value = 0;
		
		for (i = 0; i < 7; i++){
			for (q = 0; q < 6; q++){
				if (player2[q] > player2[q+1]){
					a = player2[q];
					b = player2[q+1];
					player2[q] = b;
					player2[q+1] = a;
				}
			}
		}
		
		//Szukanie koloru
		t1 = 0;
		t2 = 0;
		t3 = 0;
		t4 = 0;
		for (i = 0; i < 7; i++){
			q = player2[i];
			if(card_type[q] == 3){
				t1++;
			}
			if(card_type[q] == 4){
				t2++;
			}
			if(card_type[q] == 5){
				t3++;
			}
			if(card_type[q] == 6){
				t4++;
			}
		}
		for (i = 0; i < 7; i++){
			if(t1 >=5){
				if(card_type[player2[i]] == 3){
					p2_is_colour[i] = 1;
				}
			}
		}
		for (i = 0; i < 7; i++){
			if(t2 >=5){
				if(card_type[player2[i]] == 4){
					p2_is_colour[i] = 1;
				}
			}
		}
		for (i = 0; i < 7; i++){
			if(t3 >=5){
				if(card_type[player2[i]] == 5){
					p2_is_colour[i] = 1;
				}
			}
		}
		for (i = 0; i < 7; i++){
			if(t4 >=5){
				if(card_type[player2[i]] == 6){
					p2_is_colour[i] = 1;
				}
			}
		}
	
		//Szukanie strita
		//Naprawa b³êdu dotycz¹cego POKER
		for (i = 0; i < 7; i++){
			for (q = 0; q < 6; q++){
				if (p2_is_colour[q] > p2_is_colour[q+1]){
					a = player2[q];
					b = player2[q+1];
					player2[q] = b;
					player2[q+1] = a;
					c = p2_is_colour[q];
					d = p2_is_colour[q+1];
					p2_is_colour[q] = d;
					p2_is_colour[q+1] = c;
				}
			}
		}
		
		straight[7];
		for (i = 0; i < 7; i++){
			straight[i] = card_value[player2[i]];
		}	
		
		//w kolorze
		if(t1 >= 5 || t2 >= 5  || t3 >=5  || t4 >= 5){
			int straight_count = 0;
			for (i = 0; i < 6; i++){
				if((straight[6-i] == straight[5-i] + 1) && p2_is_colour[6-i] == p2_is_colour[5-i] && p2_is_colour[6-i] == 1){
					straight_count++;
				}
				if((straight[6-i] > straight[5-i] + 1) || p2_is_colour[6-i] != p2_is_colour[5-i] || p2_is_colour[6-i] != 1){
					straight_count = 0;
				}
				if(straight_count == 4){
					p2_is_straight[5-i] = 1;
					p2_is_straight[6-i] = 1;
					p2_is_straight[7-i] = 1;
					p2_is_straight[8-i] = 1;
					p2_is_straight[9-i] = 1;
					break;
				}
			}
		}
		
		//bez koloru
		if(t1 < 5 && t2 < 5  && t3 < 5  && t4 < 5){	
			int straight_count = 0;
			int additional_straight = 0;
			for (i = 0; i < 6; i++){
				if(straight[6-i] == straight[5-i] + 1){
					straight_count++;
				}
				if(straight[6-i] == straight[5-i]){
					additional_straight++;
				}
				if(straight[6-i] > straight[5-i] + 1){
					straight_count = 0;
				}
				if(straight_count == 4){
					p2_is_straight[5-i] = 1;
					p2_is_straight[6-i] = 1;
					p2_is_straight[7-i] = 1;
					p2_is_straight[8-i] = 1;
					p2_is_straight[9-i] = 1;
					if(additional_straight > 0){
						p2_is_straight[10-i] = 1;	
					}
					if(additional_straight > 1){
						p2_is_straight[11-i] = 1;	
					}
					break;
				}
			}
		}
		
		//kareta, ful, trójka, pary
		pairs[7];
		for (i = 0; i < 7; i++){
			pairs[i] = card_value[player2[i]];
		}	
		
		for (i = 0; i < 7; i++){
			if(pairs[6-i] == pairs[5-i]){
				p2_is_multiple[6-i]++;
				p2_is_multiple[5-i]++;
			}
		}
		
		quad = 0;
		full = 0;
		triple = 0;
		two_pairs = 0;
		pair = 0;
		for (i = 0; i < 7; i++){
			if(p2_is_multiple[i] == 2){
				triple++;
			}
			if(p2_is_multiple[i] == 1){
				pair++;
			}
			if(triple == 2){
				quad++;
			}
			if(triple == 1 && pair >= 4){
				full++;
			}
			if(pair >= 4){
				two_pairs++;
			}
		}
		
		hand_value2 = 0;
		//wartoœæ par
		for (i = 0; i < 7; i++){
			if(p2_is_multiple[6-i] == 2){
				hand_value = card_value[player2[6-i]];
				break;
			}	
			if(i == 6){
				for (q = 0; q < 7; q++){
					if(p2_is_multiple[6-q] == 1){
						hand_value = card_value[player2[6-q]];
						break;
					}
				}
			}
		}
		for (i = 0; i < 7; i++){
			if(p2_is_multiple[6-i] == 2 && card_value[player2[6-i]] != hand_value){
				hand_value2 = card_value[player2[6-i]];
				break;
			}	
			if(p2_is_multiple[6-i] == 1 && card_value[player2[6-i]] != hand_value){
				hand_value2 = card_value[player2[6-i]];
				break;
			}	
		}
		
		//wartoœæ koloru
		for (i = 0; i < 7; i++){
			if(p2_is_colour[6-i] == 1){
				hand_value = card_value[player2[6-i]];
				break;
			}	
		}
		
		//wartoœæ strita
		for (i = 0; i < 7; i++){
			if(p2_is_straight[6-i] == 1){
				if (straight[6-i] > hand_value){
				hand_value = straight[6-i];
				}
			}	
		}
		
		//wysoka karta
		highest_card = -1;
		for (i = 0; i < 7; i++){
			if (player2[i] > highest_card && p2_is_multiple[i] == 0){
				highest_card = player2[i];
			}
		}	
		
		highest_card2 = -1;
		for (i = 0; i < 7; i++){
			if (player2[i] > highest_card2 && player2[i] < highest_card && p2_is_multiple[i] == 0){
				highest_card2 = player2[i];
			}
		}	
		
		highest_card3 = -1;
		for (i = 0; i < 7; i++){
			if (player2[i] > highest_card3 && player2[i] < highest_card2 && p2_is_multiple[i] == 0){
				highest_card3 = player2[i];
			}
		}	
		
		highest_card4 = -1;
		for (i = 0; i < 7; i++){
			if (player2[i] > highest_card4 && player2[i] < highest_card3 && p2_is_multiple[i] == 0){
				highest_card4 = player2[i];
			}
		}	
		
		highest_card5 = -1;
		for (i = 0; i < 7; i++){
			if (player2[i] > highest_card5 && player2[i] < highest_card4 && p2_is_multiple[i] == 0){
				highest_card5 = player2[i];
			}
		}	
		
		
		if(t1 >= 5 || t2 >= 5  || t3 >=5  || t4 >= 5){
			highest_card = -1;
			for (i = 0; i < 7; i++){
				if (player2[i] > highest_card && p2_is_colour[i] == 1){
					highest_card = player2[i];
				}
			}	
			
			highest_card2 = -1;
			for (i = 0; i < 7; i++){
				if (player2[i] > highest_card2 && player2[i] < highest_card && p2_is_colour[i] == 1){
					highest_card2 = player2[i];
				}
			}	
			
			highest_card3 = -1;
			for (i = 0; i < 7; i++){
				if (player2[i] > highest_card3 && player2[i] < highest_card2 && p2_is_colour[i] == 1){
					highest_card3 = player2[i];
				}
			}	
			
			highest_card4 = -1;
			for (i = 0; i < 7; i++){
				if (player2[i] > highest_card4 && player2[i] < highest_card3 && p2_is_colour[i] == 1){
					highest_card4 = player2[i];
				}
			}	
			
			highest_card5 = -1;
			for (i = 0; i < 7; i++){
				if (player2[i] > highest_card5 && player2[i] < highest_card4 && p2_is_colour[i] == 1){
					highest_card5 = player2[i];
				}
			}
		}
		
			hand_name = "0";
			hand_name2 = "0";
			if(hand_value == 11){
				hand_name = "J";
			}
			if(hand_value == 12){
				hand_name = "Q";
			}
			if(hand_value == 13){
				hand_name = "K";
			}
			if(hand_value == 14){
				hand_name = "A";
			}
			if(hand_value2 == 11){
				hand_name2 = "J";
			}
			if(hand_value2 == 12){
				hand_name2 = "Q";
			}
			if(hand_value2 == 13){
				hand_name2 = "K";
			}
			if(hand_value2 == 14){
				hand_name2 = "A";
			}
				
		//uk³ad kart
		int p2_hand_type;
		int p2_hand_value, p2_hand_value2;
		p2_hand_value = hand_value;	
		p2_hand_value2 = hand_value2;	
		
		//cout << endl;
		for (i = 0; i < 7; i++){
			if(p2_is_colour[6-i] == 1 && p2_is_straight[6-i] == 1 && p2_hand_value == 14){
		//		cout << "POKER KRÓLEWSKI!";
				p2_hand_type = 1;
				break;
			}
			if(p2_is_colour[6-i] == 1 && p2_is_straight[6-i] == 1){
		//		cout << "POKER!";
				p2_hand_type = 2;
				break;
			}
			if(quad >= 1 && i == 6){
		//		cout << "KARETA ";
				p2_hand_type = 3;
		/*		if(hand_name != "0"){
					cout << hand_name;
				}else{
					cout << hand_value;
				}	
				cout << "!";
		*/		break;
			}
			if(full >= 1 && i == 6){
		//		cout << "FULL ";
				p2_hand_type = 4;
		/*		if(hand_name != "0"){
					cout << hand_name;
				}else{
					cout << hand_value;
				}	
				cout << " i ";
				if(hand_name2 != "0"){
					cout << hand_name2;
				}else{
					cout << hand_value2;
				}	
				cout << "!";
		*/		break;
			}
			if(p2_is_colour[6-i] == 1){
		//		cout << "KOLOR!";
				p2_hand_type = 5;
				break;
			}
			if(p2_is_straight[6-i] == 1){
		//		cout << "STRIT!";
				p2_hand_type = 6;
				break;
			}	
			if(triple >= 1 && i == 6){
		//		cout << "TRÓJKA ";
				p2_hand_type = 7;
		/*		if(hand_name != "0"){
					cout << hand_name;
				}else{
					cout << hand_value;
				}	
				cout << "!";
		*/		break;
			}
			if(two_pairs >= 1 && i == 6){
		//		cout << "DWIE PARY ";
				p2_hand_type = 8;
		/*		if(hand_name != "0"){
					cout << hand_name;
				}else{
					cout << hand_value;
				}	
				cout << " i ";
				if(hand_name2 != "0"){
					cout << hand_name2;
				}else{
					cout << hand_value2;
				}	
				cout << "!";
		*/		break;
			}
			if(pair >= 2 && i == 6){
		//		cout << "PARA ";
				p2_hand_type = 9;
		/*		if(hand_name != "0"){
					cout << hand_name;
				}else{
					cout << hand_value;
				}	
				cout << "!";
		*/		break;
			}
			if(i == 6){
		//	cout << "WYSOKA KARTA: ";
			p2_hand_type = 10;
		/*	if(card_name[highest_card] != "0"){
				cout << card_name[highest_card];
			}else{
				cout << card_value[highest_card];
			}
			cout << card_type[highest_card];
		*/	break;
			}
		}
		
		int p2_hand_value3, p2_hand_value4, p2_hand_value5, p2_hand_value6, p2_hand_value7;
		p2_hand_value3 = card_value[highest_card];
		p2_hand_value4 = card_value[highest_card2];
		p2_hand_value5 = card_value[highest_card3];
		p2_hand_value6 = card_value[highest_card4];
		p2_hand_value7 = card_value[highest_card5];
		
		//wypisywanie najmocniejszej rêki
		int p2_card_set[5];
		s = 0;
		f = 0;
		
		if(p2_hand_type == 10 || p2_hand_type == 5 || p2_hand_type == 2 || p2_hand_type == 1){
			for (i = 0; i < 5; i++){
				if (p2_hand_type == 10 || (p2_hand_type != 10 && p2_is_colour[6-i] == 1)){
					p2_card_set[s] = player2[6-i];
					s++;
				}
				if(s == 5){
					break;
				}
			}
		}
		if(p2_hand_type == 9 || p2_hand_type == 8 || p2_hand_type == 7 || p2_hand_type == 3){
			for (i = 0; i < 7; i++){
				if(p2_is_multiple[6-i] == 1 || p2_is_multiple[6-i] == 2){
					p2_card_set[s] = player2[6-i];
					s++;
					f = i+1;
					break;
				}
			}
			for (i = f; i < 7; i++){
				if(p2_is_multiple[6-i] == 1 || p2_is_multiple[6-i] == 2){
					p2_card_set[s] = player2[6-i];
					s++;
					f = i+1;
					break;
				}
			}
			if(p2_hand_type == 8 || p2_hand_type == 7 || p2_hand_type == 3){
				for (i = f; i < 7; i++){
					if(p2_is_multiple[6-i] == 1 || p2_is_multiple[6-i] == 2){
						p2_card_set[s] = player2[6-i];
						s++;
						f = i+1;
						break;
					}
				}
				if(p2_hand_type == 8 || p2_hand_type == 3){
					for (i = f; i < 7; i++){
						if(p2_is_multiple[6-i] == 1 || p2_is_multiple[6-i] == 2){
							p2_card_set[s] = player2[6-i];
							s++;
							f = i+1;
							break;
						}
					}	
				}
			}
			for (i = 0; i < 7; i++){
				if(p2_is_multiple[6-i] == 0){
					p2_card_set[s] = player2[6-i];
					s++;
				}
				if(s == 5){
					break;
				}
			}
		}
		if(p2_hand_type == 4){
			for (i = 0; i < 7; i++){
				if (card_value[player2[6-i]] == p2_hand_value){
					p2_card_set[s] = player2[6-i];
					s++;
				}
				if (card_value[player2[6-i]] == p2_hand_value2){
					p2_card_set[s] = player2[6-i];
					s++;
				}
				if (s == 5){
					break;
				}
			}
		}
		if(p2_hand_type == 6){
			for (i = 0; i < 7; i++){
				if (card_value[player2[6-i]] != card_value[player2[7-i]] && p2_is_straight[6-i] == 1){
					p2_card_set[s] = player2[6-i];
					s++;
				}
				if(s == 5){
					break;
				}
			}
		}
		
		cout << p2 << ": ";
		for (i = 0; i < 5; i++){
				if(card_name[p2_card_set[i]] != "0"){
					cout << card_name[p2_card_set[i]];
				}else{
				cout << card_value[p2_card_set[i]];
					}
				cout << card_type[p2_card_set[i]] << " ";
			}
		if(p2_ready == -1){
			cout << "   PAS";
		}		
		cout << endl << endl;
		
		//P3
		
		int p3_is_colour[7];
			for (i = 0; i < 7; i++){
				p3_is_colour[i] = 0;
			}
		int p3_is_straight[7];
			for (i = 0; i < 7; i++){
				p3_is_straight[i] = 0;
			}
		int p3_is_multiple[7];
			for (i = 0; i < 7; i++){
				p3_is_multiple[i] = 0;
			}	
			
		// Si³a Rêki
		
		hand_value = 0;
		
		for (i = 0; i < 7; i++){
			for (q = 0; q < 6; q++){
				if (player3[q] > player3[q+1]){
					a = player3[q];
					b = player3[q+1];
					player3[q] = b;
					player3[q+1] = a;
				}
			}
		}
		
		//Szukanie koloru
		t1 = 0;
		t2 = 0;
		t3 = 0;
		t4 = 0;
		for (i = 0; i < 7; i++){
			q = player3[i];
			if(card_type[q] == 3){
				t1++;
			}
			if(card_type[q] == 4){
				t2++;
			}
			if(card_type[q] == 5){
				t3++;
			}
			if(card_type[q] == 6){
				t4++;
			}
		}
		for (i = 0; i < 7; i++){
			if(t1 >=5){
				if(card_type[player3[i]] == 3){
					p3_is_colour[i] = 1;
				}
			}
		}
		for (i = 0; i < 7; i++){
			if(t2 >=5){
				if(card_type[player3[i]] == 4){
					p3_is_colour[i] = 1;
				}
			}
		}
		for (i = 0; i < 7; i++){
			if(t3 >=5){
				if(card_type[player3[i]] == 5){
					p3_is_colour[i] = 1;
				}
			}
		}
		for (i = 0; i < 7; i++){
			if(t4 >=5){
				if(card_type[player3[i]] == 6){
					p3_is_colour[i] = 1;
				}
			}
		}
		
		//Szukanie strita
		//Naprawa b³êdu dotycz¹cego POKER
		for (i = 0; i < 7; i++){
			for (q = 0; q < 6; q++){
				if (p3_is_colour[q] > p3_is_colour[q+1]){
					a = player3[q];
					b = player3[q+1];
					player3[q] = b;
					player3[q+1] = a;
					c = p3_is_colour[q];
					d = p3_is_colour[q+1];
					p3_is_colour[q] = d;
					p3_is_colour[q+1] = c;
				}
			}
		}
		
		straight[7];
		for (i = 0; i < 7; i++){
			straight[i] = card_value[player3[i]];
		}	
		
		//w kolorze
		if(t1 >= 5 || t2 >= 5  || t3 >=5  || t4 >= 5){
			int straight_count = 0;
			for (i = 0; i < 6; i++){
				if((straight[6-i] == straight[5-i] + 1) && p3_is_colour[6-i] == p3_is_colour[5-i] && p3_is_colour[6-i] == 1){
					straight_count++;
				}
				if((straight[6-i] > straight[5-i] + 1) || p3_is_colour[6-i] != p3_is_colour[5-i] || p3_is_colour[6-i] != 1){
					straight_count = 0;
				}
				if(straight_count == 4){
					p3_is_straight[5-i] = 1;
					p3_is_straight[6-i] = 1;
					p3_is_straight[7-i] = 1;
					p3_is_straight[8-i] = 1;
					p3_is_straight[9-i] = 1;
					break;
				}
			}
		}
		
		//bez koloru
		if(t1 < 5 && t2 < 5  && t3 < 5  && t4 < 5){	
			int straight_count = 0;
			int additional_straight = 0;
			for (i = 0; i < 6; i++){
				if(straight[6-i] == straight[5-i] + 1){
					straight_count++;
				}
				if(straight[6-i] == straight[5-i]){
					additional_straight++;
				}
				if(straight[6-i] > straight[5-i] + 1){
					straight_count = 0;
				}
				if(straight_count == 4){
					p3_is_straight[5-i] = 1;
					p3_is_straight[6-i] = 1;
					p3_is_straight[7-i] = 1;
					p3_is_straight[8-i] = 1;
					p3_is_straight[9-i] = 1;
					if(additional_straight > 0){
						p3_is_straight[10-i] = 1;	
					}
					if(additional_straight > 1){
						p3_is_straight[11-i] = 1;	
					}
					break;
				}
			}
		}
		
		//kareta, ful, trójka, pary
		pairs[7];
		for (i = 0; i < 7; i++){
			pairs[i] = card_value[player3[i]];
		}	
		
		for (i = 0; i < 7; i++){
			if(pairs[6-i] == pairs[5-i]){
				p3_is_multiple[6-i]++;
				p3_is_multiple[5-i]++;
			}
		}
		
		quad = 0;
		full = 0;
		triple = 0;
		two_pairs = 0;
		pair = 0;
		for (i = 0; i < 7; i++){
			if(p3_is_multiple[i] == 2){
				triple++;
			}
			if(p3_is_multiple[i] == 1){
				pair++;
			}
			if(triple == 2){
				quad++;
			}
			if(triple == 1 && pair >= 4){
				full++;
			}
			if(pair >= 4){
				two_pairs++;
			}
		}
		
		hand_value2 = 0;
		//wartoœæ par
		for (i = 0; i < 7; i++){
			if(p3_is_multiple[6-i] == 2){
				hand_value = card_value[player3[6-i]];
				break;
			}	
			if(i == 6){
				for (q = 0; q < 7; q++){
					if(p3_is_multiple[6-q] == 1){
						hand_value = card_value[player3[6-q]];
						break;
					}
				}
			}
		}
		for (i = 0; i < 7; i++){
			if(p3_is_multiple[6-i] == 2 && card_value[player3[6-i]] != hand_value){
				hand_value2 = card_value[player3[6-i]];
				break;
			}	
			if(p3_is_multiple[6-i] == 1 && card_value[player3[6-i]] != hand_value){
				hand_value2 = card_value[player3[6-i]];
				break;
			}	
		}
		
		//wartoœæ koloru
		for (i = 0; i < 7; i++){
			if(p3_is_colour[6-i] == 1){
				hand_value = card_value[player3[6-i]];
				break;
			}	
		}
		
		//wartoœæ strita
		for (i = 0; i < 7; i++){
			if(p3_is_straight[6-i] == 1){
				if (straight[6-i] > hand_value){
				hand_value = straight[6-i];
				}
			}	
		}
		
		//wysoka karta
		highest_card = -1;
		for (i = 0; i < 7; i++){
			if (player3[i] > highest_card && p3_is_multiple[i] == 0){
				highest_card = player3[i];
			}
		}	
		
		highest_card2 = -1;
		for (i = 0; i < 7; i++){
			if (player3[i] > highest_card2 && player3[i] < highest_card && p3_is_multiple[i] == 0){
				highest_card2 = player3[i];
			}
		}	
		
		highest_card3 = -1;
		for (i = 0; i < 7; i++){
			if (player3[i] > highest_card3 && player3[i] < highest_card2 && p3_is_multiple[i] == 0){
				highest_card3 = player3[i];
			}
		}	
		
		highest_card4 = -1;
		for (i = 0; i < 7; i++){
			if (player3[i] > highest_card4 && player3[i] < highest_card3 && p3_is_multiple[i] == 0){
				highest_card4 = player3[i];
			}
		}	
		
		highest_card5 = -1;
		for (i = 0; i < 7; i++){
			if (player3[i] > highest_card5 && player3[i] < highest_card4 && p3_is_multiple[i] == 0){
				highest_card5 = player3[i];
			}
		}	
		
		if(t1 >= 5 || t2 >= 5  || t3 >=5  || t4 >= 5){
			highest_card = -1;
			for (i = 0; i < 7; i++){
				if (player3[i] > highest_card && p3_is_colour[i] == 1){
					highest_card = player3[i];
				}
			}	
			
			highest_card2 = -1;
			for (i = 0; i < 7; i++){
				if (player3[i] > highest_card2 && player3[i] < highest_card && p3_is_colour[i] == 1){
					highest_card2 = player3[i];
				}
			}	
			
			highest_card3 = -1;
			for (i = 0; i < 7; i++){
				if (player3[i] > highest_card3 && player3[i] < highest_card2 && p3_is_colour[i] == 1){
					highest_card3 = player3[i];
				}
			}	
			
			highest_card4 = -1;
			for (i = 0; i < 7; i++){
				if (player3[i] > highest_card4 && player3[i] < highest_card3 && p3_is_colour[i] == 1){
					highest_card4 = player3[i];
				}
			}	
			
			highest_card5 = -1;
			for (i = 0; i < 7; i++){
				if (player3[i] > highest_card5 && player3[i] < highest_card4 && p3_is_colour[i] == 1){
					highest_card5 = player3[i];
				}
			}
		}
		
			hand_name = "0";
			hand_name2 = "0";
			if(hand_value == 11){
				hand_name = "J";
			}
			if(hand_value == 12){
				hand_name = "Q";
			}
			if(hand_value == 13){
				hand_name = "K";
			}
			if(hand_value == 14){
				hand_name = "A";
			}
			if(hand_value2 == 11){
				hand_name2 = "J";
			}
			if(hand_value2 == 12){
				hand_name2 = "Q";
			}
			if(hand_value2 == 13){
				hand_name2 = "K";
			}
			if(hand_value2 == 14){
				hand_name2 = "A";
			}
		
		//uk³ad kart
		int p3_hand_type;
		int p3_hand_value, p3_hand_value2;
		p3_hand_value = hand_value;	
		p3_hand_value2 = hand_value2;	
		
		//cout << endl;
		for (i = 0; i < 7; i++){
			if(p3_is_colour[6-i] == 1 && p3_is_straight[6-i] == 1 && p3_hand_value == 14){
		//		cout << "POKER KRÓLEWSKI!";
				p3_hand_type = 1;
				break;
			}
			if(p3_is_colour[6-i] == 1 && p3_is_straight[6-i] == 1){
		//		cout << "POKER!";
				p3_hand_type = 2;
				break;
			}
			if(quad >= 1 && i == 6){
		//		cout << "KARETA ";
				p3_hand_type = 3;
		/*		if(hand_name != "0"){
					cout << hand_name;
				}else{
					cout << hand_value;
				}	
				cout << "!";
		*/		break;
			}
			if(full >= 1 && i == 6){
		//		cout << "FULL ";
				p3_hand_type = 4;
		/*		if(hand_name != "0"){
					cout << hand_name;
				}else{
					cout << hand_value;
				}	
				cout << " i ";
				if(hand_name2 != "0"){
					cout << hand_name2;
				}else{
					cout << hand_value2;
				}	
				cout << "!";
		*/		break;
			}
			if(p3_is_colour[6-i] == 1){
		//		cout << "KOLOR!";
				p3_hand_type = 5;
				break;
			}
			if(p3_is_straight[6-i] == 1){
		//		cout << "STRIT!";
				p3_hand_type = 6;
				break;
			}	
			if(triple >= 1 && i == 6){
		//		cout << "TRÓJKA ";
				p3_hand_type = 7;
		/*		if(hand_name != "0"){
					cout << hand_name;
				}else{
					cout << hand_value;
				}	
				cout << "!";
		*/		break;
			}
			if(two_pairs >= 1 && i == 6){
		//		cout << "DWIE PARY ";
				p3_hand_type = 8;
		/*		if(hand_name != "0"){
					cout << hand_name;
				}else{
					cout << hand_value;
				}	
				cout << " i ";
				if(hand_name2 != "0"){
					cout << hand_name2;
				}else{
					cout << hand_value2;
				}	
				cout << "!";
		*/		break;
			}
			if(pair >= 2 && i == 6){
		//		cout << "PARA ";
				p3_hand_type = 9;
		/*		if(hand_name != "0"){
					cout << hand_name;
				}else{
					cout << hand_value;
				}	
				cout << "!";
		*/		break;
			}
			if(i == 6){
		//	cout << "WYSOKA KARTA: ";
			p3_hand_type = 10;
		/*	if(card_name[highest_card] != "0"){
				cout << card_name[highest_card];
			}else{
				cout << card_value[highest_card];
			}
			cout << card_type[highest_card];
		*/	break;
			}
		}
		
		int p3_hand_value3, p3_hand_value4, p3_hand_value5, p3_hand_value6, p3_hand_value7;
		p3_hand_value3 = card_value[highest_card];
		p3_hand_value4 = card_value[highest_card2];
		p3_hand_value5 = card_value[highest_card3];
		p3_hand_value6 = card_value[highest_card4];
		p3_hand_value7 = card_value[highest_card5];
		
		//wypisywanie najmocniejszej rêki
		int p3_card_set[5];
		s = 0;
		f = 0;
		
		if(p3_hand_type == 10 || p3_hand_type == 5 || p3_hand_type == 2 || p3_hand_type == 1){
			for (i = 0; i < 5; i++){
				if (p3_hand_type == 10 || (p3_hand_type != 10 && p3_is_colour[6-i] == 1)){
					p3_card_set[s] = player3[6-i];
					s++;
				}
				if(s == 5){
					break;
				}
			}
		}
		if(p3_hand_type == 9 || p3_hand_type == 8 || p3_hand_type == 7 || p3_hand_type == 3){
			for (i = 0; i < 7; i++){
				if(p3_is_multiple[6-i] == 1 || p3_is_multiple[6-i] == 2){
					p3_card_set[s] = player3[6-i];
					s++;
					f = i+1;
					break;
				}
			}
			for (i = f; i < 7; i++){
				if(p3_is_multiple[6-i] == 1 || p3_is_multiple[6-i] == 2){
					p3_card_set[s] = player3[6-i];
					s++;
					f = i+1;
					break;
				}
			}
			if(p3_hand_type == 8 || p3_hand_type == 7 || p3_hand_type == 3){
				for (i = f; i < 7; i++){
					if(p3_is_multiple[6-i] == 1 || p3_is_multiple[6-i] == 2){
						p3_card_set[s] = player3[6-i];
						s++;
						f = i+1;
						break;
					}
				}
				if(p3_hand_type == 8 || p3_hand_type == 3){
					for (i = f; i < 7; i++){
						if(p3_is_multiple[6-i] == 1 || p3_is_multiple[6-i] == 2){
							p3_card_set[s] = player3[6-i];
							s++;
							f = i+1;
							break;
						}
					}	
				}
			}
			for (i = 0; i < 7; i++){
				if(p3_is_multiple[6-i] == 0){
					p3_card_set[s] = player3[6-i];
					s++;
				}
				if(s == 5){
					break;
				}
			}
		}
		if(p3_hand_type == 4){
			for (i = 0; i < 7; i++){
				if (card_value[player3[6-i]] == p3_hand_value){
					p3_card_set[s] = player3[6-i];
					s++;
				}
				if (card_value[player3[6-i]] == p3_hand_value2){
					p3_card_set[s] = player3[6-i];
					s++;
				}
				if (s == 5){
					break;
				}
			}
		}
		if(p3_hand_type == 6){
			for (i = 0; i < 7; i++){
				if (card_value[player3[6-i]] != card_value[player3[7-i]] && p3_is_straight[6-i] == 1){
					p3_card_set[s] = player3[6-i];
					s++;
				}
				if(s == 5){
					break;
				}
			}
		}
		
		cout << p3 << ": ";
		for (i = 0; i < 5; i++){
				if(card_name[p3_card_set[i]] != "0"){
					cout << card_name[p3_card_set[i]];
				}else{
				cout << card_value[p3_card_set[i]];
					}
				cout << card_type[p3_card_set[i]] << " ";
			}
		if(p3_ready == -1){
			cout << "   PAS";
		}	
		cout << endl << endl;
		
		//P4
		
		int p4_is_colour[7];
			for (i = 0; i < 7; i++){
				p4_is_colour[i] = 0;
			}
		int p4_is_straight[7];
			for (i = 0; i < 7; i++){
				p4_is_straight[i] = 0;
			}
		int p4_is_multiple[7];
			for (i = 0; i < 7; i++){
				p4_is_multiple[i] = 0;
			}	
			
		// Si³a Rêki
		hand_value = 0;
		
		for (i = 0; i < 7; i++){
			for (q = 0; q < 6; q++){
				if (player4[q] > player4[q+1]){
					int a = player4[q];
					int b = player4[q+1];
					player4[q] = b;
					player4[q+1] = a;
				}
			}
		}
		
		//Szukanie koloru
		t1 = 0;
		t2 = 0;
		t3 = 0;
		t4 = 0;
		for (i = 0; i < 7; i++){
			q = player4[i];
			if(card_type[q] == 3){
				t1++;
			}
			if(card_type[q] == 4){
				t2++;
			}
			if(card_type[q] == 5){
				t3++;
			}
			if(card_type[q] == 6){
				t4++;
			}
		}
		for (i = 0; i < 7; i++){
			if(t1 >=5){
				if(card_type[player4[i]] == 3){
					p4_is_colour[i] = 1;
				}
			}
		}
		for (i = 0; i < 7; i++){
			if(t2 >=5){
				if(card_type[player4[i]] == 4){
					p4_is_colour[i] = 1;
				}
			}
		}
		for (i = 0; i < 7; i++){
			if(t3 >=5){
				if(card_type[player4[i]] == 5){
					p4_is_colour[i] = 1;
				}
			}
		}
		for (i = 0; i < 7; i++){
			if(t4 >=5){
				if(card_type[player4[i]] == 6){
					p4_is_colour[i] = 1;
				}
			}
		}
		
		//Szukanie strita
		//Naprawa b³êdu dotycz¹cego POKER
		for (i = 0; i < 7; i++){
			for (q = 0; q < 6; q++){
				if (p4_is_colour[q] > p4_is_colour[q+1]){
					int a = player4[q];
					int b = player4[q+1];
					player4[q] = b;
					player4[q+1] = a;
					int c = p4_is_colour[q];
					int d = p4_is_colour[q+1];
					p4_is_colour[q] = d;
					p4_is_colour[q+1] = c;
				}
			}
		}
		
		straight[7];
		for (i = 0; i < 7; i++){
			straight[i] = card_value[player4[i]];
		}	
		
		//w kolorze
		if(t1 >= 5 || t2 >= 5  || t3 >=5  || t4 >= 5){
			int straight_count = 0;
			for (i = 0; i < 6; i++){
				if((straight[6-i] == straight[5-i] + 1) && p4_is_colour[6-i] == p4_is_colour[5-i] && p4_is_colour[6-i] == 1){
					straight_count++;
				}
				if((straight[6-i] > straight[5-i] + 1) || p4_is_colour[6-i] != p4_is_colour[5-i] || p4_is_colour[6-i] != 1){
					straight_count = 0;
				}
				if(straight_count == 4){
					p4_is_straight[5-i] = 1;
					p4_is_straight[6-i] = 1;
					p4_is_straight[7-i] = 1;
					p4_is_straight[8-i] = 1;
					p4_is_straight[9-i] = 1;
					break;
				}
			}
		}
		
		//bez koloru
		if(t1 < 5 && t2 < 5  && t3 < 5  && t4 < 5){	
			int straight_count = 0;
			int additional_straight = 0;
			for (i = 0; i < 6; i++){
				if(straight[6-i] == straight[5-i] + 1){
					straight_count++;
				}
				if(straight[6-i] == straight[5-i]){
					additional_straight++;
				}
				if(straight[6-i] > straight[5-i] + 1){
					straight_count = 0;
				}
				if(straight_count == 4){
					p4_is_straight[5-i] = 1;
					p4_is_straight[6-i] = 1;
					p4_is_straight[7-i] = 1;
					p4_is_straight[8-i] = 1;
					p4_is_straight[9-i] = 1;
					if(additional_straight > 0){
						p4_is_straight[10-i] = 1;	
					}
					if(additional_straight > 1){
						p4_is_straight[11-i] = 1;	
					}
					break;
				}
			}
		}
		
		//kareta, ful, trójka, pary
		pairs[7];
		for (i = 0; i < 7; i++){
			pairs[i] = card_value[player4[i]];
		}	
		
		for (i = 0; i < 7; i++){
			if(pairs[6-i] == pairs[5-i]){
				p4_is_multiple[6-i]++;
				p4_is_multiple[5-i]++;
			}
		}
		
		quad = 0;
		full = 0;
		triple = 0;
		two_pairs = 0;
		pair = 0;
		for (i = 0; i < 7; i++){
			if(p4_is_multiple[i] == 2){
				triple++;
			}
			if(p4_is_multiple[i] == 1){
				pair++;
			}
			if(triple == 2){
				quad++;
			}
			if(triple == 1 && pair >= 4){
				full++;
			}
			if(pair >= 4){
				two_pairs++;
			}
		}
		
		hand_value2 = 0;
		//wartoœæ par
		for (i = 0; i < 7; i++){
			if(p4_is_multiple[6-i] == 2){
				hand_value = card_value[player4[6-i]];
				break;
			}	
			if(i == 6){
				for (q = 0; q < 7; q++){
					if(p4_is_multiple[6-q] == 1){
						hand_value = card_value[player4[6-q]];
						break;
					}
				}
			}
		}
		for (i = 0; i < 7; i++){
			if(p4_is_multiple[6-i] == 2 && card_value[player4[6-i]] != hand_value){
				hand_value2 = card_value[player4[6-i]];
				break;
			}	
			if(p4_is_multiple[6-i] == 1 && card_value[player4[6-i]] != hand_value){
				hand_value2 = card_value[player4[6-i]];
				break;
			}	
		}
		
		//wartoœæ koloru
		for (i = 0; i < 7; i++){
			if(p4_is_colour[6-i] == 1){
				hand_value = card_value[player4[6-i]];
				break;
			}	
		}
		
		//wartoœæ strita
		for (i = 0; i < 7; i++){
			if(p4_is_straight[6-i] == 1){
				if (straight[6-i] > hand_value){
				hand_value = straight[6-i];
				}
			}	
		}
		
		//wysoka karta
		highest_card = -1;
		for (i = 0; i < 7; i++){
			if (player4[i] > highest_card && p4_is_multiple[i] == 0){
				highest_card = player4[i];
			}
		}	
		
		highest_card2 = -1;
		for (i = 0; i < 7; i++){
			if (player4[i] > highest_card2 && player4[i] < highest_card && p4_is_multiple[i] == 0){
				highest_card2 = player4[i];
			}
		}	
		
		highest_card3 = -1;
		for (i = 0; i < 7; i++){
			if (player4[i] > highest_card3 && player4[i] < highest_card2 && p4_is_multiple[i] == 0){
				highest_card3 = player4[i];
			}
		}	
		
		highest_card4 = -1;
		for (i = 0; i < 7; i++){
			if (player4[i] > highest_card4 && player4[i] < highest_card3 && p4_is_multiple[i] == 0){
				highest_card4 = player4[i];
			}
		}	
		
		highest_card5 = -1;
		for (i = 0; i < 7; i++){
			if (player4[i] > highest_card5 && player4[i] < highest_card4 && p4_is_multiple[i] == 0){
				highest_card5 = player4[i];
			}
		}	
		
		if(t1 >= 5 || t2 >= 5  || t3 >=5  || t4 >= 5){
			highest_card = -1;
			for (i = 0; i < 7; i++){
				if (player4[i] > highest_card && p4_is_colour[i] == 1){
					highest_card = player4[i];
				}
			}	
			
			highest_card2 = -1;
			for (i = 0; i < 7; i++){
				if (player4[i] > highest_card2 && player4[i] < highest_card && p4_is_colour[i] == 1){
					highest_card2 = player4[i];
				}
			}	
			
			highest_card3 = -1;
			for (i = 0; i < 7; i++){
				if (player4[i] > highest_card3 && player4[i] < highest_card2 && p4_is_colour[i] == 1){
					highest_card3 = player4[i];
				}
			}	
			
			highest_card4 = -1;
			for (i = 0; i < 7; i++){
				if (player4[i] > highest_card4 && player4[i] < highest_card3 && p4_is_colour[i] == 1){
					highest_card4 = player4[i];
				}
			}	
			
			highest_card5 = -1;
			for (i = 0; i < 7; i++){
				if (player4[i] > highest_card5 && player4[i] < highest_card4 && p4_is_colour[i] == 1){
					highest_card5 = player4[i];
				}
			}
		}
		
			hand_name = "0";
			hand_name2 = "0";
			if(hand_value == 11){
				hand_name = "J";
			}
			if(hand_value == 12){
				hand_name = "Q";
			}
			if(hand_value == 13){
				hand_name = "K";
			}
			if(hand_value == 14){
				hand_name = "A";
			}
			if(hand_value2 == 11){
				hand_name2 = "J";
			}
			if(hand_value2 == 12){
				hand_name2 = "Q";
			}
			if(hand_value2 == 13){
				hand_name2 = "K";
			}
			if(hand_value2 == 14){
				hand_name2 = "A";
			}
		
		//uk³ad kart
		int p4_hand_type;
		int p4_hand_value, p4_hand_value2;
		p4_hand_value = hand_value;	
		p4_hand_value2 = hand_value2;	
		
		//cout << endl;
		for (i = 0; i < 7; i++){
			if(p4_is_colour[6-i] == 1 && p4_is_straight[6-i] == 1 && p4_hand_value == 14){
		//		cout << "POKER KRÓLEWSKI!";
				p4_hand_type = 1;
				break;
			}
			if(p4_is_colour[6-i] == 1 && p4_is_straight[6-i] == 1){
		//		cout << "POKER!";
				p4_hand_type = 2;
				break;
			}
			if(quad >= 1 && i == 6){
		//		cout << "KARETA ";
				p4_hand_type = 3;
		/*		if(hand_name != "0"){
					cout << hand_name;
				}else{
					cout << hand_value;
				}	
				cout << "!";
		*/		break;
			}
			if(full >= 1 && i == 6){
		//		cout << "FULL ";
				p4_hand_type = 4;
		/*		if(hand_name != "0"){
					cout << hand_name;
				}else{
					cout << hand_value;
				}	
				cout << " i ";
				if(hand_name2 != "0"){
					cout << hand_name2;
				}else{
					cout << hand_value2;
				}	
				cout << "!";
		*/		break;
			}
			if(p4_is_colour[6-i] == 1){
		//		cout << "KOLOR!";
				p4_hand_type = 5;
				break;
			}
			if(p4_is_straight[6-i] == 1){
		//		cout << "STRIT!";
				p4_hand_type = 6;
				break;
			}	
			if(triple >= 1 && i == 6){
		//		cout << "TRÓJKA ";
				p4_hand_type = 7;
		/*		if(hand_name != "0"){
					cout << hand_name;
				}else{
					cout << hand_value;
				}	
				cout << "!";
		*/		break;
			}
			if(two_pairs >= 1 && i == 6){
		//		cout << "DWIE PARY ";
				p4_hand_type = 8;
		/*		if(hand_name != "0"){
					cout << hand_name;
				}else{
					cout << hand_value;
				}	
				cout << " i ";
				if(hand_name2 != "0"){
					cout << hand_name2;
				}else{
					cout << hand_value2;
				}	
				cout << "!";
		*/		break;
			}
			if(pair >= 2 && i == 6){
		//		cout << "PARA ";
				p4_hand_type = 9;
		/*		if(hand_name != "0"){
					cout << hand_name;
				}else{
					cout << hand_value;
				}	
				cout << "!";
		*/		break;
			}
			if(i == 6){
		//	cout << "WYSOKA KARTA: ";
			p4_hand_type = 10;
		/*	if(card_name[highest_card] != "0"){
				cout << card_name[highest_card];
			}else{
				cout << card_value[highest_card];
			}
			cout << card_type[highest_card];
		*/	break;
			}
		}
		
		int p4_hand_value3, p4_hand_value4, p4_hand_value5, p4_hand_value6, p4_hand_value7;
		p4_hand_value3 = card_value[highest_card];
		p4_hand_value4 = card_value[highest_card2];
		p4_hand_value5 = card_value[highest_card3];
		p4_hand_value6 = card_value[highest_card4];
		p4_hand_value7 = card_value[highest_card5];
		
		//wypisywanie najmocniejszej rêki
		int p4_card_set[5];
		s = 0;
		f = 0;
		
		if(p4_hand_type == 10 || p4_hand_type == 5 || p4_hand_type == 2 || p4_hand_type == 1){
			for (i = 0; i < 5; i++){
				if (p4_hand_type == 10 || (p4_hand_type != 10 && p4_is_colour[6-i] == 1)){
					p4_card_set[s] = player4[6-i];
					s++;
				}
				if(s == 5){
					break;
				}
			}
		}
		if(p4_hand_type == 9 || p4_hand_type == 8 || p4_hand_type == 7 || p4_hand_type == 3){
			for (i = 0; i < 7; i++){
				if(p4_is_multiple[6-i] == 1 || p4_is_multiple[6-i] == 2){
					p4_card_set[s] = player4[6-i];
					s++;
					f = i+1;
					break;
				}
			}
			for (i = f; i < 7; i++){
				if(p4_is_multiple[6-i] == 1 || p4_is_multiple[6-i] == 2){
					p4_card_set[s] = player4[6-i];
					s++;
					f = i+1;
					break;
				}
			}
			if(p4_hand_type == 8 || p4_hand_type == 7 || p4_hand_type == 3){
				for (i = f; i < 7; i++){
					if(p4_is_multiple[6-i] == 1 || p4_is_multiple[6-i] == 2){
						p4_card_set[s] = player4[6-i];
						s++;
						f = i+1;
						break;
					}
				}
				if(p4_hand_type == 8 || p4_hand_type == 3){
					for (i = f; i < 7; i++){
						if(p4_is_multiple[6-i] == 1 || p4_is_multiple[6-i] == 2){
							p4_card_set[s] = player4[6-i];
							s++;
							f = i+1;
							break;
						}
					}	
				}
			}
			for (i = 0; i < 7; i++){
				if(p4_is_multiple[6-i] == 0){
					p4_card_set[s] = player4[6-i];
					s++;
				}
				if(s == 5){
					break;
				}
			}
		}
		if(p4_hand_type == 4){
			for (i = 0; i < 7; i++){
				if (card_value[player4[6-i]] == p4_hand_value){
					p4_card_set[s] = player4[6-i];
					s++;
				}
				if (card_value[player4[6-i]] == p4_hand_value2){
					p4_card_set[s] = player4[6-i];
					s++;
				}
				if (s == 5){
					break;
				}
			}
		}
		if(p4_hand_type == 6){
			for (i = 0; i < 7; i++){
				if (card_value[player4[6-i]] != card_value[player4[7-i]] && p4_is_straight[6-i] == 1){
					p4_card_set[s] = player4[6-i];
					s++;
				}
				if(s == 5){
					break;
				}
			}
		}
		
		
		cout << p4 << ": ";
		for (i = 0; i < 5; i++){
				if(card_name[p4_card_set[i]] != "0"){
					cout << card_name[p4_card_set[i]];
				}else{
				cout << card_value[p4_card_set[i]];
					}
				cout << card_type[p4_card_set[i]] << " ";
			}
		if(p4_ready == -1){
			cout << "   PAS";
		}
		cout << endl << endl;
		
		//WYGRANA
		if(p1_ready == -1){
			p1_hand_type = 101;
		}
		if(p2_ready == -1){
			p2_hand_type = 102;
		}	
		if(p3_ready == -1){
			p3_hand_type = 103;
		}
		if(p4_ready == -1){
			p4_hand_type = 104;
		}
		
		int results[3];
		for (i = 0; i < 3; i++){
			results[i] = 0;
		}
		int winners[4];
		for (i = 0; i < 4; i++){
			winners[i] = 0;
		}
		
		//p1 vs p2
		if(p1_hand_type < p2_hand_type){
			results[0] = 2;
		}
		if(p1_hand_type > p2_hand_type){
			results[0] = 0;
		}
		if(p1_hand_type == p2_hand_type){
			if(p1_hand_type == 1){
				results[0] = 1;
			}else{
				if(p1_hand_value > p2_hand_value){
					results[0] = 2;
				}
				if(p1_hand_value < p2_hand_value){
					results[0] = 0;
				}
				if(p1_hand_value == p2_hand_value){
					if(p1_hand_type == 2 || p1_hand_type == 6){
						results[0] = 1;
					}else{
						if(p1_hand_value2 > p2_hand_value2){
							results[0] = 2;
						}
						if(p1_hand_value2 < p2_hand_value2){
							results[0] = 0;
						}
						if(p1_hand_value2 == p2_hand_value2){
							if(p1_hand_type == 4){
								results[0] = 1;
							}else{
								if(p1_hand_value3 > p2_hand_value3){
									results[0] = 2;
								}
								if(p1_hand_value3 < p2_hand_value3){
									results[0] = 0;
								}
								if(p1_hand_value3 == p2_hand_value3){
									if(p1_hand_type == 5 || p1_hand_type == 7 || p1_hand_type == 9 || p1_hand_type == 10){
										if(p1_hand_value4 > p2_hand_value4){
											results[0] = 2;
										}
										if(p1_hand_value4 < p2_hand_value4){
											results[0] = 0;
										}
										if(p1_hand_value4 == p2_hand_value4){
											if(p1_hand_type == 5 || p1_hand_type == 9 || p1_hand_type == 10){
												if(p1_hand_value5 > p2_hand_value5){
													results[0] = 2;
												}
												if(p1_hand_value5 < p2_hand_value5){
													results[0] = 0;
												}
												if(p1_hand_value5 == p2_hand_value5){
													if(p1_hand_type == 5 || p1_hand_type == 10){
														if(p1_hand_value6 > p2_hand_value6){
															results[0] = 2;
														}
														if(p1_hand_value6 < p2_hand_value6){
															results[0] = 0;
														}
														if(p1_hand_value6 == p2_hand_value6){
															if(p1_hand_value7 > p2_hand_value7){
																results[0] = 2;
															}
															if(p1_hand_value7 < p2_hand_value7){
																results[0] = 0;
															}
															if(p1_hand_value7 == p2_hand_value7){
																results[0] = 1;		
															}		
														}
													}else{
														results[0] = 1;
													}
												}
											}else{
												results[0] = 1;
											}
										}
									}else{
										results[0] = 1;
									}	
								}
							}
						}
					}
				}
			}
		}
		
		if(results[0] == 0){
		//p2 vs p3
			if(p2_hand_type < p3_hand_type){
				results[1] = 2;
			}
			if(p2_hand_type > p3_hand_type){
				results[1] = 0;
			}
			if(p2_hand_type == p3_hand_type){
				if(p2_hand_type == 1){
					results[1] = 1;
				}else{
					if(p2_hand_value > p3_hand_value){
						results[1] = 2;
					}
					if(p2_hand_value < p3_hand_value){
						results[1] = 0;
					}
					if(p2_hand_value == p3_hand_value){
						if(p2_hand_type == 2 || p2_hand_type == 6){
							results[1] = 1;
						}else{
							if(p2_hand_value2 > p3_hand_value2){
								results[1] = 2;
							}
							if(p2_hand_value2 < p3_hand_value2){
								results[1] = 0;
							}
							if(p2_hand_value2 == p3_hand_value2){
								if(p2_hand_type == 4){
									results[1] = 1;
								}else{
									if(p2_hand_value3 > p3_hand_value3){
										results[1] = 2;
									}
									if(p2_hand_value3 < p3_hand_value3){
										results[1] = 0;
									}
									if(p2_hand_value3 == p3_hand_value3){
										if(p2_hand_type == 5 || p2_hand_type == 7 || p2_hand_type == 9 || p2_hand_type == 10){
											if(p2_hand_value4 > p3_hand_value4){
												results[1] = 2;
											}
											if(p2_hand_value4 < p3_hand_value4){
												results[1] = 0;
											}
											if(p2_hand_value4 == p3_hand_value4){
												if(p2_hand_type == 5 || p2_hand_type == 9 || p2_hand_type == 10){
													if(p2_hand_value5 > p3_hand_value5){
														results[1] = 2;
													}
													if(p2_hand_value5 < p3_hand_value5){
														results[1] = 0;
													}
													if(p2_hand_value5 == p3_hand_value5){
														if(p2_hand_type == 5 || p2_hand_type == 10){
															if(p2_hand_value6 > p3_hand_value6){
																results[1] = 2;
															}
															if(p2_hand_value6 < p3_hand_value6){
																results[1] = 0;
															}
															if(p2_hand_value6 == p3_hand_value6){
																if(p2_hand_value7 > p3_hand_value7){
																	results[1] = 2;
																}
																if(p2_hand_value7 < p3_hand_value7){
																	results[1] = 0;
																}
																if(p2_hand_value7 == p3_hand_value7){
																	results[1] = 1;		
																}		
															}
														}else{
															results[1] = 1;
														}
													}
												}else{
													results[1] = 1;
												}
											}
										}else{
											results[1] = 1;
										}	
									}
								}
							}
						}
					}
				}
			}
		}else{
		//p1 vs p3
			if(p1_hand_type < p3_hand_type){
				results[1] = 2;
			}
			if(p1_hand_type > p3_hand_type){
				results[1] = 0;
			}
			if(p1_hand_type == p3_hand_type){
				if(p1_hand_type == 1){
					results[1] = 1;
				}else{
					if(p1_hand_value > p3_hand_value){
						results[1] = 2;
					}
					if(p1_hand_value < p3_hand_value){
						results[1] = 0;
					}
					if(p1_hand_value == p3_hand_value){
						if(p1_hand_type == 2 || p1_hand_type == 6){
							results[1] = 1;
						}else{
							if(p1_hand_value2 > p3_hand_value2){
								results[1] = 2;
							}
							if(p1_hand_value2 < p3_hand_value2){
								results[1] = 0;
							}
							if(p1_hand_value2 == p3_hand_value2){
								if(p1_hand_type == 4){
									results[1] = 1;
								}else{
									if(p1_hand_value3 > p3_hand_value3){
										results[1] = 2;
									}
									if(p1_hand_value3 < p3_hand_value3){
										results[1] = 0;
									}
									if(p1_hand_value3 == p3_hand_value3){
										if(p1_hand_type == 5 || p1_hand_type == 7 || p1_hand_type == 9 || p1_hand_type == 10){
											if(p1_hand_value4 > p3_hand_value4){
												results[1] = 2;
											}
											if(p1_hand_value4 < p3_hand_value4){
												results[1] = 0;
											}
											if(p1_hand_value4 == p3_hand_value4){
												if(p1_hand_type == 5 || p1_hand_type == 9 || p1_hand_type == 10){
													if(p1_hand_value5 > p3_hand_value5){
														results[1] = 2;
													}
													if(p1_hand_value5 < p3_hand_value5){
														results[1] = 0;
													}
													if(p1_hand_value5 == p3_hand_value5){
														if(p1_hand_type == 5 || p1_hand_type == 10){
															if(p1_hand_value6 > p3_hand_value6){
																results[1] = 2;
															}
															if(p1_hand_value6 < p3_hand_value6){
																results[1] = 0;
															}
															if(p1_hand_value6 == p3_hand_value6){
																if(p1_hand_value7 > p3_hand_value7){
																	results[1] = 2;
																}
																if(p1_hand_value7 < p3_hand_value7){
																	results[1] = 0;
																}
																if(p1_hand_value7 == p3_hand_value7){
																	results[1] = 1;		
																}		
															}
														}else{
															results[1] = 1;
														}
													}
												}else{
													results[1] = 1;
												}
											}
										}else{
											results[1] = 1;
										}	
									}
								}
							}
						}
					}
				}
			}
		}
		
		
		if(results[1] == 0){
		//p3 vs p4
			if(p3_hand_type < p4_hand_type){
				results[2] = 2;
			}
			if(p3_hand_type > p4_hand_type){
				results[2] = 0;
			}
			if(p3_hand_type == p4_hand_type){
				if(p3_hand_type == 1){
					results[2] = 1;
				}else{
					if(p3_hand_value > p4_hand_value){
						results[2] = 2;
					}
					if(p3_hand_value < p4_hand_value){
						results[2] = 0;
					}
					if(p3_hand_value == p4_hand_value){
						if(p3_hand_type == 2 || p3_hand_type == 6){
							results[2] = 1;
						}else{
							if(p3_hand_value2 > p4_hand_value2){
								results[2] = 2;
							}
							if(p3_hand_value2 < p4_hand_value2){
								results[2] = 0;
							}
							if(p3_hand_value2 == p4_hand_value2){
								if(p3_hand_type == 4){
									results[2] = 1;
								}else{
									if(p3_hand_value3 > p4_hand_value3){
										results[2] = 2;
									}
									if(p3_hand_value3 < p4_hand_value3){
										results[2] = 0;
									}
									if(p3_hand_value3 == p4_hand_value3){
										if(p3_hand_type == 5 || p3_hand_type == 7 || p3_hand_type == 9 || p3_hand_type == 10){
											if(p3_hand_value4 > p4_hand_value4){
												results[2] = 2;
											}
											if(p3_hand_value4 < p4_hand_value4){
												results[2] = 0;
											}
											if(p3_hand_value4 == p4_hand_value4){
												if(p3_hand_type == 5 || p3_hand_type == 9 || p3_hand_type == 10){
													if(p3_hand_value5 > p4_hand_value5){
														results[2] = 2;
													}
													if(p3_hand_value5 < p4_hand_value5){
														results[2] = 0;
													}
													if(p3_hand_value5 == p4_hand_value5){
														if(p3_hand_type == 5 || p3_hand_type == 10){
															if(p3_hand_value6 > p4_hand_value6){
																results[2] = 2;
															}
															if(p3_hand_value6 < p4_hand_value6){
																results[2] = 0;
															}
															if(p3_hand_value6 == p4_hand_value6){
																if(p3_hand_value7 > p4_hand_value7){
																	results[2] = 2;
																}
																if(p3_hand_value7 < p4_hand_value7){
																	results[2] = 0;
																}
																if(p3_hand_value7 == p4_hand_value7){
																	results[2] = 1;		
																}		
															}
														}else{
															results[2] = 1;
														}
													}
												}else{
													results[2] = 1;
												}
											}
										}else{
											results[2] = 1;
										}	
									}
								}
							}
						}
					}
				}
			}
		}else{
			if(results[0] == 0){
		//p2 vs p4
			if(p2_hand_type < p4_hand_type){
				results[2] = 2;
			}
			if(p2_hand_type > p4_hand_type){
				results[2] = 0;
			}
			if(p2_hand_type == p4_hand_type){
				if(p2_hand_type == 1){
					results[2] = 1;
				}else{
					if(p2_hand_value > p4_hand_value){
						results[2] = 2;
					}
					if(p2_hand_value < p4_hand_value){
						results[2] = 0;
					}
					if(p2_hand_value == p4_hand_value){
						if(p2_hand_type == 2 || p2_hand_type == 6){
							results[2] = 1;
						}else{
							if(p2_hand_value2 > p4_hand_value2){
								results[2] = 2;
							}
							if(p2_hand_value2 < p4_hand_value2){
								results[2] = 0;
							}
							if(p2_hand_value2 == p4_hand_value2){
								if(p2_hand_type == 4){
									results[2] = 1;
								}else{
									if(p2_hand_value3 > p4_hand_value3){
										results[2] = 2;
									}
									if(p2_hand_value3 < p4_hand_value3){
										results[2] = 0;
									}
									if(p2_hand_value3 == p4_hand_value3){
										if(p2_hand_type == 5 || p2_hand_type == 7 || p2_hand_type == 9 || p2_hand_type == 10){
											if(p2_hand_value4 > p4_hand_value4){
												results[2] = 2;
											}
											if(p2_hand_value4 < p4_hand_value4){
												results[2] = 0;
											}
											if(p2_hand_value4 == p4_hand_value4){
												if(p2_hand_type == 5 || p2_hand_type == 9 || p2_hand_type == 10){
													if(p2_hand_value5 > p4_hand_value5){
														results[2] = 2;
													}
													if(p2_hand_value5 < p4_hand_value5){
														results[2] = 0;
													}
													if(p2_hand_value5 == p4_hand_value5){
														if(p2_hand_type == 5 || p2_hand_type == 10){
															if(p2_hand_value6 > p4_hand_value6){
																results[2] = 2;
															}
															if(p2_hand_value6 < p4_hand_value6){
																results[2] = 0;
															}
															if(p2_hand_value6 == p4_hand_value6){
																if(p2_hand_value7 > p4_hand_value7){
																	results[2] = 2;
																}
																if(p2_hand_value7 < p4_hand_value7){
																	results[2] = 0;
																}
																if(p2_hand_value7 == p4_hand_value7){
																	results[2] = 1;		
																}		
															}
														}else{
															results[2] = 1;
														}
													}
												}else{
													results[2] = 1;
												}
											}
										}else{
											results[2] = 1;
										}	
									}
								}
							}
						}
					}
				}
			}
			}else{
		//p1 vs p4
				if(p1_hand_type < p4_hand_type){
					results[2] = 2;
				}
				if(p1_hand_type > p4_hand_type){
					results[2] = 0;
				}
				if(p1_hand_type == p4_hand_type){
					if(p1_hand_type == 1){
						results[2] = 1;
					}else{
						if(p1_hand_value > p4_hand_value){
							results[2] = 2;
						}
						if(p1_hand_value < p4_hand_value){
							results[2] = 0;
						}
						if(p1_hand_value == p4_hand_value){
							if(p1_hand_type == 2 || p1_hand_type == 6){
								results[2] = 1;
							}else{
								if(p1_hand_value2 > p4_hand_value2){
									results[2] = 2;
								}
								if(p1_hand_value2 < p4_hand_value2){
									results[2] = 0;
								}
								if(p1_hand_value2 == p4_hand_value2){
									if(p1_hand_type == 4){
										results[2] = 1;
									}else{
										if(p1_hand_value3 > p4_hand_value3){
											results[2] = 2;
										}
										if(p1_hand_value3 < p4_hand_value3){
											results[2] = 0;
										}
										if(p1_hand_value3 == p4_hand_value3){
											if(p1_hand_type == 5 || p1_hand_type == 7 || p1_hand_type == 9 || p1_hand_type == 10){
												if(p1_hand_value4 > p4_hand_value4){
													results[2] = 2;
												}
												if(p1_hand_value4 < p4_hand_value4){
													results[2] = 0;
												}
												if(p1_hand_value4 == p4_hand_value4){
													if(p1_hand_type == 5 || p1_hand_type == 9 || p1_hand_type == 10){
														if(p1_hand_value5 > p4_hand_value5){
															results[2] = 2;
														}
														if(p1_hand_value5 < p4_hand_value5){
															results[2] = 0;
														}
														if(p1_hand_value5 == p4_hand_value5){
															if(p1_hand_type == 5 || p1_hand_type == 10){
																if(p1_hand_value6 > p4_hand_value6){
																	results[2] = 2;
																}
																if(p1_hand_value6 < p4_hand_value6){
																	results[2] = 0;
																}
																if(p1_hand_value6 == p4_hand_value6){
																	if(p1_hand_value7 > p4_hand_value7){
																		results[2] = 2;
																	}
																	if(p1_hand_value7 < p4_hand_value7){
																		results[2] = 0;
																	}
																	if(p1_hand_value7 == p4_hand_value7){
																		results[2] = 1;		
																	}		
																}
															}else{
																results[2] = 1;
															}
														}
													}else{
														results[2] = 1;
													}
												}
											}else{
												results[2] = 1;
											}	
										}
									}
								}
							}
						}
					}
				}
			}
		}
		
		for(i = 0; i < 3; i++){
			if(results[2-i] == 0){
				winners[3-i] = 1;
				break;
			}
			if(results[2-i] == 1){
				winners[3-i] = 1;
			}
			if(i == 2){
				winners[0] = 1;
			}
		}
		
		
		int winners_amount = 0;
		cout << "=========================================" << endl;
		cout << "Zwyciêzcy: ";
		for(i = 0; i < 4; i++){
			if(winners[i] == 1){
				if(i == 0){
					cout << p1 << " ";
					p1_rw++;
				}
				if(i == 1){
					cout << p2 << " ";
					p2_rw++;
				}
				if(i == 2){
					cout << p3 << " ";
					p3_rw++;
				}
				if(i == 3){
					cout << p4 << " ";
					p4_rw++;
				}
			winners_amount++;
			}
		}
		cout << endl;
		cout << "Wygrana: " << p1_deposit + p2_deposit + p3_deposit + p4_deposit << "$" << endl;
		
		if(winners[0] == 1){
			p1_money = p1_money + ((p1_deposit + p2_deposit + p3_deposit + p4_deposit) - ((p1_deposit + p2_deposit + p3_deposit + p4_deposit) % winners_amount))/winners_amount;
		}
		if(winners[1] == 1){
			p2_money = p2_money + ((p1_deposit + p2_deposit + p3_deposit + p4_deposit) - ((p1_deposit + p2_deposit + p3_deposit + p4_deposit) % winners_amount))/winners_amount;
		}
		if(winners[2] == 1){
			p3_money = p3_money + ((p1_deposit + p2_deposit + p3_deposit + p4_deposit) - ((p1_deposit + p2_deposit + p3_deposit + p4_deposit) % winners_amount))/winners_amount;
		}
		if(winners[3] == 1){
			p4_money = p4_money + ((p1_deposit + p2_deposit + p3_deposit + p4_deposit) - ((p1_deposit + p2_deposit + p3_deposit + p4_deposit) % winners_amount))/winners_amount;
		}
		p1_deposit = 0;
		p2_deposit = 0;
		p3_deposit = 0;
		p4_deposit = 0;
		p1_ready = 0;
		p2_ready = 0;
		p3_ready = 0;
		p4_ready = 0;
		wait(5);
		
		ofstream savem("money.txt");
		savem <<  p1_money << endl << p2_money << endl << p3_money << endl << p4_money << endl;
		savem.close();
	
		ofstream saved("deposit.txt");
		saved <<  p1_deposit << endl << p2_deposit << endl << p3_deposit << endl << p4_deposit << endl;
		saved.close();
		
		ofstream saver("ready.txt");
		saver <<  p1_ready << endl << p2_ready << endl << p3_ready << endl << p4_ready << endl;
		saver.close();
		
		ofstream save("round_winner.txt");
			save << p1_rw << endl << p2_rw << endl << p3_rw << endl << p4_rw << endl;
			save.close();
			
		ofstream save2("round_end.txt");
			save2 << 1;
			save2.close();	
				
		system("start statistics.exe");		
}
