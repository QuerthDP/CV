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

int r1, r2, r3, r4, d1, d2, d3, d4;	
int endr;

int lost_count;
ifstream loadl("lost.txt");
		int i = 0;
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
	return 0;
}
	
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
	
	
	ifstream end("round_end.txt");
			if(end.is_open())
			{
				
				while(end>>endr)
				{
					
				}
			}
			end.close();
	
	if(r1 == 1){
		system("start round1.exe");
		ofstream save("control_panel.txt");
	save << d1 << endl << d2 << endl << d3 << endl << d4 << endl << endl << r1 << endl << r2 << endl << r3 << endl << r4;	
	save.close();
		do{
	
			ifstream end("bet_end.txt");
			if(end.is_open())
			{
			
				while(end>>endr)
				{
					
				}
			}
			end.close();
		}while(endr == 0);
		wait(1);
		ofstream save1("bet_end.txt");
			save1 <<  "0";
			save1.close();
		r1 = 0;
		r2 = 1;		
		//wait(3);
	}
	if(r2 == 1){
	system("start round2.exe");
	ofstream save("control_panel.txt");
	save << d1 << endl << d2 << endl << d3 << endl << d4 << endl << endl << r1 << endl << r2 << endl << r3 << endl << r4;	
	save.close();
	do{
	
		ifstream end1("bet_end.txt");
		if(end1.is_open())
		{
			
			while(end1>>endr)
			{
				
			}
		}
		end1.close();
	}while(endr == 0);
	wait(1);
	ofstream save2("bet_end.txt");
		save2 <<  "0";
		save2.close();
		r2 = 0;
		r3 = 1;
		//wait(3);
	}
	if(r3 == 1){
	system("start round3.exe");
	ofstream save("control_panel.txt");
	save << d1 << endl << d2 << endl << d3 << endl << d4 << endl << endl << r1 << endl << r2 << endl << r3 << endl << r4;	
	save.close();
	do{
	
		ifstream end2("bet_end.txt");
		if(end2.is_open())
		{
			
			while(end2>>endr)
			{
				
			}
		}
		end2.close();
	}while(endr == 0);
	wait(1);
	ofstream save3("bet_end.txt");
		save3 <<  "0";
		save3.close();
		r3 = 0;
		r4 = 1;
		//wait(3);
	}
	if(r4 == 1){
	system("start round4.exe");
	ofstream save("control_panel.txt");
	save << d1 << endl << d2 << endl << d3 << endl << d4 << endl << endl << r1 << endl << r2 << endl << r3 << endl << r4;	
	save.close();
	do{
		
		ifstream end2("bet_end.txt");
		if(end2.is_open())
		{
			
			while(end2>>endr)
			{
				
			}
		}
		end2.close();
	}while(endr == 0);
	wait(1);
	ofstream save3("bet_end.txt");
		save3 <<  "0";
		save3.close();
		r4 = 0;
		r1 = 1;
		if(d4 == 1){
			d4 = 0;
			d1 = 1;
		}else{
			if(d3 == 1){
				d3 = 0;
				d4 = 1;
			}else{
				if(d2 == 1){
					d2 = 0;
					d3 = 1;
				}else{
					if(d1 == 1){
						d1 = 0;
						d2 = 1;
					}
				}
			}
		}
		//wait(3);
		system("start winner.exe");
	}
	
		



		
	ofstream save("control_panel.txt");
	save << d1 << endl << d2 << endl << d3 << endl << d4 << endl << endl << r1 << endl << r2 << endl << r3 << endl << r4;	
	save.close();

}
