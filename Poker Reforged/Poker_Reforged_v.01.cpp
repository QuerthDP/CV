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

system("start stat_reset.exe"); //jednorazowy test

int i;
	
	string p1;
	string p2;
	string p3;
	string p4;
	
	int p1_money, p1_deposit, p1_ready;
	int p2_money, p2_deposit, p2_ready;
	int p3_money, p3_deposit, p3_ready;
	int p4_money, p4_deposit, p4_ready;
	
	int starting_money = 5000;  //zmienialne
	
	int player_amount;
	system("cls");
	cout << "1. 2 graczy" << endl;
	cout << "2. 3 graczy" << endl;
	cout << "3. 4 graczy" << endl;
	cout << endl;
	cin >> player_amount;
	
	p3_money = 0;
	p4_money = 0;
	p1_money = starting_money;
	p2_money = starting_money;
	if(player_amount > 1){
	p3_money = starting_money;
	}
	if(player_amount > 2){
	p4_money = starting_money;
	}
	
	int p1_lost = 0;
	int p2_lost = 0;
	int p3_lost = 0;
	int p4_lost = 0;
	
	int dealer;
	int lost_count = 0;

	dealer = 1;
	
	p1_deposit = 0;
	p2_deposit = 0;
	p3_deposit = 0;
	p4_deposit = 0;
	p1_ready = 0;
	p2_ready = 0;
	p3_ready = 0;
	p4_ready = 0;	
	
	
	system("cls");
	cout << "Jak siê nazywasz?: ";
	cin >> p1;
	p2 = "Jake";
	p3 = "Billy";
	p4 = "Norman";
	
	system("cls");
//	system("start HUD.exe");
	
	ofstream save1("names.txt");
	save1 <<  p1 << endl << p2 << endl << p3 << endl << p4 << endl;
	save1.close();
	
	ofstream save("ready.txt");
	save <<  p1_ready << endl << p2_ready << endl << p3_ready << endl << p4_ready << endl;
	save.close();
	
	ofstream save2("lost.txt");
	save2 <<  p1_lost << endl << p2_lost << endl << p3_lost << endl << p4_lost << endl << lost_count;
	save2.close();
	
	ofstream save3("money.txt");
	save3 <<  p1_money << endl << p2_money << endl << p3_money << endl << p4_money << endl;
	save3.close();
	
	ofstream save4("deposit.txt");
	save4 <<  p1_deposit << endl << p2_deposit << endl << p3_deposit << endl << p4_deposit << endl;
	save4.close();
	
	
	

	int endr;
	do{
		if(lost_count == 3){
			break;
		}	
		system( "start shuffle.exe" );
		do{
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
		if(lost_count == 3){
			break;
		}
			ifstream end("round_end.txt");
			if(end.is_open())
			{
				
				while(end>>endr)
				{
					
				}
			}
			end.close();
		}while(endr == 0);
		ofstream save2("round_end.txt");
			save2 <<  "0";
			save2.close();
		
		
	}while(lost_count < 3);
	
	int p1_rw = 0, p2_rw = 0, p3_rw = 0, p4_rw = 0, p1_w = 0, p2_w = 0, p3_w = 0, p4_w = 0;
	
	ifstream loadg("games.txt");

	if(loadg.is_open())
	{
		i = 0;
		int games;
		while(loadg>>games)
		{
			if(i == 0){
			p1_rw = games;
			}
			if(i == 1){
			p2_rw = games;
			}
			if(i == 2){
			p3_rw = games;
			}
			if(i == 3){
			p4_rw = games;
			}
			if(i == 4){
			p1_w = games;
			}
			if(i == 5){
			p2_w = games;
			}
			if(i == 6){
			p3_w = games;
			}
			if(i == 7){
			p4_w = games;
			}
			i++;
		}
	}
	loadg.close();
	
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
			if(i == 4){
			lost_count = plost;
			}
			i++;
		}
	}
	loadl.close();
	
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
		
		p1_money = p1_money + p1_deposit;
		p2_money = p2_money + p2_deposit;
		p3_money = p3_money + p3_deposit;
		p4_money = p4_money + p4_deposit;
	
		system("start control_killer.exe");
//		system("start HUD_killer.exe");
		
		system("cls");
		cout << "=========================================" << endl;
		if(p1_lost == 0){
		cout << p1 << " wygrywa i zgarnia " << p1_money << "$!" << endl;	
		p1_w++;
		p1_rw--;
		}
		if(p2_lost == 0){
		cout << p2 << " wygrywa i zgarnia " << p2_money << "$!" << endl;	
		p2_w++;
		p2_rw--;
		}
		if(p3_lost == 0){
		cout << p3 << " wygrywa i zgarnia " << p3_money << "$!" << endl;
		p3_w++;	
		p3_rw--;
		}
		if(p4_lost == 0){
		cout << p4 << " wygrywa i zgarnia " << p4_money << "$!" << endl;	
		p4_w++;
		p4_rw--;
		}
		wait(4);
	
ofstream saveg("games.txt");
	saveg << p1_rw << endl << p2_rw << endl << p3_rw << endl << p4_rw << endl << endl << p1_w << endl << p2_w << endl << p3_w << endl << p4_w;	
	saveg.close();	


	system("start statistics.exe");	
	system("start game_stats.txt");
	
}
