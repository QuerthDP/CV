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

int i;

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
	ifstream loadr("ready.txt");
	i = 0;
	if(loadr.is_open())
	{
		int pready;
		while(loadr>>pready)
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
	loadr.close();
	
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
	
int r1, r2, r3, r4, d1, d2, d3, d4;		
	
	ifstream round("control_panel.txt");
	i = 0;
	if(round.is_open())
	{
		int cp;
		while(round>>cp)
		{
			if(i == 0){
			d1 = cp;
			}
			if(i == 1){
			d2 = cp;
			}
			if(i == 2){
			d3 = cp;
			}
			if(i == 3){
			d4 = cp;
			}
			if(i == 4){
			r1 = cp;
			}
			if(i == 5){
			r2 = cp;
			}
			if(i == 6){
			r3 = cp;
			}
			if(i == 7){
			r4 = cp;
			}
			i++;
		}
	}
	round.close();		

	int p1_lost;
	int p2_lost;
	int p3_lost;
	int p4_lost;
	
	ifstream loadl("lost.txt");
	i = 0;
	if(loadl.is_open())
	{
		int plost;
		while(loadl>>plost)
		{
			if(i == 0){
			p1_lost = plost;
			}
			if(i == 1){
			p2_lost = plost;
			}
			if(i == 2){
			p3_lost = plost;
			}
			if(i == 3){
			p4_lost = plost;
			}
			i++;
		}
	}
	loadl.close();	

int card_id[52];
	for (i = 0; i < 52; i++){
		card_id[i] = i+1;
	}

int card_value[52];
	int q = 2;
	int p = 1;
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
	int k = 0;
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

cout << "TWOJA KOLEJ, PRZYGOTUJ SIÊ!";
wait(3);
	
	system("cls");
	if(d1 == 1){
		cout << "Dealer: " << p1 << endl;
	}
	if(d2 == 1){
		cout << "Dealer: " << p2 << endl;
	}
	if(d3 == 1){
		cout << "Dealer: " << p3 << endl;
	}
	if(d4 == 1){
		cout << "Dealer: " << p4 << endl;
	}
	if(r1 == 1){
		cout << "Runda: I" << endl;
	}
	if(r2 == 1){
		cout << "Runda: II" << endl;
	}
	if(r3 == 1){
		cout << "Runda: III" << endl;
	}
	if(r4 == 1){
		cout << "Runda: IV" << endl;
	}
	cout << endl;
	cout << "Twoje karty: ";
		for (i = 0; i < 2; i++){
			q = player1[i];
			if(card_name[q] != "0"){
				cout << card_name[q];
			}else{
				cout << card_value[q];
			}
			cout << card_type[q] << " ";	
			}	
	cout << endl << endl;
	if(r2 == 1){
		cout << "Karty wspólne: ";
				for (i = 0; i < 3; i++){
					q = common[i];
					
					
					if(card_name[q] != "0"){
						cout << card_name[q];
					}else{
						cout << card_value[q];
					}
					cout << card_type[q] << " ";	
				}	
				cout << endl << endl;
	}
	if(r3 == 1){
		cout << "Karty wspólne: ";
				for (i = 0; i < 4; i++){
					q = common[i];
					
					
					if(card_name[q] != "0"){
						cout << card_name[q];
					}else{
						cout << card_value[q];
					}
					cout << card_type[q] << " ";	
				}	
				cout << endl << endl;
	}
	if(r4 == 1){
		cout << "Karty wspólne: ";
				for (i = 0; i < 5; i++){
					q = common[i];
					
					
					if(card_name[q] != "0"){
						cout << card_name[q];
					}else{
						cout << card_value[q];
					}
					cout << card_type[q] << " ";	
				}	
				cout << endl << endl;
	}		
			
	cout << "Pieni¹dze:" << endl;
	cout << p1 << ": " << p1_money << "$, ";
	cout << p2 << ": " << p2_money << "$, ";
	cout << p3 << ": " << p3_money << "$, ";
	cout << p4 << ": " << p4_money << "$" << endl << endl;
	cout << "Zak³ady:" << endl;
	if(p1_lost == 0){
		cout << p1 << ": " << p1_deposit << "$, ";
	}
	if(p2_lost == 0){
		cout << p2 << ": " << p2_deposit << "$, ";
	}
	if(p3_lost == 0){
		cout << p3 << ": " << p3_deposit << "$, ";
	}
	if(p4_lost == 0){
		cout << p4 << ": " << p4_deposit << "$";
	}	
	cout << endl;
	cout << "Razem: " << p1_deposit + p2_deposit + p3_deposit + p4_deposit <<"$" << endl;
	cout << endl << endl;
//	wait(2);
	
	int a = max(p1_deposit, p2_deposit);
	int b = max(p3_deposit, p4_deposit);
	int c = max(a,b);
	
	if((p4_ready == -1 || p4_ready == 2) && (p2_ready == -1 || p2_ready == 2) && (p3_ready == -1 || p3_ready == 2) && p1_deposit == c){
		p1_ready = 2;
	}		


int p1_move;
if(p1_ready == 0){

//	cout << p1 << " wykonuje ruch..." << endl << endl;
//	wait(3);
				
	//p1_move = rand() % 3 + 1; //test
	cout << "1. Pas" << endl;
	cout << "2. SprawdŸ" << " (" << c << "$)" << endl;
	cout << "3. Podbij" << endl;
	cout << endl;
	cin >> p1_move;	
	cout << endl;	
							
	if(p1_move == 1){
		cout << p1 << " pasuje." << endl;
		p1_ready = -1;
	}
	if(p1_move == 2){
		if(p1_money <= c - p1_deposit){
			cout << p1 << " gra Va Banque!" << endl;
			p1_deposit = p1_deposit + p1_money;
			p1_money = 0;
			p1_ready = 2;
		}else{
			cout << p1 << " sprawdza." << endl;
			p1_money = p1_money + p1_deposit - c;
			p1_deposit = c;
			p1_ready = 1;
		}
	}
	if(p1_move == 3){
		
		if(p1_money <= c - p1_deposit){
			cout << p1 << " gra Va Banque!" << endl;
			p1_deposit = p1_deposit + p1_money;
			p1_money = 0;
			p1_ready = 2;
		}else{
			int p1_move2;
			//p1_move2 = rand() % (p1_money + p1_deposit - c) + 1; //test
			
			cout << "Ile chcia³byæ podbiæ?" << endl;
			cout << endl;
			cin >> p1_move2;
			cout << endl;			
			
				if(p4_ready == 1){
					p4_ready = 0;
				}
				if(p2_ready == 1){
					p2_ready = 0;
				}
				if(p3_ready == 1){
					p3_ready = 0;
				}
				if(p1_ready == 1){
					p1_ready = 0;
				}
				
			if(p1_move2 >= p1_money + p1_deposit - c){
				cout << p1 << " gra Va Banque!" << endl;
				p1_deposit = p1_deposit + p1_money;
				p1_money = 0;
				p1_ready = 2;
			}else{				
				cout << p1 << " podbija o " << p1_move2 << "$." << endl;
				p1_money = p1_money + p1_deposit - (c + p1_move2);
				p1_deposit = c + p1_move2;
				p1_ready = 1;
			}
		}
	}
		
	wait(3);
}

ofstream saver("ready.txt");
	saver <<  p1_ready << endl << p2_ready << endl << p3_ready << endl << p4_ready << endl;
	saver.close();

	ofstream savem("money.txt");
		savem <<  p1_money << endl << p2_money << endl << p3_money << endl << p4_money << endl;
		savem.close();
	
		ofstream saved("deposit.txt");
		saved <<  p1_deposit << endl << p2_deposit << endl << p3_deposit << endl << p4_deposit << endl;
		saved.close();	
	

//wait(3);	

	ofstream save("move_end.txt");
	save <<  "1";
	save.close();
	
	
}
