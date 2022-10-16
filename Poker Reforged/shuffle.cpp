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
	for (i = 0; i < 2; i++){
		do{
			player1[i] = rand() % 52;	
			q = player1[i];
			if(card_usage[q] == 0){
				break;
			}
		}while(0==0);
		q = player1[i];
		card_usage[q] = 2;
	}	

int player2[7];
	for (i = 0; i < 2; i++){
		do{
			player2[i] = rand() % 52;	
			q = player2[i];
			if(card_usage[q] == 0){
				break;
			}
		}while(0==0);
		q = player2[i];
		card_usage[q] = 3;
	}	

int player3[7];
	for (i = 0; i < 2; i++){
		do{
			player3[i] = rand() % 52;	
			q = player3[i];
			if(card_usage[q] == 0){
				break;
			}
		}while(0==0);
		q = player3[i];
		card_usage[q] = 4;
	}	

int player4[7];
	for (i = 0; i < 2; i++){
		do{
			player4[i] = rand() % 52;	
			q = player4[i];
			if(card_usage[q] == 0){
				break;
			}
		}while(0==0);
		q = player4[i];
		card_usage[q] = 5;
	}	

int common[5];
	for (i = 0; i < 5; i++){
		do{
			common[i] = rand() % 52;	//ZMIENIÆ NA 52 !!!!
			q = common[i];
			if(card_usage[q] == 0){
				break;
			}
		}while(0==0);
		q = common[i];
		card_usage[q] = 1;
	}	

for (i = 2; i < 7; i++){
	player1[i] = common[i-2];
	player2[i] = common[i-2];
	player3[i] = common[i-2];
	player4[i] = common[i-2];
}	

ofstream save("card_players.txt");
	for (i = 0; i < 2; i++){
		save << player1[i] << endl;
	}
	save << endl;
	for (i = 0; i < 2; i++){
		save << player2[i] << endl;
	}
	save << endl;
	for (i = 0; i < 2; i++){
		save << player3[i] << endl;
	}
	save << endl;
	for (i = 0; i < 2; i++){
		save << player4[i] << endl;
	}
	save << endl;
	for (i = 0; i < 5; i++){
		save << common[i] << endl;
	}
	save.close();


	system("start control.exe");
}
