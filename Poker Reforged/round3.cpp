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

int r1, r2, r3, r4, d1, d2, d3, d4;	
int endr;
	
	int p1_money, p1_deposit, p1_ready;
	int p2_money, p2_deposit, p2_ready;
	int p3_money, p3_deposit, p3_ready;
	int p4_money, p4_deposit, p4_ready;
			
	int p1_lost;
	int p2_lost;
	int p3_lost;
	int p4_lost;
	
	int dealer;
	int lost_count;
	
	ifstream loadl("lost.txt");
	int i = 0;
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
	
	ifstream load("control_panel.txt");
	i = 0;
	if(load.is_open())
	{
		int cp;
		while(load>>cp)
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
	load.close();

	if(p1_money <= 0 && p1_lost == 0 && p1_ready != 2){
		p1_lost = 1;
		lost_count++;
	}
	if(p2_money <= 0 && p2_lost == 0 && p2_ready != 2){
		p2_lost = 1;
		lost_count++;
	}
	if(p3_money <= 0 && p3_lost == 0 && p3_ready != 2){
		p3_lost = 1;
		lost_count++;
	}
	if(p4_money <= 0 && p4_lost == 0 && p4_ready != 2){
		p4_lost = 1;
		lost_count++;
	}
	
	if(p1_lost == 1){
		p1_ready = -1;
	}
	if(p2_lost == 1){
		p2_ready = -1;
	}
	if(p3_lost == 1){
		p3_ready = -1;
	}
	if(p4_lost == 1){
		p4_ready = -1;
	}

ofstream savel("lost.txt");
	savel <<  p1_lost << endl << p2_lost << endl << p3_lost << endl << p4_lost << endl << lost_count;
	savel.close();
	ofstream saver("ready.txt");
	saver <<  p1_ready << endl << p2_ready << endl << p3_ready << endl << p4_ready << endl;
	saver.close();

int m;
if(d1 == 1){
//cout << "RUNDA 3 DEALER 1";
while(p1_ready == 0 || p2_ready == 0 || p3_ready == 0 || p4_ready == 0){
	if(p4_lost == 0 && p4_ready == 0){
		system("start player4.exe");
		do{
		ifstream move("move_end.txt");
			if(move.is_open())
			{
				while(move>>m)
				{
					
				}
			}
			move.close();
	}while(m == 0);
}
	ofstream save4("move_end.txt");
	save4 <<  "0";
	save4.close();
	if(p1_lost == 0 && p1_ready == 0){
		system("start player1.exe");
	do{
		ifstream move("move_end.txt");
			if(move.is_open())
			{
				while(move>>m)
				{
					
				}
			}
			move.close();
	}while(m == 0);
	}
	ofstream save1("move_end.txt");
	save1 <<  "0";
	save1.close();
	if(p2_lost == 0 && p2_ready == 0){
		system("start player2.exe");
			do{
		ifstream move("move_end.txt");
			if(move.is_open())
			{
				while(move>>m)
				{
					
				}
			}
			move.close();
	}while(m == 0);
	}
	ofstream save2("move_end.txt");
	save2 <<  "0";
	save2.close();
	if(p3_lost == 0 && p3_ready == 0){
		system("start player3.exe");
			do{
		ifstream move("move_end.txt");
			if(move.is_open())
			{
				while(move>>m)
				{
					
				}
			}
			move.close();
	}while(m == 0);
	}
	ofstream save3("move_end.txt");
	save3 <<  "0";
	save3.close();
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
}
if(p1_ready == 1){
	p1_ready = 0;
}
if(p2_ready == 1){
	p2_ready = 0;
}
if(p3_ready == 1){
	p3_ready = 0;
}
if(p4_ready == 1){
	p4_ready = 0;
}
}
if(d2 == 1){
//cout << "RUNDA 3 DEALER 2";
while(p1_ready == 0 || p2_ready == 0 || p3_ready == 0 || p4_ready == 0){
	if(p1_lost == 0 && p1_ready == 0){
		system("start player1.exe");
		do{
		ifstream move("move_end.txt");
			if(move.is_open())
			{
				while(move>>m)
				{
					
				}
			}
			move.close();
	}while(m == 0);
	}
	ofstream save1("move_end.txt");
	save1 <<  "0";
	save1.close();
	if(p2_lost == 0 && p2_ready == 0){
		system("start player2.exe");
		do{
		ifstream move("move_end.txt");
			if(move.is_open())
			{
				while(move>>m)
				{
					
				}
			}
			move.close();
	}while(m == 0);
	}
	ofstream save2("move_end.txt");
	save2 <<  "0";
	save2.close();
	if(p3_lost == 0 && p3_ready == 0){
		system("start player3.exe");
		do{
		ifstream move("move_end.txt");
			if(move.is_open())
			{
				while(move>>m)
				{
					
				}
			}
			move.close();
	}while(m == 0);
	}
	ofstream save3("move_end.txt");
	save3 <<  "0";
	save3.close();
	if(p4_lost == 0 && p4_ready == 0){
		system("start player4.exe");
		do{
		ifstream move("move_end.txt");
			if(move.is_open())
			{
				while(move>>m)
				{
					
				}
			}
			move.close();
	}while(m == 0);
	}
	ofstream save4("move_end.txt");
	save4 <<  "0";
	save4.close();
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
}
if(p1_ready == 1){
	p1_ready = 0;
}
if(p2_ready == 1){
	p2_ready = 0;
}
if(p3_ready == 1){
	p3_ready = 0;
}
if(p4_ready == 1){
	p4_ready = 0;
}
}
if(d3 == 1){
//cout << "RUNDA 3 DEALER 3";
while(p1_ready == 0 || p2_ready == 0 || p3_ready == 0 || p4_ready == 0){
	if(p2_lost == 0 && p2_ready == 0){
		system("start player2.exe");
		do{
		ifstream move("move_end.txt");
			if(move.is_open())
			{
				while(move>>m)
				{
					
				}
			}
			move.close();
	}while(m == 0);
	}
	ofstream save2("move_end.txt");
	save2 <<  "0";
	save2.close();
	if(p3_lost == 0 && p3_ready == 0){
		system("start player3.exe");
		do{
		ifstream move("move_end.txt");
			if(move.is_open())
			{
				while(move>>m)
				{
					
				}
			}
			move.close();
	}while(m == 0);
	}
	ofstream save3("move_end.txt");
	save3 <<  "0";
	save3.close();
	if(p4_lost == 0 && p4_ready == 0){
		system("start player4.exe");
		do{
		ifstream move("move_end.txt");
			if(move.is_open())
			{
				while(move>>m)
				{
					
				}
			}
			move.close();
	}while(m == 0);
	}
	ofstream save4("move_end.txt");
	save4 <<  "0";
	save4.close();
	if(p1_lost == 0 && p1_ready == 0){
		system("start player1.exe");
		do{
		ifstream move("move_end.txt");
			if(move.is_open())
			{
				while(move>>m)
				{
					
				}
			}
			move.close();
	}while(m == 0);
	}
	ofstream save1("move_end.txt");
	save1 <<  "0";
	save1.close();
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
}
if(p1_ready == 1){
	p1_ready = 0;
}
if(p2_ready == 1){
	p2_ready = 0;
}
if(p3_ready == 1){
	p3_ready = 0;
}
if(p4_ready == 1){
	p4_ready = 0;
}
}
if(d4 == 1){
//cout << "RUNDA 3 DEALER 4";
while(p1_ready == 0 || p2_ready == 0 || p3_ready == 0 || p4_ready == 0){
	if(p3_lost == 0 && p3_ready == 0){
		system("start player3.exe");
		do{
		ifstream move("move_end.txt");
			if(move.is_open())
			{
				while(move>>m)
				{
					
				}
			}
			move.close();
	}while(m == 0);
	}
	ofstream save3("move_end.txt");
	save3 <<  "0";
	save3.close();
	if(p4_lost == 0 && p4_ready == 0){
		system("start player4.exe");
		do{
		ifstream move("move_end.txt");
			if(move.is_open())
			{
				while(move>>m)
				{
					
				}
			}
			move.close();
	}while(m == 0);
	}
	ofstream save4("move_end.txt");
	save4 <<  "0";
	save4.close();
	if(p1_lost == 0 && p1_ready == 0){
		system("start player1.exe");
		do{
		ifstream move("move_end.txt");
			if(move.is_open())
			{
				while(move>>m)
				{
					
				}
			}
			move.close();
	}while(m == 0);
	}
	ofstream save1("move_end.txt");
	save1 <<  "0";
	save1.close();
	if(p2_lost == 0 && p2_ready == 0){
		system("start player2.exe");
		do{
		ifstream move("move_end.txt");
			if(move.is_open())
			{
				while(move>>m)
				{
					
				}
			}
			move.close();
	}while(m == 0);
	}
	ofstream save2("move_end.txt");
	save2 <<  "0";
	save2.close();
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
}
if(p1_ready == 1){
	p1_ready = 0;
}
if(p2_ready == 1){
	p2_ready = 0;
}
if(p3_ready == 1){
	p3_ready = 0;
}
if(p4_ready == 1){
	p4_ready = 0;
}
}
ofstream saver2("ready.txt");
	saver2 <<  p1_ready << endl << p2_ready << endl << p3_ready << endl << p4_ready << endl;
	saver2.close();
ofstream save1("bet_end.txt");
	save1 <<  "1";
	save1.close();

//wait(3);	

}
