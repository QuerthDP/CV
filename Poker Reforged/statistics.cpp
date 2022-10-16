#include<iostream>
#include<fstream>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "Polish");

string p1;
string p2;
string p3;
string p4;

ifstream names("names.txt");
	int i = 0;
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

int p1_rw = 0, p2_rw = 0, p3_rw = 0, p4_rw = 0;
int p1_w = 0, p2_w = 0, p3_w = 0, p4_w = 0;


ifstream load1("games.txt");

	if(load1.is_open())
	{
		i = 0;
		int games;
		while(load1>>games)
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
	load1.close();

ifstream load("round_winner.txt");
if(load.is_open())
{
	i = 0;
	int winner;
	while(load>>winner)
	{
		if(winner == 1){
			if(i == 0){
			p1_rw++;
			}
			if(i == 1){
			p2_rw++;
			}
			if(i == 2){
			p3_rw++;
			}
			if(i == 3){
			p4_rw++;
			}
		}
		i++;
	}
}
load.close();

	
ofstream save1("games.txt");
	save1 << p1_rw << endl << p2_rw << endl << p3_rw << endl << p4_rw << endl << endl << p1_w << endl << p2_w << endl << p3_w << endl << p4_w;	
	save1.close();	
	
float p1_wr, p2_wr, p3_wr, p4_wr, p1_rwr, p2_rwr, p3_rwr, p4_rwr;
int rounds = (p1_rw + p2_rw + p3_rw + p4_rw);
int games = (p1_w + p2_w + p3_w + p4_w);

if(games == 0){
	games = 1;
}

p1_rwr = p1_rw * 100 / rounds;
p2_rwr = p2_rw * 100 / rounds;
p3_rwr = p3_rw * 100 / rounds;
p4_rwr = p4_rw * 100 / rounds;
p1_wr = p1_w * 100 / games;
p2_wr = p2_w * 100 / games;
p3_wr = p3_w * 100 / games;
p4_wr = p4_w * 100 / games;

/*
cout << endl << endl;
cout << p1 << " wspó³czynnik wygranych rund: " << p1_rwr << "%" << endl;
cout << p2 << " wspó³czynnik wygranych rund: " << p2_rwr << "%" << endl;
cout << p3 << " wspó³czynnik wygranych rund: " << p3_rwr << "%" << endl;
cout << p4 << " wspó³czynnik wygranych rund: " << p4_rwr << "%" << endl;
cout << endl;
cout << p1 << " wspó³czynnik wygranych gier: " << p1_wr << "%" << endl;
cout << p2 << " wspó³czynnik wygranych gier: " << p2_wr << "%" << endl;
cout << p3 << " wspó³czynnik wygranych gier: " << p3_wr << "%" << endl;
cout << p4 << " wspó³czynnik wygranych gier: " << p4_wr << "%" << endl;
*/

ofstream save("game_stats.txt");
	save << p1 << " wspó³czynnik wygranych rund: " << p1_rwr << "%" << endl << p2 << " wspó³czynnik wygranych rund: " << p2_rwr << "%" << endl << p3 << " wspó³czynnik wygranych rund: " << p3_rwr << "%" << endl << p4 << " wspó³czynnik wygranych rund: " << p4_rwr << "%" << endl << endl << p1 << " wspó³czynnik wygranych gier: " << p1_wr << "%" << endl << p2 << " wspó³czynnik wygranych gier: " << p2_wr << "%" << endl << p3 << " wspó³czynnik wygranych gier: " << p3_wr << "%" << endl << p4 << " wspó³czynnik wygranych gier: " << p4_wr << "%" << endl;
	save.close();
	
}
