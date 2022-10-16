#include<iostream>
#include<fstream>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "Polish");
	
ofstream save1("games.txt");
	save1 << "";	
	save1.close();
	
ofstream save("game_stats.txt");
	save << "";
	save.close();		
	
ofstream save2("round_end.txt");
	save2 <<  "0";
	save2.close();	
	
ofstream save4("bet_end.txt");
	save4 <<  "0";
	save4.close();	

ofstream save5("move_end.txt");
	save5 <<  "0";
	save5.close();
	
ofstream save3("control_panel.txt");
	save3 << "1" << endl << "0" << endl << "0" << endl << "0" << endl << endl << "1" << endl << "0" << endl << "0" << endl << "0";
	save3.close();
	
}
