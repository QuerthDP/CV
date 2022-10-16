#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
#include<fstream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "Polish");
	srand( time( NULL ) );












	string difficulty;
	int dead, gangel;
	gangel = 0;

	float dtime1, dtime2, dtime3;
	dtime1 = 0;
	dtime2 = 0;
	dtime3 = 0;


	float ctime1, ctime2, ctime3;
	ctime1 = 0;
	ctime2 = 0;
	ctime3 = 0;

	string depositr1, depositr2, depositr3, creditr1, creditr2, creditr3;


	string name, race, type;


	int lvlp, lvl, mobkilled;


	float dmg, hp, hpmax, exp, expn, gold;

	int dmgpotion;
	dmgpotion = 0;

	int idepositr1, idepositr2, idepositr3, icreditr1, icreditr2, icreditr3;
	int irace, itype;
	int iname;
	int idifficulty;
	int quest;

	/*
	cout << "       ,]]]`                                                                                       " << endl;
	cout << "      ,@@@@^                                                                                       " << endl;
	cout << "     =@@`@@@   =@@.   =@@`  ]@@@@@@@`  =@@/@@@@@`  =@@@@@@@@  =@\\@@@@@@.  ,@@@@@@@\\  .@@/@@@@@^    " << endl;
	cout << "   ,@@` =@@.  ,@@^   @@^  /@/   ,@@^  /@@/  .@@^ @@@`  .@@^  =@@/  =@@` =@@`   =@@^ =@@@`  @@^     " << endl;
	cout << "   =@@^  =@@^   \\@\\  /@@  =@@@@@@@/   .@@@       =@@^   /@@   @@^   /@@ .@@^    =@@. /@@   =@@     " << endl;
	cout << "  ,@@@@@@@@@^   =@@,@@/   =@@.        =@@^       =@@`  /@@/  =@@^  *@@^ ,@@^   =@@^  @@^   @@@     " << endl;
	cout << "  @@^    .@@^   *@@@@`     \\@@@@@@@   /@@         @@@@@@@@^  @@@   =@@   ,@@@@@@@.  =@@   =@@^     " << endl;
	cout << "                                                       /@@                                         " << endl;
	cout << "                                                 ,@@@@@@/                                          " << endl;
	*/







start:
	do { //start gry i zamykanie

		string start;
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout << "       ,]]]`                                                                                       " << endl;
		cout << "      ,@@@@^                                                                                       " << endl;
		cout << "     =@@`@@@   =@@.   =@@`  ]@@@@@@@`  =@@/@@@@@`  =@@@@@@@@  =@\\@@@@@@.  ,@@@@@@@\\  .@@/@@@@@^    " << endl;
		cout << "   ,@@` =@@.  ,@@^   @@^  /@/   ,@@^  /@@/  .@@^ @@@`  .@@^  =@@/  =@@` =@@`   =@@^ =@@@`  @@^     " << endl;
		cout << "   =@@^  =@@^   \\@\\  /@@  =@@@@@@@/   .@@@       =@@^   /@@   @@^   /@@ .@@^    =@@. /@@   =@@     " << endl;
		cout << "  ,@@@@@@@@@^   =@@,@@/   =@@.        =@@^       =@@`  /@@/  =@@^  *@@^ ,@@^   =@@^  @@^   @@@     " << endl;
		cout << "  @@^    .@@^   *@@@@`     \\@@@@@@@   /@@         @@@@@@@@^  @@@   =@@   ,@@@@@@@.  =@@   =@@^     " << endl;
		cout << "                                                       /@@                                         " << endl;
		cout << "                                                 ,@@@@@@/                                          " << endl;
		cout << "\t\t\t\t\t\t\t\tAvergnon PATCH 1.20.12.15beta_release" << endl << endl << endl;
		cout << "Witaj w Avergnon!" << endl << endl;
		cout << "Co zamierzasz uczyniæ?" << endl;
		cout << "1. Nowa Gra" << endl;
		cout << "2. Wczytaj zapis" << endl;
		cout << "3. Autorzy" << endl;
		cout << "4. WyjdŸ z gry" << endl << endl;
		cin >> start;

//kreator postaci
		if(start=="1") {

//string depositr1, depositr2, depositr3, creditr1, creditr2, creditr3;
			depositr1 = "PUSTA";
			depositr2 = "PUSTA";
			depositr3 = "PUSTA";
			creditr1 = "DOSTÊPNA";
			creditr2 = "DOSTÊPNA";
			creditr3 = "DOSTÊPNY";
			dead = 0;
			quest = 0;

//string difficulty;
			do {
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				cout << "Wybierz poziom trudnoœci:" << endl;
				cout << "1. Pocz¹tkuj¹cy" << endl;
				cout << "2. Podró¿nik" << endl;
				cout << "3. Zabijaka" << endl;
				cout << "4. Oszust (SANDBOX MODE)" << endl;
//				cout << "5. Tester (DEV USE ONLY)" << endl<<endl;


				cin >> difficulty;
			} while(difficulty!="1" && difficulty!="2" && difficulty!="3" && difficulty!="4" && difficulty!="5");




//int lvlp, lvl, mobkilled;
//float dmg, hp, hpmax, exp, expn, gold;
			if(difficulty=="1") {
				lvl = 1;
				exp = 0;
				expn = 100*lvl;
				lvlp = 10;
				dmg = 7;
				hp = 85;
				hpmax = hp;
				gold = 0;
				mobkilled = 0;
			}
			if(difficulty=="2") {
				lvl = 1;
				exp = 0;
				expn = 1.15*100*lvl;
				lvlp = 8;
				dmg = 5;
				hp = 75;
				hpmax = hp;
				gold = 0;
				mobkilled = 0;
			}
			if(difficulty=="3") {
				lvl = 1;
				exp = 0;
				expn = 1.3*100*lvl;
				lvlp = 6;
				dmg = 5;
				hp = 60;
				hpmax = hp;
				gold = 0;
				mobkilled = 0;
			}
			if(difficulty=="4") {
				lvl = 1;
				exp = 0;
				expn = 100*lvl;
				lvlp = 99999999;
				dmg = 0;
				hp = 0;
				hpmax = hp;
				gold = 99999999;
				mobkilled = 0;

				goto sandbox;
			}
/*			if(difficulty=="5") {
				lvl = 1;
				exp = 0;
				expn = 100*lvl;
				lvlp = 0;
				dmg = 15;
				hp = 100;
				hpmax = hp;
				gold = 10000;
				mobkilled = 0;

				name = "test";
				goto core;
			}*/


//fake ³adowanie
			int loading;
			loading = 0;
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			do {
				int loadingp = (rand() % 100 + 1) % 7;
				if(loadingp == 0) {
					loading++;
				}
				cout << "£adowanie zawartoœci: " << loading << "%" << endl;
			} while(loading < 100);
			cout << "Za³adowano (PATCH 1.20.12.15beta_release)" << endl << endl;
			system("pause");

//tips
zasady:
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			cout << "\tPodpowiedŸ (1/10)" << endl << endl;
			cout << " Wybieraj¹c opcjê podró¿y mo¿esz napotkaæ na przeciwnika, otrzymaæ zadanie lub znaleŸæ skarb!" << endl<< endl;
			system("pause");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			cout << "\tPodpowiedŸ (2/10)" << endl << endl;
			cout << " Iloœæ doœwiadczenia potrzebna do uzyskania kolejnego poziomu roœnie wraz z poziomem. \n Cowiêcej iloœæ ta jest zale¿na od wybranego poziomu trudnoœci." << endl<< endl;
			system("pause");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			cout << "\tPodpowiedŸ (3/10)" << endl << endl;
			cout << " Nie ka¿d¹ walkê da siê zwyciê¿yæ... \n Staraj siê unikaæ walk ze statusem \"Pewna œmieræ\" i \"Rzut monet¹\"." << endl<< endl;
			system("pause");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			cout << "\tPodpowiedŸ (4/10)" << endl << endl;
			cout << " Uwa¿aj gdy zaci¹gasz kredyt, którego obawiasz siê nie zdo³aæ go sp³aciæ! \n Nie wywi¹zuj¹c siê z umowy mo¿esz zgromadziæ naprawdê du¿y d³ug.." << endl<< endl;
			system("pause");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			cout << "\tPodpowiedŸ (5/10)" << endl << endl;
			cout << " Niektóre kredyty s¹ dostêpne dopiero od pewnego poziomu. \n Gdy minimalna wartoœæ kredytu jest wiêksza od maksymalnej po prostu zrezygnuj - wróæ gdy zdobêdziesz wy¿szy poziom." << endl<< endl;
			system("pause");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			cout << "\tPodpowiedŸ (6/10)" << endl << endl;
			cout << " Uwa¿aj na kupno Z³otej koperty! \n Hazard to nie jest bajka i bardzo ³atwo jest wyjœæ na stratê!" << endl<< endl;
			system("pause");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			cout << "\tPodpowiedŸ (7/10)" << endl << endl;
			cout << " Zdecyduj m¹drze kiedy zakupiæ Anio³a Stró¿a! \n Mo¿esz go kupiæ tylko raz podczas ca³ej rozgrywki!" << endl<< endl;
			system("pause");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			cout << "\tPodpowiedŸ (8/10)" << endl << endl;
			cout << " Rasa i klasa, którê zaraz wybierzesz maj¹ wp³yw na niektóre statystyki i mechanizmy gry! \n Kieruj siê zatem przy wyborze g³osem serca i w³asn¹ ciekawoœci¹!" << endl<< endl;
			system("pause");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			cout << "\tPodpowiedŸ (9/10)" << endl << endl;
			cout << " Uwa¿aj na wybieranie zbyt du¿ej iloœci przeciwników podczas polowania! \n Mo¿e to doprowadziæ do niechybnej œmierci!" << endl<< endl;
			system("pause");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			cout << "\tPodpowiedŸ (10/10)" << endl << endl;
			cout << " Œwi¹tynia to twoje ostatnie ko³o ratunkowe. \n Korzystaj wiêc z niej odpowiedzialnie, je¿eli nie chcesz psuæ sobie zabawy. \n Jest ona niedostêpna na 3. poziomie trudnoœci." << endl<< endl;
			system("pause");

			do {
				string sg;
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				cout << "Czy jesteœ gotowy rozpocz¹æ rozgrywkê i stawiæ czo³a przygodzie?" << endl << endl;
				cout << "1. Oczywiœcie! Zacznijmy ju¿!" << endl;
				cout << "2. Nie. Chcê przeczytaæ porady raz jeszcze." << endl;
				cout << "3. WyjdŸ z gry" << endl << endl;
				cin >> sg;
				if(sg == "1") {
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					cout << "Wiêc ruszajmy!" << endl << endl;
					system("pause");
					break;
				}
				if(sg == "2") {
					goto zasady;
				}
				if(sg == "3") {
					goto koniec;
				}
			} while(0==0);

			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			cout << "\"Hrrrrgh...\"" << endl << endl << endl;
			system("pause");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			cout << "\"Aaaagh...\"" << endl;
			cout << "\"Co siê sta³o?\"" << endl;
			cout << "\"Aaagh moja g³owa..\"" << endl << endl << endl;
			system("pause");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			cout << " Otwierasz oczy i budzisz siê jakby z wiecznego snu. \n Odnajdujesz siê w zupe³nie nowej, nieznanej ci nigdy wczeœniej rzeczywistoœci.. \n Twoja obola³a g³owa zdaje ci siê p³ataæ figle. \n \"Czy to nadal sen?\" - myœlisz rozgl¹daj¹c siê po otaczaj¹cej ciê puszczy. \n \"Gdzie ja jestem?...\" \n Zastanawiasz siê czy nie uderzy³eœ siê ostatnimi czasy w g³owê zbyt mocno. \n Po kilku minutach niedowierzania w to, co w³aœnie doœwiadczasz postanawiasz siê podnieœæ. \n Wstajesz i otrzepujesz siê z py³u, jednak¿e po chwili ponownie upadasz z braku si³. \n Odnajdujesz le¿¹c¹ nieopodal ciebie ma³¹ butelkê wody. \n Pijesz z niej i natychmiast po tym ze zmêczenia pogr¹¿a ciê g³êboki sen..." << endl<< endl;
			system("pause");

sandbox:
//string name, race, type;
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			cout << "Jak siê nazywasz?" << endl;
			cin >> name;
			do {
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				cout << "Jakiej jesteœ rasy?" << endl;
				cout << "1. Cz³owiek" << endl;
				cout << "2. Ork" << endl;
				cout << "3. Elf" << endl;
				cout << "4. Krasnolud" << endl;
				cout << "5. Goblin" << endl << endl;
				cin >> race;
				if(race=="1") {
					race = "Cz³owiek";
					do {
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
						cout << "Jaka jest twoja klasa?" << endl;
						cout << "1. Wojownik" << endl;
						cout << "2. Obroñca" << endl;
						cout << "3. Paladyn" << endl;
						cout << "4. Czeladnik" << endl;
						cout << "5. £owca" << endl << endl;
						cin >> type;
						if(type=="1") {
							type = "Wojownik";
							dmg = dmg + 2;
							hp = hp + 6;
							break;
						}
						if(type=="2") {
							type = "Obroñca";
							hp = hp + 12;
							break;
						}
						if(type=="3") {
							type = "Paladyn";
							exp = exp + 80;
							hp = hp + 4;
							break;
						}
						if(type=="4") {
							type = "Czeladnik";
							dmg = dmg + 2;
							gold = gold + 85;
							exp = exp + 35;
							break;
						}
						if(type=="5") {
							type = "£owca";
							dmgpotion = 10;
							dmg = dmg + 5;
							break;
						}
					} while(0==0);
					break;
				}
				if(race=="2") {
					race = "Ork";
					type = "Berserker";
					dmg = dmg+5;
					hp = hp+15;
					break;
				}
				if(race=="3") {
					race = "Elf";
					exp = exp + 30;
					hp = hp - 7;
					do {
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
						cout << "Jaka jest twoja klasa?" << endl;
						cout << "1. Buntownik" << endl;
						cout << "2. Czyœciciel" << endl;
						cout << "3. Elf wy¿szy" << endl;
						cin >> type;
						if(type=="1") {
							type = "Buntownik";
							dmg = dmg + 4;
							hp = hp + 4;
							break;
						}
						if(type=="2") {
							type = "Czyœciciel";
							dmg = dmg + 6;
							exp = exp + 50;
							break;
						}
						if(type=="3") {
							type = "Elf wy¿szy";
							dmg = dmg + 2;
							gold = gold + 75;
							break;
						}
					} while(0==0);
					break;
				}
				if(race=="4") {
					race = "Krasnolud";
					hp = hp + 8;
					dmg = dmg - 3;
					do {
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
						cout << "Jaka jest twoja klasa?" << endl;
						cout << "1. Wojownik" << endl;
						cout << "2. Obroñca" << endl;
						cout << "3. Maschinmeister" << endl;
						cin >> type;
						if(type=="1") {
							type = "Wojownik";
							dmg = dmg + 4;
							hp = hp + 4;
							break;
						}
						if(type=="2") {
							type = "Obroñca";
							hp = hp + 8;
							break;
						}
						if(type=="3") {
							type = "Maschinmeister";
							gold = gold + 25;
							dmg = dmg + 6;
							break;
						}
					} while(0==0);
					break;
				}
				if(race=="5") {
					race = "Goblin";
					type = "Chochlik";
					gold = gold + 150;
					hp = hp - 5;
					break;
				}
			} while(0==0);
			hpmax = hp;



			cout << endl << endl << endl;


			float ldmg, lhp, ldmg2, lhp2;
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			if (lvlp>0) {
				cout << "Posiadasz " << lvlp << " punktów doœwiadczenia do rozdysponowania." << endl;
				cout << "Atak: " << dmg << endl;
				cout << "Zdrowie: " << hp << "/" << hpmax << endl;
				do {
					cout << "Ile punktów chcesz dodaæ do ataku?" << endl;
					cin >> ldmg;
					if (ldmg > lvlp) {
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
						cout << "Niestety, nie posiadasz tylu punktów doœwiadczenia do rozdysponowania.." << endl;
						cout << "Posiadasz " << lvlp << " punktów doœwiadczenia do rozdysponowania." << endl;
						cout << "Atak: " << dmg << endl;
						cout << "Zdrowie: " << hp << "/" << hpmax << endl;
						continue;
					}
					if (ldmg <= lvlp) {
						cout << "PotwierdŸ iloœæ: ";
						cin	>> ldmg2;
						if (ldmg == ldmg2) {
							dmg = dmg + ldmg;
							lvlp = lvlp - ldmg;
							break;
						} else;
						{
							cout << "Iloœæ siê nie zgadza." << endl;
							continue;
						}
					}
				} while(0==0);
			}
			if (lvlp>0) {
				cout << endl << "Posiadasz " << lvlp << " punktów doœwiadczenia do rozdysponowania." << endl;
				cout << "Atak: " << dmg << endl;
				cout << "Zdrowie: " << hp << "/" << hpmax << endl;
				do {
					cout << "Ile punktów chcesz dodaæ do zdrowia?" << endl;
					cin >> lhp;
					if (lhp > lvlp) {
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
						cout << "Niestety, nie posiadasz tylu punktów doœwiadczenia do rozdysponowania.." << endl;
						cout << "Posiadasz " << lvlp << " punktów doœwiadczenia do rozdysponowania." << endl;
						cout << "Atak: " << dmg << endl;
						cout << "Zdrowie: " << hp << "/" << hpmax << endl;
						continue;
					}
					if (lhp <= lvlp) {
						cout << "PotwierdŸ iloœæ: ";
						cin	>> lhp2;
						if (lhp == lhp2) {
							hp = hp + lhp;
							hpmax = hpmax + lhp;
							lvlp = lvlp - lhp;
							break;
						} else;
						{
							cout << "Iloœæ siê nie zgadza." << endl;
							continue;
						}
					}
				} while(0==0);
			}
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			cout << "\tTwoja postaæ:" << endl;
			cout << "\t\tImiê:                 " << name << endl;
			cout << "\t\tRasa:                 " << race << endl;
			cout << "\t\tKlasa:                " << type << endl;
			cout << "\tStatystyki:             " << endl;
			cout << "\t\tAtak:                 " << dmg << endl;
			cout << "\t\tZdrowie:              " << hp << "/" << hpmax << endl;
			cout << "\t\tPoziom:               " << lvl << endl;
			cout << "\t\tDoœwiadczenie:        " << exp << "/" << expn << endl;
			cout << "\t\tPunkty doœwiadczenia: " << lvlp << endl;
			cout << "\t\tZ³oto:                " << gold << endl << endl;
			system("pause");
//koniec kreatora postaci
core:
//core gry
			do {


				if(mobkilled >= dtime1 && dtime1 != 0) {
					depositr1 = "GOTOWA";
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					cout << "LOKATA I jest gotowa!" << endl << endl;
					system("pause");
				}
				if(mobkilled >= dtime2 && dtime2 != 0) {
					depositr2 = "GOTOWA";
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					cout << "LOKATA II jest gotowa!" << endl << endl;
					system("pause");
				}
				if(mobkilled >= dtime3 && dtime3 != 0) {
					depositr3 = "GOTOWA";
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					cout << "LOKATA III jest gotowa!" << endl << endl;
					system("pause");
				}
				if(mobkilled == dtime1 - 3) {
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					cout << "Do ukoñczenia LOKATA I pozosta³o 3 przeciwników do pokonania." << endl << endl;
					system("pause");
				}
				if(mobkilled == dtime2 - 3) {
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					cout << "Do ukoñczenia LOKATA II pozosta³o 3 przeciwników do pokonania." << endl << endl;
					system("pause");
				}
				if(mobkilled == dtime3 - 3) {
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					cout << "Do ukoñczenia LOKATA III pozosta³o 3 przeciwników do pokonania." << endl << endl;
					system("pause");
				}

				float missingg, credit1, credit2, credit3;
				if(mobkilled == ctime1 - 5) {
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					cout << "Do terminu sp³aty chwilówki pozosta³o 5 przeciwników do pokonania." << endl << endl;
					if (gold >= credit1 && credit1 != 0) {
						cout << "Posiadasz wystarczaj¹co iloœæ z³ota do sp³aty kredytu. Udaj siê do sklepu jak najszybciej!" << endl << endl;
					}
					if (gold < credit1) {
						missingg = credit1 - gold;
						cout << "Brakuj¹ce z³oto: " << missingg << endl << endl;
					}
					system("pause");
				}
				if(mobkilled == ctime2 - 10) {
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					cout << "Do terminu sp³aty po¿yczki pozosta³o 10 przeciwników do pokonania." << endl << endl;
					if (gold >= credit2 && credit2 != 0) {
						cout << "Posiadasz wystarczaj¹co iloœæ z³ota do sp³aty kredytu. Udaj siê do sklepu jak najszybciej!" << endl << endl;
					}
					if (gold < credit2) {
						missingg = credit2 - gold;
						cout << "Brakuj¹ce z³oto: " << missingg << endl << endl;
					}
					system("pause");
				}
				if(mobkilled == ctime3 - 15) {
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					cout << "Do terminu sp³aty kredytu inwestycyjnego pozosta³o 15 przeciwników do pokonania." << endl << endl;
					if (gold >= credit3 && credit3 != 0) {
						cout << "Posiadasz wystarczaj¹co iloœæ z³ota do sp³aty kredytu. Udaj siê do sklepu jak najszybciej!" << endl << endl;
					}
					if (gold < credit3) {
						missingg = credit3 - gold;
						cout << "Brakuj¹ce z³oto: " << missingg << endl << endl;
					}
					system("pause");
				}
				if(ctime1 <= mobkilled && ctime1 != 0) {
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					cout << "Czas sp³aty kredytu up³yn¹³." << endl << endl;
					if(gold < credit1) {
						cout << "Nie uda³o ci siê sp³aciæ kredytu." << endl;
						cout << "Tracisz 250% jego wartoœci." << endl << endl;
						gold = gold - 2.5*credit1;
						ctime1 = 0;
					}
					if(gold >= credit1) {
						cout << "Sp³acasz kredyt ze swoich oszczêdnoœci." << endl << endl;
						gold = gold - credit1;
						creditr1 = "DOSTÊPNA";
						ctime1 = 0;
					}
					system("pause");

				}
				if(ctime2 <= mobkilled && ctime2 != 0) {
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					cout << "Czas sp³aty kredytu up³yn¹³." << endl << endl;
					if(gold < credit2) {
						cout << "Nie uda³o ci siê sp³aciæ kredytu." << endl;
						cout << "Tracisz 250% jego wartoœci." << endl << endl;
						gold = gold - 2.5*credit2;
						ctime2 = 0;
					}
					if(gold >= credit2) {
						cout << "Sp³acasz kredyt ze swoich oszczêdnoœci." << endl << endl;
						gold = gold - credit2;
						creditr2 = "DOSTÊPNA";
						ctime2 = 0;
					}
					system("pause");

				}
				if(ctime3 <= mobkilled  && ctime3 != 0) {
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					cout << "Czas sp³aty kredytu up³yn¹³." << endl << endl;
					if(gold < credit3) {
						cout << "Nie uda³o ci siê sp³aciæ kredytu." << endl;
						cout << "Tracisz 250% jego wartoœci." << endl << endl;
						gold = gold - 2.5*credit3;
						ctime3 = 0;
					}
					if(gold >= credit3) {
						cout << "Sp³acasz kredyt ze swoich oszczêdnoœci." << endl << endl;
						gold = gold - credit3;
						creditr3 = "DOSTÊPNY";
						ctime3 = 0;
					}
					system("pause");

				}
				do {
					if(exp>=expn) {
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
						cout << "Gratulacje zdoby³eœ poziom " << lvl+1 << "!" << endl;
						exp = exp - expn;
						lvl = lvl + 1;
						lvlp = lvlp + lvl + 2;
						cout << "Otrzymujesz " << lvl + 2 << " punktów doœwiadczenia." << endl << endl;
						if(difficulty=="1" || difficulty == "5") {
							expn = 100*lvl;
						}
						if(difficulty=="2") {
							expn = 1.15*100*lvl;
						}
						if(difficulty=="3") {
							expn = 1.3*100*lvl;
						}
						if(difficulty=="4") {
							expn = 100*lvl;
						}
						system("pause");
					}
				} while(exp>=expn);


				string wtd;
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				cout << "Witaj " << name << " w Avergnon!" << endl;
				cout << "Pora ruszaæ.. Przygoda czeka!" << endl << endl;
				cout << "Co planujesz?" << endl;
				cout << "1. Wyruszam w drogê" << endl;
				cout << "2. Sprawdzê swoje umiejêtnoœci" << endl;
				cout << "3. Nauczê siê czegoœ nowego" << endl;
				cout << "4. Chcia³bym coœ kupiæ" << endl;
				cout << "5. Idê na polowanie" << endl;
				cout << "6. Idê do œwi¹tyni" << endl;
				cout << "7. (Zapisz i wyjdŸ)" << endl << endl;
				cin >> wtd;

//przygoda
				if(wtd == "1") {
//quest
					if(lvl == 3 && quest < 0) {
						quest = 0;
					}
					if(lvl == 7 && quest < 1) {
						quest = 1;
					}
					if(lvl == 14 && quest < 2) {
						quest = 2;
					}
					if(lvl == 25 && quest < 3) {
						quest = 3;
					}
					if(lvl == 40 && quest < 4) {
						quest = 4;
					}


					if((lvl == 3 || lvl == 4) && quest == 0) {

						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
						cout << "Przemierzaj¹c nieokie³znane krainy nowego l¹du napotykasz przed sob¹ dziwnego starca." << endl;
						cout << "Przybyszu! Witaj w œwiecie Avergnon! - s³yszysz wypowiadane s³owa z jego ust dotkniêtych wiekiem" << endl;
q1dialogue1:
						cout << "Zastanawiasz siê sk¹d wiedzia³, ¿e jesteœ tu nowy... Jednak twój wzrok pada na pewien dziwny przyrz¹d, który dzier¿y³ w rêkach." << endl << endl;
						string dialogue;
						cout << "1. Co to takiego? (!)" << endl;
						cout << "2. <Przedstaw siê>" << endl;
						cout << "3. Jak siê tu znalaz³eœ?" << endl;
						cout << "4. <Odepchnij starca i krocz dalej œcie¿k¹> (?)" << endl;
						cout << "5. <OdejdŸ> (x)" << endl << endl;
						cin >> dialogue;
						if(dialogue == "5") {
							quest = quest+1;
							goto core;
						}
						if(dialogue == "2") {
							cout << "\n\n\n\n\n\n\n\n";
							cout << "-Witaj. Nazywam siê " << name << ", a jak ciebie zw¹?" << endl;
							cout << "-Nie pytaj o ulewê, póki pierwsza kropla nie upadnie na twoj¹ twarz podró¿niku..." << endl << endl;
							string dialogue2;
							cout << "1. S³ucham???" << endl;
							cout << "2. <Udawaj, ¿e rozumiesz>" << endl << endl;
							cin >> dialogue2;
							if(dialogue2 == "1") {
								cout << "\n\n\n\n\n\n\n\n";
								cout << "-S³ucham???" << endl;
								cout << "-¯adne drzewo nie wie, ¿e w przysz³oœci mo¿e zostaæ ksi¹¿k¹..." << endl;
								cout << "\n\n\n\n\n\n\n\n";
								cout << "<Kontynuuj..>" << endl;
								goto q1dialogue1;
							}
							if(dialogue2 == "2") {
								cout << "\n\n\n\n\n\n\n\n";
								cout << "-Tak jest mistrzu... Przepraszam za moj¹ nachalnoœæ." << endl;
								cout << "-Prêdki tygrys, to sprytny tygrys." << endl;
								cout << "-Prawda, sensei.." << endl;
								cout << "\n\n\n\n\n\n\n\n";
								cout << "<Kontynuuj..>" << endl;
								goto q1dialogue1;
							}
						}
						if(dialogue == "3") {
							cout << "\n\n\n\n\n\n\n\n";
							cout << "-Jak siê tu znalaz³eœ?" << endl;
							cout << "...";
							cout << "\n\n\n\n\n\n\n\n";
							cout << "<Kontynuuj..>" << endl;
							goto q1dialogue1;
						}
						if(dialogue == "4") {
							cout << "\n\n\n\n\n\n\n\n";
							cout << "-Z drogi starcze!!" << endl;
							cout << "-Nawet nie wiesz z kim zadzierasz.." << endl;

							string mob;
							int moblvl;
							float mobhp, mobhpmax, mobdmg, mobexp, mobg;
							float dmgdealt, dmgtaken, dmgs;
							int dmgpused;
							dmgdealt = 0;
							dmgtaken = 0;

							mob = "Agresywny starzec";
							moblvl = 3;
							mobhp = 69;
							mobhpmax = mobhp;
							mobdmg = 13;
							mobg = 30;

							cout << "\n\n\n\n\n\n\n\n";
							cout << "Napotka³eœ " << mob << " na poziomie " << moblvl << "!" << endl;
							cout << mob << " ciê atakuje!" << endl << endl;
							quest = quest + 1;
							system("pause");

							if(dmgpotion > 0) {
								dmgpotion = dmgpotion - 1;
								dmgs = dmg;
								dmg = 1.15*dmg;
								dmgpused = 1;
							}

							cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
							cout << "Statystyki:" << endl;
							cout << name << " poziom " << lvl << endl;
							cout << "Atak: " << dmg << endl;
							cout << "Zdrowie: " << hp << "/" << hpmax << endl << endl;
							cout << "Statystyki przeciwnika:" << endl;
							cout << mob << " poziom " << moblvl << endl;
							cout << "Atak: " << mobdmg << endl;
							cout << "Zdrowie: " << mobhp << "/" << mobhpmax << endl << endl;
							mobexp = 1.25*(moblvl + mobdmg + mobhp);

							do {
								mobhp = mobhp - dmg;
								dmgdealt = dmgdealt + dmg;

								hp = hp - mobdmg;
								dmgtaken = dmgtaken + mobdmg;

								system("pause");
								cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
								cout << name << " zada³ cios za " << dmg << " obra¿eñ!" << endl;
								cout << "Zdrowie przeciwnika: " << mobhp << "/" << mobhpmax << endl << endl;
								cout << "Otrzymujesz " << mobdmg << " obra¿eñ!" << endl;
								cout << "Twoje zdrowie: " << hp << "/" << hpmax << endl << endl;

							} while(hp>0 && mobhp>0);
							if (hp<=0 && gangel != 1) {
								cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\tKONIEC GRY" << endl;
								cout << "\t\t Zgin¹³eœ" << endl << endl;
								cout << "\n\n\tStatystyki: " << endl;
								cout << "\tAtak:                 " << dmg << endl;
								cout << "\tZdrowie:              " << hp << "/" << hpmax << endl;
								cout << "\tPoziom:               " << lvl << endl;
								cout << "\tDoœwiadczenie:        " << exp << "/" << expn << endl;
								cout << "\tPunkty doœwiadczenia: " << lvlp << endl;
								cout << "\tZ³oto:                " << gold << endl;
								cout << "\tPokonani przeciwnicy: " << mobkilled << endl << endl;
								dead = 1;
								system("pause");
								goto start;
							}
							if(hp<=0 && gangel == 1) {
								cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
								cout << "Zgin¹³eœ..." << endl << endl;
								cout << "Twój Anio³ Stró¿ zostaje zu¿yty. Wracasz do ¿ywych" << endl << endl;
								hp = 0.5*hpmax;
								gangel = 2;
								system("pause");
							}
							if (mobhp<=0) {
								cout << endl;
								cout << "Gratulacje!! Pokona³eœ " << mob <<"!" << endl;
								mobkilled = mobkilled + 1;
								hp = hp + (0.75*dmgtaken);
								exp = exp + mobexp;
								gold = gold + mobg;
								cout << "Otrzymujesz " << mobexp << " doœwiadczenia, " << 0.75*dmgtaken << " zdrowia oraz " << mobg << " z³ota." << endl << endl;
								if(difficulty=="1" || difficulty=="5") {
									expn = 100*lvl;
								}
								if(difficulty=="2") {
									expn = 1.15*100*lvl;
								}
								if(difficulty=="3") {
									expn = 1.3*100*lvl;
								}
								if(difficulty=="4") {
									expn = 100*lvl;
								}

								do {
									if(exp>=expn) {
										cout << "Gratulacje zdoby³eœ poziom " << lvl+1 << "!" << endl;
										exp = exp - expn;
										lvl = lvl + 1;
										lvlp = lvlp + lvl + 2;
										cout << "Otrzymujesz " << lvl + 2 << " punktów doœwiadczenia." << endl << endl;
										if(difficulty=="1" || difficulty == "5") {
											expn = 100*lvl;
										}
										if(difficulty=="2") {
											expn = 1.15*100*lvl;
										}
										if(difficulty=="3") {
											expn = 1.3*100*lvl;
										}
										if(difficulty=="4") {
											expn = 100*lvl;
										}
									}
								} while(exp>=expn);


								if(dmgpused == 1) {
									dmgpused = 0;
									dmg = dmgs;
								}

								cout << "\n\n\tStatystyki: " << endl;
								cout << "\tAtak:                 " << dmg << endl;
								cout << "\tZdrowie:              " << hp << "/" << hpmax << endl;
								cout << "\tPoziom:               " << lvl << endl;
								cout << "\tDoœwiadczenie:        " << exp << "/" << expn << endl;
								cout << "\tPunkty doœwiadczenia: " << lvlp << endl;
								cout << "\tZ³oto:                " << gold << endl;
								cout << "\tPokonani przeciwnicy: " << mobkilled << endl << endl;

								system("pause");

							}
						}
						if(dialogue == "1") {
							cout << "\n\n\n\n\n\n\n\n";
							cout << "-Co to takiego?" << endl;
							cout << "-Hmm? Co? Aaa to.. nic wielkiego." << endl;
							cout << "-Mo¿esz mi powiedzieæ co to jest?" << endl;
							cout << "-No proszê proszê, ciekawoœæ zabi³a kota.. Nie widaæ? To klepsydra." << endl;
							cout << "-Wygl¹da na wyj¹tkowo star¹." << endl;
							cout << "-Dobrze, ¿e nie przyjmuje pochlebstw, ale komplementem to nie by³o. To moja zabawka. Dosta³em j¹ gdy by³em jeszcze ma³ym brzd¹cem." << endl;
							cout << "-Przepraszam.. nie mia³em tego na myœli." << endl;
							cout << "-Echh. Nie przejmuj siê. Wszyscy tak reaguj¹." << endl;
							cout << "-Wszyscy? Kim s¹ wszyscy?" << endl;
							cout << "-Jak to kim? Nie spotka³eœ po drodzê mo¿e ¿adnego ghula czy utopca? Ni chocia¿ wiedŸmy?" << endl;
							cout << "-Co to znaczy? Umiesz rozmawiaæ z potworami?" << endl;
							cout << "-Ha. Dobre sobie. To one rozmawiaj¹ ze mn¹!" << endl;
							cout << "-Powiesz mi wreszcie kim jesteœ?" << endl;
							cout << "-Ja, jestem królem czasu i przestrzeni.. To dziêki temu maleñkiemu artefaktowi jestem w stanie podró¿owaæ przez wymiary." << endl;
							cout << "-A wiêc mo¿e wiesz co tutaj robiê?" << endl;
							cout << "-Co ty tutaj robisz? Mo¿e powinieneœ lepiej zapytaæ samego siebie, ha!" << endl;
							cout << "Wracaj¹c. Tak jestem w³adc¹ przestrzeni i jestem w stanie ci powiedzieæ, ¿e twoje wcielenia z innego œwiata nie mia³y tyle szczêœcia co ty." << endl;
							cout << "-O czym ty mówisz?" << endl;
							cout << "-Mówiê o tym, ¿e twoje inne wcielenia pozwoli³y sobie mnie zaatakowaæ jeszcze wczeœniej ni¿ ty to zrobi³eœ. Oczywiœcie z ró¿nym skutkiem.." << endl;
							cout << "Jednemu, uda³o siê na tyle, ¿e zdo³a³ mnie wywróciæ i put³uk³ moj¹ klepsydrê... ale to inna sprawa. Ty tak nie zrobisz." << endl;
							cout << "-Dlaczego mia³bym ciê w ogóle atakowaæ? Bredzisz starcze." << endl;
							cout << "-Jeszcze nie raz siê spotkamy, a ty wspomnisz moje s³owa.." << endl <<endl;
							system("pause");
							cout << "\n\n\n\n\n\n\n\n";
							cout << "Starzec odchodzi podpieraj¹c siê swoj¹ d³ug¹ lask¹ i wiod¹c potê¿n¹ brod¹ po ziemi." << endl;
							cout << "Nie zamierzasz go goniæ. Przecie¿ powiedzia³, ¿e i tak prêdzej, czy póŸniej jeszcze siê spotkacie." << endl << endl;
							system("pause");


							cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
							cout << "Gratulacje! Zadanie fabularne zakoñczone powodzeniem!" << endl;
							cout << "Otrzymujesz 250 doœwiadczenia!" << endl << endl;
							exp = exp + 250;
							quest = quest +1;
							system("pause");


						}

						goto core;
					}//koniec questa1
					if((lvl == 7 || lvl == 8) && quest == 1) {
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
						cout << "Pod¹¿aj¹c œcie¿k¹ przez krainê Avergnon napotykasz intryguj¹c¹ polanê." << endl;
						cout << "Zauwa¿asz, ¿e znajduje siê na niej kamienna studnia, do której coœ dziwnego, niezbadanego przyci¹ga twój wzrok." << endl;
						cout << "Po chwili zauwa¿asz jak¹œ zgarbion¹ postaæ, która próbuje nabraæ z niej wody." << endl << endl;
						string dialogue;
						cout << "1. PodejdŸ i zbadaj co siê tam dzieje. (!)" << endl;
						cout << "2. <OdejdŸ> (x)" << endl << endl;
						cin >> dialogue;
						if(dialogue == "2") {
							quest = quest+1;
							goto core;
						}
						if(dialogue == "1") {
							cout << "\n\n\n\n\n\n\n\n";
							cout << "-O witaj ponownie podró¿niku! Zadomowi³eœ siê ju¿ w Avergnon?" << endl;
							cout << "-Ponownie? Kim jesteœ starcze?" << endl;
							cout << "-Ech, niekiedy nawet modliszka nie jest w stanie dojrzeæ swojej ofiary..." << endl;
							cout << "Spotkaliœmy siê ju¿ ostatnio. Coœ ci œwita?" << endl;
							cout << "-Tak.. chyba ju¿ kojarzê.. Ale czy móg³byœ przypomnieæ mi kim jesteœ?" << endl;
							cout << "-Ja, jestem królem czasu i przestrzeni.. To dziêki temu maleñkiemu artefaktowi jestem w stanie podró¿owaæ przez wymiary." << endl;
							cout << "-A tak, teraz ju¿ sobie przypominam. Chyba gdzieœ ju¿ to s³ysza³em." << endl;
							cout << "-Co ciê sprowadza do mojej studni ¿ycia?" << endl;
q2dialogue1:
							cout << "-Studni ¿ycia? Sk¹d taka nazwa?" << endl;
							cout << "-Nachyl siê nad jej wod¹, a sam siê przekonasz." << endl << endl;
							string dialogue1;
							cout << "1. <Nachyl siê> (!)" << endl;
							cout << "2. Nie mo¿esz mi po prostu powiedzieæ?" << endl;
							cout << "3. <Wskocz do studni> (?)" << endl;
							cin >> dialogue1;
							if(dialogue1 == "3") {
								cout << "\n\n\n\n\n\n\n\n";
								cout << "\t\t Zgin¹³eœ" << endl << endl;
								cout << "\n\n\tStatystyki: " << endl;
								cout << "\tAtak:                 " << dmg << endl;
								cout << "\tZdrowie:              " << hp << "/" << hpmax << endl;
								cout << "\tPoziom:               " << lvl << endl;
								cout << "\tDoœwiadczenie:        " << exp << "/" << expn << endl;
								cout << "\tPunkty doœwiadczenia: " << lvlp << endl;
								cout << "\tZ³oto:                " << gold << endl;
								cout << "\tPokonani przeciwnicy: " << mobkilled << endl << endl;
								system("pause");

								cout << "\n\n\n\n\n\n\n\n";
								cout << "Studnia ¿ycia zostaje u¿yta! Wracasz do ¿ywych!" << endl << endl;
								goto studnia;

							}
							if(dialogue1 == "2") {
								cout << "\n\n\n\n\n\n\n\n";
								cout << "-Nie mo¿esz mi po prostu powiedzieæ?" << endl;
								cout << "-Nie. Sam siê przekonaj." << endl;
								cout << "\n\n\n\n\n\n\n\n";
								cout << "<Kontynuuj..>" << endl;
								goto q2dialogue1;
							}
							if(dialogue1 == "1") {
								cout << "\n\n\n\n\n\n\n\n";
								cout << "<Czujesz powiew rzeœkiego wiatru. Do twoich nozdrzy dociera wiosenna bryza.>" << endl << endl;
								if(hp == hpmax) {
									hp = hpmax;
									cout << "Leczysz siê do pe³ni si³!" << endl << endl;
								}
								if(hp + 10 != hpmax) {
									hp = hp + 10;
									cout << "Otrzymujesz 10 zdrowia!" << endl << endl;
								}
								cout << "-Snfff. O pierunie! Co to by³o?!" << endl;
								cout << "-Ha ha! Mówi³em abyœ spróbowa³!" << endl;
studnia:
								cout << "-Niez³e cudeñko, nieprawda¿?" << endl;
								cout << "-... i to jakie.." << endl;
								cout << "Co tutaj robisz?" << endl;
								cout << "-Mimo, ¿e jestem panem czasów, to jednak, jak to mówi¹, staroœæ nie radoœæ! Trzeba siê jakoœ utrzymaæ przy ¿yciu!" << endl;
								cout << "-Czyli mo¿esz umrzeæ? Co jeœli studnia wyschnie?" << endl;
								cout << "-Nic wielkiego. Ka¿de zdarzenie w naturze ma swoj¹ przyczynê, i swoje nastêpstwo. Kiedy odejdê, zast¹pi mnie ktoœ inny." << endl;
								cout << "-Wiesz ju¿ kto to bêdzie?" << endl;
								cout << "-..." << endl;
								cout << "\n\n\n\n\n\n\n\n";
								cout << "Starzec odchodzi podpieraj¹c siê swoj¹ d³ug¹ lask¹ i wiod¹c potê¿n¹ brod¹ po ziemi." << endl;
								cout << "-Zaczekaj!!" << endl;
								cout << "\n\n\n\n\n\n\n\n";
								cout << "Nie otrzymujesz ¿adnej odpowiedzi na swoje wo³ania. Nie zamierzasz go goniæ. Przeczuwasz, ¿e i tak kiedyœ jeszcze siê spotkacie.." << endl << endl;
								system("pause");


								cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
								cout << "Gratulacje! Zadanie fabularne zakoñczone powodzeniem!" << endl;
								cout << "Otrzymujesz 500 doœwiadczenia!" << endl << endl;
								exp = exp + 500;
								quest = quest +1;
								system("pause");

							}
						}

						goto core;
					}//koniec questa2
					if((lvl == 14 || lvl == 15) && quest == 2) {
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
						cout << " Idziesz drog¹ pod¹¿aj¹c za g³osem serca. \n Napotykasz drogowskaz. Tym razem jesteœ w stanie odczytaæ jego destynacje. \n Twoj¹ ciekawoœæ przykuwa rozleg³y czerwony napis \n\t KARCZMA \"ROZBÓJNIK\" \n Po kilku chwilach docierasz do karczmy. \n Szynkasz oferuje ci kufel lokalnego przysmaku. \n Ty jednak nierzadko nie znasz umiaru w piciu... \n Po kilku kolejkach rozpêta³eœ iœcie pijañsk¹ awanturê. \n Goœcie obrzucaj¹ siê kuflami, a ty z niepewn¹ g³ow¹ ci¹gle podjudzasz awanturników. \n Nagle zauwa¿asz pewnego starca. Jeden z awanturników zbli¿a siê do niego z piêœciami.." << endl;
						if (gold >= 2) {
							gold = gold - 2;
						}
						cout << "\n\n\n\n\n\n\n\n";
						cout << "<Wstawiasz siê w obronie starca>" << endl << endl;
						system("pause");

						string mob;
						int moblvl;
						float mobhp, mobhpmax, mobdmg, mobexp, mobg;
						float dmgdealt, dmgtaken, dmgs;
						int dmgpused;
						dmgdealt = 0;
						dmgtaken = 0;

						mob = "Awanturnik";
						moblvl = 14;
						mobhp = 15 + 1.1*moblvl;
						mobhpmax = mobhp;
						mobdmg = 12.5 + 1.2*moblvl ;
						mobg = moblvl * 5;

						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
						cout << "Napotka³eœ " << mob << " na poziomie " << moblvl << "!" << endl;
						cout << mob << " ciê atakuje!" << endl << endl;
						quest = quest + 1;
						system("pause");

						if(dmgpotion > 0) {
							dmgpotion = dmgpotion - 1;
							dmgs = dmg;
							dmg = 1.15*dmg;
							dmgpused = 1;
						}

						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
						cout << "Statystyki:" << endl;
						cout << name << " poziom " << lvl << endl;
						cout << "Atak: " << dmg << endl;
						cout << "Zdrowie: " << hp << "/" << hpmax << endl << endl;
						cout << "Statystyki przeciwnika:" << endl;
						cout << mob << " poziom " << moblvl << endl;
						cout << "Atak: " << mobdmg << endl;
						cout << "Zdrowie: " << mobhp << "/" << mobhpmax << endl << endl;
						mobexp = 1.25*(moblvl + mobdmg + mobhp);

						do {
							mobhp = mobhp - dmg;
							dmgdealt = dmgdealt + dmg;

							hp = hp - mobdmg;
							dmgtaken = dmgtaken + mobdmg;

							system("pause");
							cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
							cout << name << " zada³ cios za " << dmg << " obra¿eñ!" << endl;
							cout << "Zdrowie przeciwnika: " << mobhp << "/" << mobhpmax << endl << endl;
							cout << "Otrzymujesz " << mobdmg << " obra¿eñ!" << endl;
							cout << "Twoje zdrowie: " << hp << "/" << hpmax << endl << endl;

						} while(hp>0 && mobhp>0);
						if (hp<=0 && gangel != 1) {
							cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\tKONIEC GRY" << endl;
							cout << "\t\t Zgin¹³eœ" << endl << endl;
							cout << "\n\n\tStatystyki: " << endl;
							cout << "\tAtak:                 " << dmg << endl;
							cout << "\tZdrowie:              " << hp << "/" << hpmax << endl;
							cout << "\tPoziom:               " << lvl << endl;
							cout << "\tDoœwiadczenie:        " << exp << "/" << expn << endl;
							cout << "\tPunkty doœwiadczenia: " << lvlp << endl;
							cout << "\tZ³oto:                " << gold << endl;
							cout << "\tPokonani przeciwnicy: " << mobkilled << endl << endl;
							dead = 1;
							system("pause");
							goto start;
						}
						if(hp<=0 && gangel == 1) {
							cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
							cout << "Zgin¹³eœ..." << endl << endl;
							cout << "Twój Anio³ Stró¿ zostaje zu¿yty. Wracasz do ¿ywych" << endl << endl;
							hp = 0.5*hpmax;
							gangel = 2;
							system("pause");
						}
						if (mobhp<=0) {
							cout << endl;
							cout << "Gratulacje!! Pokona³eœ " << mob <<"!" << endl;
							mobkilled = mobkilled + 1;
							hp = hp + (0.75*dmgtaken);
							exp = exp + mobexp;
							gold = gold + mobg;
							cout << "Otrzymujesz " << mobexp << " doœwiadczenia, " << 0.75*dmgtaken << " zdrowia oraz " << mobg << " z³ota." << endl << endl;
							if(difficulty=="1" || difficulty=="5") {
								expn = 100*lvl;
							}
							if(difficulty=="2") {
								expn = 1.15*100*lvl;
							}
							if(difficulty=="3") {
								expn = 1.3*100*lvl;
							}
							if(difficulty=="4") {
								expn = 100*lvl;
							}

							do {
								if(exp>=expn) {
									cout << "Gratulacje zdoby³eœ poziom " << lvl+1 << "!" << endl;
									exp = exp - expn;
									lvl = lvl + 1;
									lvlp = lvlp + lvl + 2;
									cout << "Otrzymujesz " << lvl + 2 << " punktów doœwiadczenia." << endl << endl;
									if(difficulty=="1" || difficulty == "5") {
										expn = 100*lvl;
									}
									if(difficulty=="2") {
										expn = 1.15*100*lvl;
									}
									if(difficulty=="3") {
										expn = 1.3*100*lvl;
									}
									if(difficulty=="4") {
										expn = 100*lvl;
									}
								}
							} while(exp>=expn);


							if(dmgpused == 1) {
								dmgpused = 0;
								dmg = dmgs;
							}
						}
						cout << "\n\n\tStatystyki: " << endl;
						cout << "\tAtak:                 " << dmg << endl;
						cout << "\tZdrowie:              " << hp << "/" << hpmax << endl;
						cout << "\tPoziom:               " << lvl << endl;
						cout << "\tDoœwiadczenie:        " << exp << "/" << expn << endl;
						cout << "\tPunkty doœwiadczenia: " << lvlp << endl;
						cout << "\tZ³oto:                " << gold << endl;
						cout << "\tPokonani przeciwnicy: " << mobkilled << endl << endl;

						system("pause");

						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
						cout << "-Uff, to wygl¹da³o groŸnie.. Dziêkujê ci podró¿niku." << endl;
						cout << "-Kim jesteœ starcze, ¿eby siê tak nara¿aæ?!" << endl;
						cout << "Ledwo wyszed³em z tego ca³o ratuj¹c twoj¹ dupê!!" << endl;
						cout << "-Nie denerwuj siê m³odzieñcze.. Przecie¿ wiesz kim jestem.." << endl;
						cout << "Nie martw siê, przypomnê ci. Ja, jestem królem czasu i przestrzeni.. To dziêki temu maleñkiemu artefaktowi jestem w stanie podró¿owaæ przez wymiary." << endl;
						cout << "-Ach tak.. Nie raz ju¿ to s³ysza³em.." << endl;
						cout << "Przepraszam za mój gniew.. To przez te wszystkie trunki.. Za du¿o mam na g³owie.." << endl;
						cout << "-Nic nie szkodzi. Nawet najwiêksi mistrzowie kiedyœ pope³niaj¹ b³êdy." << endl;
						cout << "Choæ przeprosiny to wa¿ne i silne s³owo, to nie ty powinieneœ go u¿yæ. Ja przepraszam, ¿e nara¿am ciê na takie niebezpieczeñstwo." << endl;
						cout << "W ka¿dym razie, dziêkujê za ratunek." << endl;
						cout << "-Nie dziêkuj. To by³a dla mnie cenna lekcja. Co ciê tu sprowadza?" << endl;
						cout << "-Jak to co? Przecie¿ jesteœmy w karczmie! Myœlisz, ¿e stary to co? Nie mo¿e sobie czasem odsapn¹æ?" << endl;
						cout << "-Nie spodziewa³em siê pijañœtwa po tobie. Ale skoro ju¿ tu jesteœmy, to mo¿e kolejkê?" << endl;
						cout << "-Z przyjemnoœci¹ podró¿niku." << endl << endl;
						system("pause");
						cout << "\n\n\n\n\n\n\n\n";
						cout << "<Pstrykasz palcami na znak dla szynkarza. Przynosi on kolejkê mocnego trunku>" << endl;
						if (gold >= 2) {
							gold = gold - 2;
						}
						cout << "\n\n\n\n\n\n\n\n";
						cout << "-Do dna!" << endl;
						cout << "Ajaj!" << endl;
						cout << "\n\n\n\n\n\n\n\n";
						cout << "..." << endl << endl;
						cout << "\n\n\n\n\n\n\n\n";
						system("pause");

						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
						cout << "Gratulacje! Zadanie fabularne zakoñczone powodzeniem!" << endl;
						cout << "Otrzymujesz 1000 doœwiadczenia!" << endl << endl;
						exp = exp + 1000;
						quest = quest +1;
						system("pause");

						goto core;
					}//koniec questa3
					if((lvl == 25 || lvl == 26) && quest == 3) {
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
						cout << "-Ha ha! Kogo ja widzê!!" << endl;
						cout << "Ileœmy siê ju¿ nie widzieli przyjacielu!!" << endl;
						cout << "-S³ucham?? Kim jesteœ? Nie poznajê ciê!" << endl;
						cout << "-Ech.. Naprawdê masz problemy z pamiêci¹.." << endl;
						cout << "Ja, jestem królem czasu i przestrzeni.. To dziêki temu maleñkiemu artefaktowi jestem w stanie podró¿owaæ przez wymiary." << endl;
						cout << "Ju¿ ci œwita?" << endl;
						cout << "-Wiesz.. Tyle siê zmieni³o, ¿e moja pamiêæ ju¿ nie ta.. Nieco wydoroœla³em." << endl;
						cout << "-I te¿, nieco wypi³eœ.. Œmierdzisz rumem." << endl;
						cout << "-Snff snff. Nie wiem o czym mówisz." << endl;
						cout << "-Ju¿ ty dobrze wiesz.. Zmieni³eœ siê " << name << ". Ju¿ nie jesteœ t¹ sam¹ osob¹, w której pok³ada³em nadzieje..." << endl;
						cout << "-Bredzisz starcze. To nadal ten sam ja!" << endl;
						cout << "-Nie. To ju¿ nie ty. Zosta³ wrak cz³owieka, zatraconego w pijañstwie.." << endl;
						cout << "Zwiedzi³em setki, jak nie tysi¹ce œwiatów. Wiele równoleg³ych rzeczywistoœci, i w ani jednej nie uda³o ci siê wyjœæ na prost¹." << endl;
						cout << "Myli³em siê myœl¹æ, ¿e tym razem bêdzie inaczej. Zawiod³em siê na tobie, przyjacielu.." << endl;
						cout << "Nie.. nie jestem ju¿ twoim przyjacielem.." << endl;
						cout << "\n\n\n\n\n\n\n\n";
						cout << "<Odchodzisz poœpiesznym krokiem>" << endl << endl;
						system("pause");

						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
						cout << "Gratulacje! Zadanie fabularne zakoñczone powodzeniem!" << endl;
						cout << "Otrzymujesz 2500 doœwiadczenia!" << endl << endl;
						exp = exp + 2500;
						quest = quest +1;
						system("pause");


						goto core;
					}//koniec questa4
					if((lvl == 40 || lvl == 41) && quest == 4) {
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
						cout << "-Witaj wêdrowcze! To nasze ostatnie spotkanie.." << endl;
						cout << "Wiem, ¿e napotka³eœ mnie wiele razy, z mniejszym lub wiêkszym skutkiem wys³ucha³eœ moich lekcji." << endl;
						cout << "Mimo, ¿e twoja pamiêæ mo¿e teraz zawodziæ, mam nadziejê, ¿e wkrótce dowiesz siê kim jestem." << endl;
						cout << "Cieszê siê, ¿e nie przerywasz moich s³ów, albowiem s¹ one nadwyraz wa¿ne." << endl;
						cout << "Jesteœ ju¿ naprawdê wprawionym i doœwiadczonym wojownikiem. Wiele napotka³eœ po drodzê, aby tu dotrzeæ." << endl;
						cout << "Wiele potu, krwi i wylanych ³ez zosta³o przez ciebie przelanych, aby znaleŸæ siê tu gdzie jesteœ." << endl;
						cout << "Ja, niestety ju¿ d³ugo tu nie pobêdê. Umieram. Lecz przed œmierci¹, chce ci powiedzieæ, ¿e mimo wszystko by³eœ dobrym uczniem." << endl;
						cout << "Nauczy³em ciê wszystkiego, co by³o w mojej mocy, a teraz pragnê byœ mnie zast¹pi³." << endl;
						cout << "Proszê, weŸ t¹ klepsydrê. Uczyñ z ni¹ co uwa¿asz za s³usznê. Pamiêtaj jednak, jak¹ moc dzier¿ysz w swoich rêkach." << endl <<endl;
						cout << "Od teraz jesteœ Panem Czasu i Przestrzeni, królu..." << endl << endl;
						system("pause");

						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
						cout << "       ,]]]`                                                                                       " << endl;
						cout << "      ,@@@@^                                                                                       " << endl;
						cout << "     =@@`@@@   =@@.   =@@`  ]@@@@@@@`  =@@/@@@@@`  =@@@@@@@@  =@\\@@@@@@.  ,@@@@@@@\\  .@@/@@@@@^    " << endl;
						cout << "   ,@@` =@@.  ,@@^   @@^  /@/   ,@@^  /@@/  .@@^ @@@`  .@@^  =@@/  =@@` =@@`   =@@^ =@@@`  @@^     " << endl;
						cout << "   =@@^  =@@^   \\@\\  /@@  =@@@@@@@/   .@@@       =@@^   /@@   @@^   /@@ .@@^    =@@. /@@   =@@     " << endl;
						cout << "  ,@@@@@@@@@^   =@@,@@/   =@@.        =@@^       =@@`  /@@/  =@@^  *@@^ ,@@^   =@@^  @@^   @@@     " << endl;
						cout << "  @@^    .@@^   *@@@@`     \\@@@@@@@   /@@         @@@@@@@@^  @@@   =@@   ,@@@@@@@.  =@@   =@@^     " << endl;
						cout << "                                                       /@@                                         " << endl;
						cout << "                                                 ,@@@@@@/                                          " << endl;
						cout << "\n\n\n\n\n\n\n\n";
						cout << "Gratulacje! W³aœnie ukoñczy³eœ Avergnon!!" << endl << endl;
						cout << "Wielkie \"DZIÊKUJEMY\" sk³adamy na twoje rêcê za dotrwanie do tego momentu!" << endl;
						cout << "Razem ca³ym zespo³em, mamy nadziejê, ¿e doceni³eœ nasz¹ pracê, a rozgrywka ci siê podoba³a!" << endl;
						cout << "Gratulujemy wytrwa³oœci!" << endl << endl;
						cout << "\t Dziêkujemy za zainteresowanie nasz¹ produkcj¹ <3" << endl << endl;
						cout << "Autorzy:" << endl;
						int credits;
						credits = (rand() % 6 + 1);
						if(credits == 1) {
							cout << "Dawid Pawlik" << endl;
							cout << "Jakub Wójcik" << endl;
							cout << "Karolina Borowiec" << endl;
						}
						if(credits == 2) {
							cout << "Dawid Pawlik" << endl;
							cout << "Karolina Borowiec" << endl;
							cout << "Jakub Wójcik" << endl;
						}
						if(credits == 3) {
							cout << "Jakub Wójcik" << endl;
							cout << "Dawid Pawlik" << endl;
							cout << "Karolina Borowiec" << endl;
						}
						if(credits == 4) {
							cout << "Jakub Wójcik" << endl;
							cout << "Karolina Borowiec" << endl;
							cout << "Dawid Pawlik" << endl;
						}
						if(credits == 5) {
							cout << "Karolina Borowiec" << endl;
							cout << "Dawid Pawlik" << endl;
							cout << "Jakub Wójcik" << endl;
						}
						if(credits == 6) {
							cout << "Karolina Borowiec" << endl;
							cout << "Jakub Wójcik" << endl;
							cout << "Dawid Pawlik" << endl;
						}
						cout << endl;
						system("pause");

						string end;
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
						cout << "Mo¿esz dalej kontynuowaæ przygodê w Avergnon mimo zakoñczenia linii fabularnej!" << endl;
						cout << "1. Kontynuuj" << endl;
						cout << "2. Wyjœcie" << endl << endl;
						cin >> end;
						if(end == "2") {
							goto zapisywanie;
						}
						if(end == "1") {
							cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
							cout << "Gratulacje! Zadanie fabularne zakoñczone powodzeniem!" << endl;
							cout << "Otrzymujesz 15000 doœwiadczenia i 5000 z³ota!" << endl << endl;
							exp = exp + 15000;
							gold = gold + 5000;
							quest = quest +1;
							system("pause");
						}

						goto core;
					}//koniec questline (cz³owiek)

































journey:

					int journey = (rand() % 90 + 1);

					if (journey >= 1 && journey <= 65) {

//walka

//losowanie lokacji

						int loc = (rand() % 100 + 1);
						string location;

						string mob;
						int moblvl, intmlr, moba;
						float mobhp, mobhpmax, mobdmg, mobexp, mobg, mlr;
						mlr = round(lvl+0.35*lvl);
						intmlr = mlr;
						moblvl = (rand() % (intmlr) + 1);

						if (loc >= 1 && loc <= 20) {

//las
							location = " Przedzierasz siê w g³¹b lasu. \n Wszêdzie wokó³ otacza ciê dzika przyroda. \n Do twoich uszu docieraj¹ dŸwiêki œwiergotania ptaków. \n Chrust z ka¿dym krokiem wydaje coraz g³oœniejsze trzaski. \n Nagle przed sob¹ dostrzegasz coœ dziwnego...";

							int forest = (rand() % 3 + 1);
							if(forest == 1) {
								mob = "Wataha wilków";
								moba = (rand() % 7 + 3);
								mobhp = 7 + 0.5*moblvl * moba;
								mobhpmax = mobhp;
								mobdmg = 3 + 0.3*moblvl * moba;
								mobg = moblvl * 5;
							}
							if(forest == 2) {
								mob = "NiedŸwiedŸ";
								mobhp = 30 + 0.9*moblvl;
								mobhpmax = mobhp;
								mobdmg = 6 + 0.5*moblvl;
								mobg = moblvl * 5;
							}
							if(forest == 3) {
								mob = "Rozwœcieczony knur";
								mobhp = (12 + 0.8*moblvl);
								mobhpmax = mobhp;
								mobdmg = 4.5 + 1.15*moblvl;
								mobg = moblvl * 5;
							}

						}
						if (loc >= 21 && loc <= 25) {

//lochy
							location = " Przed sob¹ widzisz tajemniczy otwór w ziemi. \n Zagl¹dasz do niego, po czym twemu wzrokowi ukazuje siê stara drabina. \n Schodzisz po niej w g³¹b przepaœci, jak antylopa w paszcze lwa. \n Po zejœciu z drabiny dostrzegasz przed sob¹ metalowe wiêzienne drzwi. Wygl¹daj¹ na otwarte...";

							int dungeon = (rand() % 3 + 1);
							if(dungeon == 1) {
								mob = "Grupa bandytów";
								moba = 3;
								mobhp = 8 + 1.1*moblvl * moba;
								mobhpmax = mobhp;
								mobdmg = 10 + 0.35*moblvl * moba;
								mobg = moblvl * 5 + moblvl * moba;
							}
							if(dungeon == 2) {
								mob = "Chmara nietoperzy";
								moba = (rand() % 8 + 6);
								mobhp = 3 + 0.25*moblvl * moba;
								mobhpmax = mobhp;
								mobdmg = 2 + 0.2*moblvl * moba ;
								mobg = moblvl * 5;
							}
							if(dungeon == 3) {
								mob = "Golem stra¿niczy";
								mobhp = 70 + 3*moblvl;
								mobhpmax = mobhp;
								mobdmg = 4 + 0.45*moblvl ;
								mobg = moblvl * 10;
							}

						}
						if (loc >= 26 && loc <= 39) {

//wieœ
							location = " Przemierzaj¹c poln¹ drog¹ napotykasz drogowskaz. \n Nie jesteœ w stanie odczytaæ napisu... Wydaje siê byæ zapisany w nieznanym ci jêzyku. \n Jednak ze wzglêdu na swoj¹ piekieln¹ ciekawoœæ pod¹¿asz za nim. \n Po kilkuset krokach docierasz do wsi. \n Pocz¹tkowo wydaje ci siê opuszczona, ale czy na pewno?";

							int village = (rand() % 4 + 1);
							if(village == 1) {
								mob = "Grupa bandytów";
								moba = (rand() % 2 + 2);
								mobhp = 8 + 1.1*moblvl * moba;
								mobhpmax = mobhp;
								mobdmg = 8 + 0.3*moblvl * moba;
								mobg = moblvl * 5 + moblvl * moba;
							}
							if(village == 2) {
								mob = "Grupa ch³opów";
								moba = (rand() % 6 + 2);
								mobhp = 8 + 0.9*moblvl * moba;
								mobhpmax = mobhp;
								mobdmg = 4 + 0.3*moblvl * moba;
								mobg = moblvl * 5 + moba;
							}
							if(village == 3) {
								mob = "Dzikie psy";
								moba = (rand() % 10 + 3);
								mobhp = 5 + 0.3*moblvl * moba;
								mobhpmax = mobhp;
								mobdmg = 2 + 0.3*moblvl * moba ;
								mobg = moblvl * 5;
							}
							if(village == 4) {
								mob = "Stado Ghuli";
								moba = (rand() % 5 + 2);
								mobhp = 9 + 0.7*moblvl * moba;
								mobhpmax = mobhp;
								mobdmg = 4 + 0.55*moblvl * moba;
								mobg = moblvl * 5;
							}

						}
						if (loc >= 40 && loc <= 49) {

//obóz bandytów
							location = " Przemierzaj¹c tereny tej dzikiej krainy s³yszysz gdzieœ nieopodal g³osy. \n Wydaje siê, ¿e to g³osy ludzkie, jednak¿e nie jesteœ w stanie nic zrozumieæ. \n Mo¿liwe, ¿e wykrzykuje je ktoœ w nieznanym ci jêzyku. \n Idziesz jednak za ich œladem, by sprawdziæ co siê dzieje. \n Po chwili wpadasz w sid³a... \n Zosta³eœ schwytany przez zgrajê bandytów!";
							hp = hp - 5;

							mob = "Grupa bandytów";
							moba = (rand() % 3 + 3);
							mobhp = 8 + 1.1*moblvl * moba;
							mobhpmax = mobhp;
							mobdmg = 10 + 0.3*moblvl * moba;
							mobg = moblvl * 5 + moblvl * moba;

						}
						if (loc >= 49 && loc <= 50) {

//polana
							location = " Przemierzaj¹c chaszcze, lasy i moczary padasz z wyciêczenia.. \n Chcia³byœ znaleŸæ jak¹œ Oazê w gêstwinie, która ciê otacza. \n Nagle twym ocz¹ ukazuje siê œwiat³o dzienne. \n Promyki s³oñca g³adz¹ twoj¹ oblan¹ potem, wycieñczon¹ twarz. \n Docierasz na rozleg³¹ polanê przy dzikim strumyku. \n G³adka, wolnorosn¹ca trawa przyjemnie ³askocze twoje poranione stopy. \n Czy w takim raju mo¿e czychaæ niebezpieczeñstwo?";
							if (hp <= hpmax - 3) {
								hp = hp + 3;
							}

							mob = "Mysz polna";
							mobhp = 5 + 0.6*moblvl;
							mobhpmax = mobhp;
							mobdmg = 1;
							mobg = moblvl;

						}
						if (loc >= 51 && loc <= 60) {

//jaskinia
							location = " Przemierasz klifowe wybrze¿e w poszukiwaniu skarbów. \n Jednak¿e twoim oczom ukazuje siê wielka jama w skale. \n Nie by³byœ sob¹ jakbyœ tam nie wlaz³.. \n Po chwili znajdujesz siê w jaskini. \n Szczêœcie, ¿e posiadasz pochodnie..";

							int cave = (rand() % 3 + 1);
							if(cave == 1) {
								mob = "Chmara nietoperzy";
								moba = (rand() % 6 + 8);
								mobhp = 3 + 0.25*moblvl * moba;
								mobhpmax = mobhp;
								mobdmg = 2 + 0.2*moblvl * moba ;
								mobg = moblvl * 5;
							}
							if(cave == 2) {
								mob = "NiedŸwiedŸ";
								mobhp = 30 + 0.9*moblvl;
								mobhpmax = mobhp;
								mobdmg = 6 + 0.5*moblvl;
								mobg = moblvl * 5;
							}
							if(cave == 3) {
								mob = "Rój Arachnoidów";
								moba = (rand() % 6 + 3);
								mobhp = 6 + 0.65*moblvl * moba;
								mobhpmax = mobhp;
								mobdmg = 3 + 1.3*moblvl * moba ;
								mobg = moblvl * 5;
							}

						}
						if (loc >= 61 && loc <= 75) {

//chata w lesie
							location = " Przemierzaj¹c las twoim oczom ukazuje siê zgrabna chatka. \n Wydaje siê byæ doœæ zaniedban¹. Dochodz¹ z niej jednak intryguj¹ce ciê dŸwiêki. \n Jako doœwiadczony ³owca przygód szybko orientujesz siê co siê dzieje.. \n Ju¿ wiesz, ¿e czeka ciê \"leczenie\" likantropii czystym srebrem.";

							mob = "Wilko³ak";
							mobhp = 15 + 1.9*moblvl;
							mobhpmax = mobhp;
							mobdmg = 8 + 0.7*moblvl ;
							mobg = moblvl * 5;
						}
						if (loc >= 76 && loc <= 90) {

//bagno
							location = " Cholerne moczary... \n Jesteœ ca³y pokryty b³otem i z wielk¹ trudnoœci¹ przedzierasz siê przez podtopione tereny bagna. \n Musisz jednak przeæ do przodu. W koñcu nie chcemy by nas tu noc zasta³a. \n Niestety uderzasz siê o coœ w nogê.. \n Zerkasz pod wodê by obejrzeæ co stanowi³o dla ciebie tê przeszkodê.. \n\n\t ODNAJDUJESZ SKRZYNKÊ \n\n Po chwili jednak twój wzrok kieruje siê na coœ innego...";
							hp = hp - 0.25;
							gold = gold + 5;

							int swamp = (rand() % 4 + 1);
							if(swamp == 1) {
								mob = "WiedŸma";
								mobhp = (13 + 1.13*moblvl);
								mobhpmax = mobhp;
								mobdmg = 6 + 0.66*moblvl ;
								mobg = moblvl * 6.66;
							}
							if(swamp == 2) {
								mob = "Grupa ch³opów";
								moba = (rand() % 6 + 2);
								mobhp = 8 + 0.9*moblvl * moba;
								mobhpmax = mobhp;
								mobdmg = 4 + 0.4*moblvl * moba;
								mobg = moblvl * 5 + moba;
							}
							if(swamp == 3) {
								mob = "Ropuch";
								mobhp = 9.5 + 1.25*moblvl;
								mobhpmax = mobhp;
								mobdmg = 3 + 0.95*moblvl;
								mobg = moblvl * 5;
							}
							if(swamp == 4) {
								mob = "Stado Utopców";
								moba = (rand() % 5 + 2);
								mobhp = 9 + moblvl * moba;
								mobhpmax = mobhp;
								mobdmg = 6 + 0.4*moblvl * moba;
								mobg = moblvl * 5;
							}

						}
						if (loc >= 91 && loc <= 92) {
//karczma
							location = " Idziesz drog¹ pod¹¿aj¹c za g³osem serca. \n Napotykasz drogowskaz. Tym razem jesteœ w stanie odczytaæ jego destynacje. \n Twoj¹ ciekawoœæ przykuwa rozleg³y czerwony napis \n\t KARCZMA \"ROZBÓJNIK\" \n Po kilku chwilach docierasz do karczmy. \n Szynkasz oferuje ci kufel lokalnego przysmaku. \n Ty jednak nierzadko nie znasz umiaru w piciu... \n Po kilku kolejkach rozpêta³eœ iœcie pijañsk¹ awanturê. \n Goœcie obrzucaj¹ siê kuflami, a ty z niepewn¹ g³ow¹ ci¹gle podjudzasz awanturników. \n Nagle jeden zbli¿a siê do ciebie z piêœciami..";
							if (gold >= 2) {
								gold = gold - 2;
							}
							dmg = dmg - 0.5;

							mob = "Awanturnik";
							mobhp = 15 + 1.1*moblvl;
							mobhpmax = mobhp;
							mobdmg = 12.5 + 1.2*moblvl ;
							mobg = moblvl * 5;

						}
						if (loc >= 93 && loc <= 100) {

//twierdza
							location = " Na swoim wêdrownym szlaku napotykasz ruiny przydro¿nej warowni. \n Zamierzasz rozejrzeæ siê po nich w poszukiwaniu ³akomych k¹sków w postaci niema³ej iloœci z³ota w skarbcach. \n Po wielogodzinnych przeszukiwaniach wapiennych murów twierdzy, piwnic pokrytych gêst¹ sieci¹ pajêczyn, jak i kunsztownych pokoi, które niestety ktoœ z³upi³ przed tob¹ wydaje ci siê ¿e nic ju¿ nie znajdziesz. \n A jednak...";

							mob = "Golem stra¿niczy";
							mobhp = 70 + 3*moblvl;
							mobhpmax = mobhp;
							mobdmg = 4 + 0.45*moblvl ;
							mobg = moblvl * 10;

						}



						float pexp, dmgdealt, dmgtaken, dmgs;
						int dmgpused;
						dmgdealt = 0;
						dmgtaken = 0;
						pexp = 0.85*lvl;
						do {
							string wyborwalka;
							cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
							cout << location << endl << endl;
							cout << "Napotka³eœ " << mob << " na poziomie " << moblvl << "!" << endl;
							cout << mob << " ciê atakuje!" << endl << endl;


							float d;
							string wchance;
							d = hp/mobdmg - mobhp/dmg;
							if(d>=3) {
								wchance = "Pewne zwyciêstwo!";
							}
							if(d>1 && d < 3) {
								wchance = "Lekka przewaga";
							}
							if(d >= -1 && d <= 1) {
								wchance = "\"Rzut monet¹\"";
							}
							if(d<-1) {
								wchance = "Pewna œmieræ";
							}
							cout << "Szansê na wygran¹: " << wchance << endl << endl;

							cout << "Co robisz?" << endl;
							cout << "1. Walczê!!!" << endl;
							cout << "2. Uciekam.. (Tracisz " << pexp << "% maksymalnego doœwiadczenia)" << endl << endl;
							cin >> wyborwalka;
							cout << endl;
							if (wyborwalka == "1") {
								if(dmgpotion > 0) {
									dmgpotion = dmgpotion - 1;
									dmgs = dmg;
									dmg = 1.15*dmg;
									dmgpused = 1;
								}

								cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
								cout << "Statystyki:" << endl;
								cout << name << " poziom " << lvl << endl;
								cout << "Atak: " << dmg << endl;
								cout << "Zdrowie: " << hp << "/" << hpmax << endl << endl;
								cout << "Statystyki przeciwnika:" << endl;
								cout << mob << " poziom " << moblvl << endl;
								cout << "Atak: " << mobdmg << endl;
								cout << "Zdrowie: " << mobhp << "/" << mobhpmax << endl << endl;
								mobexp = 1.25*(moblvl + mobdmg + mobhp);

								do {
									mobhp = mobhp - dmg;
									dmgdealt = dmgdealt + dmg;

									hp = hp - mobdmg;
									dmgtaken = dmgtaken + mobdmg;

									system("pause");
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
									cout << name << " zada³ cios za " << dmg << " obra¿eñ!" << endl;
									cout << "Zdrowie przeciwnika: " << mobhp << "/" << mobhpmax << endl << endl;
									cout << "Otrzymujesz " << mobdmg << " obra¿eñ!" << endl;
									cout << "Twoje zdrowie: " << hp << "/" << hpmax << endl << endl;


								} while(hp>0 && mobhp>0);

								if (hp<=0 && gangel != 1) {
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\tKONIEC GRY" << endl;
									cout << "\t\t Zgin¹³eœ" << endl << endl;
									cout << "\n\n\tStatystyki: " << endl;
									cout << "\tAtak:                 " << dmg << endl;
									cout << "\tZdrowie:              " << hp << "/" << hpmax << endl;
									cout << "\tPoziom:               " << lvl << endl;
									cout << "\tDoœwiadczenie:        " << exp << "/" << expn << endl;
									cout << "\tPunkty doœwiadczenia: " << lvlp << endl;
									cout << "\tZ³oto:                " << gold << endl;
									cout << "\tPokonani przeciwnicy: " << mobkilled << endl << endl;
									dead = 1;
									system("pause");
									goto start;
								}
								if(hp<=0 && gangel == 1) {
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
									cout << "Zgin¹³eœ..." << endl << endl;
									cout << "Twój Anio³ Stró¿ zostaje zu¿yty. Wracasz do ¿ywych" << endl << endl;
									hp = 0.5*hpmax;
									gangel = 2;
									system("pause");
								}
								if (mobhp<=0) {
									cout << endl;
									cout << "Gratulacje!! Pokona³eœ " << mob <<"!" << endl;
									mobkilled = mobkilled + 1;
									hp = hp + (0.75*dmgtaken);
									exp = exp + mobexp;
									gold = gold + mobg;
									cout << "Otrzymujesz " << mobexp << " doœwiadczenia, " << 0.75*dmgtaken << " zdrowia oraz " << mobg << " z³ota." << endl << endl;
									if(difficulty=="1" || difficulty=="5") {
										expn = 100*lvl;
									}
									if(difficulty=="2") {
										expn = 1.15*100*lvl;
									}
									if(difficulty=="3") {
										expn = 1.3*100*lvl;
									}
									if(difficulty=="4") {
										expn = 100*lvl;
									}
									break;
								}

							};
							if (wyborwalka == "2") {
								exp = exp - pexp/100*expn;
								cout << "Tracisz " << pexp/100*expn << " doœwiadczenia.." << endl;
								break;
							}
						} while (hp>0);

//levelowanie
						do {
							if(exp>=expn) {
								cout << "Gratulacje zdoby³eœ poziom " << lvl+1 << "!" << endl;
								exp = exp - expn;
								lvl = lvl + 1;
								lvlp = lvlp + lvl + 2;
								cout << "Otrzymujesz " << lvl + 2 << " punktów doœwiadczenia." << endl << endl;
								if(difficulty=="1" || difficulty == "5") {
									expn = 100*lvl;
								}
								if(difficulty=="2") {
									expn = 1.15*100*lvl;
								}
								if(difficulty=="3") {
									expn = 1.3*100*lvl;
								}
								if(difficulty=="4") {
									expn = 100*lvl;
								}
							}
						} while(exp>=expn);

						if(dmgpused == 1) {
							dmg = dmgs;
							dmgpused = 0;
						}



						cout << "\n\n\tStatystyki: " << endl;
						cout << "\tAtak:                 " << dmg << endl;
						cout << "\tZdrowie:              " << hp << "/" << hpmax << endl;
						cout << "\tPoziom:               " << lvl << endl;
						cout << "\tDoœwiadczenie:        " << exp << "/" << expn << endl;
						cout << "\tPunkty doœwiadczenia: " << lvlp << endl;
						cout << "\tZ³oto:                " << gold << endl;
						cout << "\tPokonani przeciwnicy: " << mobkilled << endl << endl;

						system("pause");

					}
					if (journey >= 66 && journey <= 90) {

//skarb

						int tr = (rand() % 100 + 1);
						string treasure, trc;
						float trv;

						if (tr >= 1 && tr <= 20) {

							treasure = "Skrzynia";
							int chest = (rand() % (5*lvl) + 20 );
							gold = gold + chest;
							trv = chest;
							trc = "z³ota";

						}
						if (tr >= 21 && tr <= 40) {

							treasure = "Tajemnicza butelka";
							int bottle = (rand() % (10*lvl) + 40 );
							exp = exp + bottle;
							trv = bottle;
							trc = "doœwiadczenia";

						}
						if (tr >= 41 && tr <= 60) {

							treasure = "Mikstura zdrowia";
							if (hp+10<=hpmax || hp > hpmax) {
								hp = hp + 10;
							} else {
								hp = hpmax;
							}
							trv = 10;
							trc = "zdrowia";

						}
						if (tr >= 61 && tr <= 80) {

							treasure = "Sztylet";
							int dagger = (rand() % lvl + 1 );
							dmg = dmg + dagger;
							trv = dagger;
							trc = "dodatkowego ataku";

						}
						if (tr >= 81 && tr <= 100) {

							treasure = "Pancerz";
							int armor = (rand() % (3*lvl) + 1 );
							hp = hp + armor;
							hpmax = hpmax + armor;
							trv = armor;
							trc = "dodatkowego zdrowia";

						}

						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
						cout << "Gratulacje odnalaz³eœ " << treasure << "!" << endl;
						cout << "Znaleziony przedmiot da³ ci " << trv << " " << trc << "." << endl << endl;
						system("pause");

					}


				}

//statystyki
				if(wtd == "2") {
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					cout << "\tTwoja postaæ:" << endl;
					cout << "\t\tImiê:                 " << name << endl;
					cout << "\t\tRasa:                 " << race << endl;
					cout << "\t\tKlasa:                " << type << endl;
					cout << "\tStatystyki:             " << endl;
					cout << "\t\tAtak:                 " << dmg << endl;
					cout << "\t\tZdrowie:              " << hp << "/" << hpmax << endl;
					cout << "\t\tPoziom:               " << lvl << endl;
					cout << "\t\tDoœwiadczenie:        " << exp << "/" << expn << endl;
					cout << "\t\tPunkty doœwiadczenia: " << lvlp << endl;
					cout << "\t\tZ³oto:                " << gold << endl;
					cout << "\t\tPokonani przeciwnicy: " << mobkilled << endl << endl;
					system("pause");
				}


//rozdawanie lvlp
				if(wtd == "3") {
					float ldmg, lhp, ldmg2, lhp2;
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					if (lvlp>0) {
						cout << "Posiadasz " << lvlp << " punktów doœwiadczenia do rozdysponowania." << endl;
						cout << "Atak: " << dmg << endl;
						cout << "Zdrowie: " << hp << "/" << hpmax << endl;
						do {
							cout << "Ile punktów chcesz dodaæ do ataku?" << endl;
							cin >> ldmg;
							if (ldmg > lvlp) {
								cout << "Niestety, nie posiadasz tylu punktów doœwiadczenia do rozdysponowania.." << endl;
								cout << "Posiadasz " << lvlp << " punktów doœwiadczenia do rozdysponowania." << endl;
								cout << "Atak: " << dmg << endl;
								cout << "Zdrowie: " << hp << "/" << hpmax << endl;
								continue;
							}
							if (ldmg <= lvlp) {
								cout << "PotwierdŸ iloœæ: ";
								cin	>> ldmg2;
								if (ldmg == ldmg2) {
									dmg = dmg + ldmg;
									lvlp = lvlp - ldmg;
									break;
								} else;
								{
									cout << "Iloœæ siê nie zgadza." << endl;
									continue;
								}
							}
						} while(0==0);
					}
					if (lvlp>0) {
						cout << endl << "Posiadasz " << lvlp << " punktów doœwiadczenia do rozdysponowania." << endl;
						cout << "Atak: " << dmg << endl;
						cout << "Zdrowie: " << hp << "/" << hpmax << endl;
						do {
							cout << "Ile punktów chcesz dodaæ do zdrowia?" << endl;
							cin >> lhp;
							if (lhp > lvlp) {
								cout << "Niestety, nie posiadasz tylu punktów doœwiadczenia do rozdysponowania.." << endl;
								cout << "Posiadasz " << lvlp << " punktów doœwiadczenia do rozdysponowania." << endl;
								cout << "Atak: " << dmg << endl;
								cout << "Zdrowie: " << hp << "/" << hpmax << endl;
								continue;
							}
							if (lhp <= lvlp) {
								cout << "PotwierdŸ iloœæ: ";
								cin	>> lhp2;
								if (lhp == lhp2) {
									hp = hp + lhp;
									hpmax = hpmax + lhp;
									lvlp = lvlp - lhp;
									break;
								} else;
								{
									cout << "Iloœæ siê nie zgadza." << endl;
									continue;
								}
							}
						} while(0==0);
					}
				}

//sklep
				if(wtd == "4") {

					//sklep do zrobienia

					string shop;
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					cout << "Witaj w naszych skromnych progach!" << endl;
					cout << "Czego ci potrzeba?" << endl << endl;
					cout << "1. Sklep" << endl;
					cout << "2. Finanse" << endl;
					cout << "3. Wróæ do menu" << endl << endl;
					cin >> shop;

					if (shop == "1") {

//sklep
						string shopc, item, itemc;
						float itemp;
						do {

							do {
								if(exp>=expn) {
									cout << "Gratulacje zdoby³eœ poziom " << lvl+1 << "!" << endl;
									exp = exp - expn;
									lvl = lvl + 1;
									lvlp = lvlp + lvl + 2;
									cout << "Otrzymujesz " << lvl + 2 << " punktów doœwiadczenia." << endl << endl;
									if(difficulty=="1" || difficulty == "5") {
										expn = 100*lvl;
									}
									if(difficulty=="2") {
										expn = 1.15*100*lvl;
									}
									if(difficulty=="3") {
										expn = 1.3*100*lvl;
									}
									if(difficulty=="4") {
										expn = 100*lvl;
									}
									system("pause");
								}
							} while(exp>=expn);

							cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
							cout << "SKLEP: \t\t\t\t  Z£OTO: " << gold <<  endl << endl;
							cout << "0. \tWróæ do menu" << endl << endl << endl;
							cout << "1. \tMikstura zdrowia      --- 20 sztuk z³ota" << endl;
							cout << "\t   Odnawia 3 punkty brakuj¹cego zdrowia" << endl << endl;
							cout << "2. \tMikstura ¿ycia        --- 50 sztuk z³ota" << endl;
							cout << "\t   Odnawia 2% maksymalnego zdrowia" << endl << endl;
							cout << "3. \tNektar odnowy         --- 600 sztuk z³ota" << endl;
							cout << "\t   Odnawia 50% brakuj¹cego zdrowia" << endl << endl;
							cout << "4. \tNapar mocy            --- 120 sztuk z³ota" << endl;
							cout << "\t   Dodaje 5% ataku (minimum 3 ataku)" << endl << endl;
							cout << "5. \tEliksir zdolnoœci     --- 580 sztuk z³ota" << endl;
							cout << "\t   Dodaje punkty doœwiadczenia w zale¿noœci od poziomu postaci" << endl << endl;
							cout << "6. \tKsiêga umiejêtnoœci   --- 25 sztuk z³ota" << endl;
							cout << "\t   Dodaje 1 punkt doœwiadczenia"  << endl << endl;
							cout << "7. \tKsi¹¿ka podró¿nika    --- 70 sztuk z³ota" << endl;
							cout << "\t   Dodaje 25% maksymalnego doœwiadczenia (maksimum 700)"  << endl << endl;
							cout << "8. \tZ³ota koperta         --- 150 sztuk z³ota" << endl;
							cout << "\t   Zawiera od 50 do 300 sztuk z³ota"  << endl << endl;
							cout << "9. \tEliksir walecznoœci   --- 150 sztuk z³ota" << endl;
							cout << "\t   Zwiêksza atak o 15% na nastêpne 10 walk"  << endl << endl;
							cout << "10.\tEliksir wytrzyma³oœci --- 420 sztuk z³ota" << endl;
							cout << "\t   Zwiêksza zdrowie o 10% (mo¿e przekroczyæ limit zdrowia)"  << endl << endl;
							cout << "11.\tAnio³ Stró¿           --- 1500 sztuk z³ota" << endl;
							cout << "\t   Po otrzymaniu letalnych obra¿eñ leczysz siê do 50% maksymalnego zdrowia"  << endl << endl;
							cin >> shopc;
							if(shopc == "0") {
								break;
							}
							if(shopc == "1") {
								item = "Mikstura zdrowia";
								itemp = 20;
								if(gold < itemp) {
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
									cout << "Nie posiadasz wystarczaj¹cej iloœci z³ota" << endl;
									system("pause");
								} else {
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
									cout << "PotwierdŸ zakup" << endl;
									cout << "Przedmiot: " << item <<"\tCena: " << itemp << endl << endl;
									cout << "1. PotwierdŸ" << endl;
									cout << "2. Anuluj" << endl;
									cin >> itemc;
									if(itemc == "1") {
										gold = gold - itemp;
										if(hp <= hpmax - 3 || hp > hpmax) {
											hp = hp + 3;
										} else {
											hp = hpmax;
										}
									}
								}
							}
							if(shopc == "2") {
								item = "Mikstura ¿ycia";
								itemp = 50;
								if(gold < itemp) {
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
									cout << "Nie posiadasz wystarczaj¹cej iloœci z³ota" << endl;
									system("pause");
								} else {
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
									cout << "PotwierdŸ zakup" << endl;
									cout << "Przedmiot: " << item <<"\tCena: " << itemp << endl << endl;
									cout << "1. PotwierdŸ" << endl;
									cout << "2. Anuluj" << endl;
									cin >> itemc;
									if(itemc == "1") {
										gold = gold - itemp;
										if(hp <= 0.98*hpmax || hp > hpmax) {
											hp = hp + 0.02*hpmax;
										} else {
											hp = hpmax;
										}
									}
								}
							}
							if(shopc == "3") {
								item = "Nektar odnowy";
								itemp = 600;
								if(hp > hpmax) {
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
									cout << "Nie mo¿esz zakupiæ Nektaru odnowy bêd¹c pod wyp³ywem Eliksiru wytrzyma³oœci." << endl << endl;
									system("pause");
								} else {
									if(gold < itemp) {
										cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
										cout << "Nie posiadasz wystarczaj¹cej iloœci z³ota" << endl;
										system("pause");
									} else {
										cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
										cout << "PotwierdŸ zakup" << endl;
										cout << "Przedmiot: " << item <<"\tCena: " << itemp << endl << endl;
										cout << "1. PotwierdŸ" << endl;
										cout << "2. Anuluj" << endl;
										cin >> itemc;
										if(itemc == "1") {
											gold = gold - itemp;
											hp = hp + 0.5*(hpmax-hp);
										}
									}
								}
							}
							if(shopc == "4") {
								item = "Napar mocy";
								itemp = 120;
								if(gold < itemp) {
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
									cout << "Nie posiadasz wystarczaj¹cej iloœci z³ota" << endl;
									system("pause");
								} else {
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
									cout << "PotwierdŸ zakup" << endl;
									cout << "Przedmiot: " << item <<"\tCena: " << itemp << endl << endl;
									cout << "1. PotwierdŸ" << endl;
									cout << "2. Anuluj" << endl;
									cin >> itemc;
									if(itemc == "1") {
										gold = gold - itemp;
										if(0.05*dmg >= 3) {
											dmg = 1.05*dmg;
										} else {
											dmg = dmg + 3;
										}
									}
								}
							}
							if(shopc == "5") {
								item = "Eliksir zdolnoœci";
								itemp = 580;
								if(gold < itemp) {
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
									cout << "Nie posiadasz wystarczaj¹cej iloœci z³ota" << endl;
									system("pause");
								} else {
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
									cout << "PotwierdŸ zakup" << endl;
									cout << "Przedmiot: " << item <<"\tCena: " << itemp << endl << endl;
									cout << "1. PotwierdŸ" << endl;
									cout << "2. Anuluj" << endl;
									cin >> itemc;
									if(itemc == "1") {
										gold = gold - itemp;
										lvlp = lvlp + lvl + 2;
									}
								}
							}
							if(shopc == "6") {
								item = "Ksiêga umiejêtnoœci";
								itemp = 25;
								if(gold < itemp) {
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
									cout << "Nie posiadasz wystarczaj¹cej iloœci z³ota" << endl;
									system("pause");
								} else {
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
									cout << "PotwierdŸ zakup" << endl;
									cout << "Przedmiot: " << item <<"\tCena: " << itemp << endl << endl;
									cout << "1. PotwierdŸ" << endl;
									cout << "2. Anuluj" << endl;
									cin >> itemc;
									if(itemc == "1") {
										gold = gold - itemp;
										lvlp = lvlp + 1;
									}
								}
							}
							if(shopc == "7") {
								item = "Ksiêga podró¿nika";
								itemp = 70;
								if(gold < itemp) {
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
									cout << "Nie posiadasz wystarczaj¹cej iloœci z³ota" << endl;
									system("pause");
								} else {
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
									cout << "PotwierdŸ zakup" << endl;
									cout << "Przedmiot: " << item <<"\tCena: " << itemp << endl << endl;
									cout << "1. PotwierdŸ" << endl;
									cout << "2. Anuluj" << endl;
									cin >> itemc;
									if(itemc == "1") {
										gold = gold - itemp;
										if(0.25*expn > 700) {
											exp = exp + 700;
										} else {
											exp = exp + 0.25*expn;
										}
									}
								}
							}
							if(shopc == "8") {
								item = "Z³ota koperta";
								itemp = 150;
								if(gold < itemp) {
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
									cout << "Nie posiadasz wystarczaj¹cej iloœci z³ota" << endl;
									system("pause");
								} else {
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
									cout << "PotwierdŸ zakup" << endl;
									cout << "Przedmiot: " << item <<"\tCena: " << itemp << endl << endl;
									cout << "1. PotwierdŸ" << endl;
									cout << "2. Anuluj" << endl;
									cin >> itemc;
									if(itemc == "1") {
										gold = gold - itemp;
										int gift = (rand()%301 + 0);
										gold = gold + gift;
										cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
										cout << "Otrzymujesz " << gift << " sztuk z³ota!" << endl;
										system("pause");
									}
								}
							}
							if(shopc == "9") {
								item = "Eliksir walecznoœci";
								itemp = 150;
								if(gold < itemp) {
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
									cout << "Nie posiadasz wystarczaj¹cej iloœci z³ota" << endl;
									system("pause");
								} else {
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
									cout << "PotwierdŸ zakup" << endl;
									cout << "Przedmiot: " << item <<"\tCena: " << itemp << endl << endl;
									cout << "1. PotwierdŸ" << endl;
									cout << "2. Anuluj" << endl;
									cin >> itemc;
									if(itemc == "1") {
										dmgpotion = dmgpotion + 10;
									}
								}
							}
							if(shopc == "10") {
								item = "Eliksir wytrzyma³oœci";
								itemp = 420;
								if(gold < itemp) {
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
									cout << "Nie posiadasz wystarczaj¹cej iloœci z³ota" << endl;
									system("pause");
								} else {
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
									cout << "PotwierdŸ zakup" << endl;
									cout << "Przedmiot: " << item <<"\tCena: " << itemp << endl << endl;
									cout << "1. PotwierdŸ" << endl;
									cout << "2. Anuluj" << endl;
									cin >> itemc;
									if(itemc == "1") {
										gold = gold - itemp;
										hp = 1.1*hp;
									}
								}
							}
							if(shopc == "11") {
								item = "Anio³ Stró¿";
								itemp = 1500;
								if(gangel == 1) {
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
									cout << "Posiadasz ju¿ Anio³a Stró¿a!" << endl;
									system("pause");
								}
								if(gangel == 0) {
									if(gold < itemp) {
										cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
										cout << "Nie posiadasz wystarczaj¹cej iloœci z³ota" << endl;
										system("pause");
									} else {
										cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
										cout << "PotwierdŸ zakup" << endl;
										cout << "Przedmiot: " << item <<"\tCena: " << itemp << endl << endl;
										cout << "1. PotwierdŸ" << endl;
										cout << "2. Anuluj" << endl;
										cin >> itemc;
										if(itemc == "1") {
											gold = gold - itemp;
											gangel = 1;
										}
									}
								}
								if(gangel == 2) {
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
									cout << "Ju¿ kiedyœ zu¿y³eœ Anio³a Stró¿a!" << endl;
									system("pause");
								}
							}
						} while(0==0);

					}
					if (shop == "2") {

						string finanse;
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
						cout << "Finanse:" << endl;
						cout << "1.Lokata" << endl;
						cout << "2.Kredyt" << endl << endl;
						cin >> finanse;
						if(finanse == "1") {

//lokata
							string depositc, dconfirm;
							float deposit1, deposit2, deposit3, dg;


							do {
								cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
								cout << "Wybierz lokatê:" << endl;
								cout << "1.\tLOKATA I   - Krótkoterminowa" << "\t" << depositr1 << endl;
								cout << "2.\tLOKATA II  - Zwyk³a         " << "\t" << depositr2 << endl;
								cout << "3.\tLOKATA III - D³ugoterminowa " << "\t" << depositr3 << endl;
								cout << "4. Wróæ do menu" << endl << endl;
								cin >> depositc;

								if (depositc == "1") {
									if (depositr1 == "GOTOWA") {
										gold = gold + deposit1;
										cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
										cout << "Otrzymujesz " << deposit1 << " sztuk z³ota!" << endl << endl;
										dtime1 = 0;
										depositr1 = "PUSTA";
										system("pause");
										break;
									}
									if (depositr1 == "W TRAKCIE") {
										cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
										cout << "Lokata nie jest gotowa do wyp³acenia." << endl;
										cout << "Do zrealizowania lokaty pozosta³o " << dtime1 - mobkilled << " przeciwników do pokonania." << endl << endl;
										system("pause");
										continue;
									}
									if (depositr1 == "PUSTA") {
										cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
										cout << "LOKATA I jest lokat¹ krótkoterminow¹ o oprocentowaniu 2,5%" << endl;
										cout << "Mo¿na j¹ odebraæ po zabiciu 10 przeciwników" << endl << endl;
										cout << "Czy chcesz skorzystaæ z tej lokaty?" << endl << endl;
										cout << "1. Tak" << endl;
										cout << "2. Obejrzê jeszcze inne" << endl << endl;
										cin >> dconfirm;

										if (dconfirm == "1") {
											cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
											cout << "Ile z³ota chcia³byœ zainwestowaæ na tê lokatê?" << endl << endl;
											cin >> deposit1;
											if(deposit1 <= gold) {
												cout << endl << endl;
												dg = deposit1;
												deposit1 = deposit1*1.025;
												cout << "Przy takiej iloœci z³ota po zrealizowaniu lokaty otrzymasz " << deposit1 << " sztuk z³ota." <<endl << endl;
												cout << "Czy zgadasz siê na takie warunki lokaty?" << endl;
												cout << "1. Tak" << endl;
												cout << "2. Nie" << endl << endl;
												cin >> dconfirm;
												if (dconfirm == "1") {
													gold = gold - dg;
													depositr1 = "W TRAKCIE";
													dtime1 = mobkilled + 10;
													break;
												}
											}
											if(deposit1 > gold) {
												cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
												cout << "Nie posiadasz takiej iloœci z³ota!" << endl;
												system("pause");
												continue;
											}
										}
									}
								}
								if (depositc == "2") {
									if (depositr2 == "GOTOWA") {
										gold = gold + deposit2;
										cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
										cout << "Otrzymujesz " << deposit2 << " sztuk z³ota!" << endl << endl;
										dtime2 = 0;
										depositr2 = "PUSTA";
										system("pause");
										break;
									}
									if (depositr2 == "W TRAKCIE") {
										cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
										cout << "Lokata nie jest gotowa do wyp³acenia." << endl << endl;
										cout << "Do zrealizowania lokaty pozosta³o " << dtime2 - mobkilled << " przeciwników do pokonania." << endl << endl;
										system("pause");
										continue;
									}
									if (depositr2 == "PUSTA") {
										cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
										cout << "LOKATA II jest lokat¹ zwyk³¹ o oprocentowaniu 10%" << endl;
										cout << "Mo¿na j¹ odebraæ po zabiciu 25 przeciwników" << endl << endl;
										cout << "Czy chcesz skorzystaæ z tej lokaty?" << endl << endl;
										cout << "1. Tak" << endl;
										cout << "2. Obejrzê jeszcze inne" << endl << endl;
										cin >> dconfirm;

										if (dconfirm == "1") {
											cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
											cout << "Ile z³ota chcia³byœ zainwestowaæ na tê lokatê?" << endl << endl;
											cin >> deposit2;
											if(deposit2 <= gold) {
												cout << endl << endl;
												dg = deposit2;
												deposit2 = deposit2*1.1;
												cout << "Przy takiej iloœci z³ota po zrealizowaniu lokaty otrzymasz " << deposit2 << " sztuk z³ota." <<endl << endl;
												cout << "Czy zgadasz siê na takie warunki lokaty?" << endl;
												cout << "1. Tak" << endl;
												cout << "2. Nie" << endl << endl;
												cin >> dconfirm;
												if (dconfirm == "1") {
													gold = gold - dg;
													depositr2 = "W TRAKCIE";
													dtime2 = mobkilled + 25;
													break;
												}
											}
											if(deposit2 > gold) {
												cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
												cout << "Nie posiadasz takiej iloœci z³ota!" << endl;
												system("pause");
												continue;
											}
										}
									}
								}
								if (depositc == "3") {
									if (depositr3 == "GOTOWA") {
										gold = gold + deposit3;
										cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
										cout << "Otrzymujesz " << deposit3 << " sztuk z³ota!" << endl << endl;
										dtime3 = 0;
										depositr3 = "PUSTA";
										system("pause");
										break;
									}
									if (depositr3 == "W TRAKCIE") {
										cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
										cout << "Lokata nie jest gotowa do wyp³acenia." << endl << endl;
										cout << "Do zrealizowania lokaty pozosta³o " << dtime3 - mobkilled << " przeciwników do pokonania." << endl << endl;
										system("pause");
										continue;
									}
									if (depositr3 == "PUSTA") {
										cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
										cout << "LOKATA I jest lokat¹ krótkoterminow¹ o oprocentowaniu 25%" << endl;
										cout << "Mo¿na j¹ odebraæ po zabiciu 50 przeciwników" << endl << endl;
										cout << "Czy chcesz skorzystaæ z tej lokaty?" << endl << endl;
										cout << "1. Tak" << endl;
										cout << "2. Obejrzê jeszcze inne" << endl;
										cin >> dconfirm;

										if (dconfirm == "1") {
											cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
											cout << "Ile z³ota chcia³byœ zainwestowaæ na tê lokatê?" << endl << endl;
											cin >> deposit3;
											if(deposit3 <= gold) {
												cout << endl << endl;
												dg = deposit3;
												deposit3 = deposit3*1.25;
												cout << "Przy takiej iloœci z³ota po zrealizowaniu lokaty otrzymasz " << deposit3 << " sztuk z³ota." <<endl << endl;
												cout << "Czy zgadasz siê na takie warunki lokaty?" << endl;
												cout << "1. Tak" << endl;
												cout << "2. Nie" << endl;
												cin >> dconfirm;
												if (dconfirm == "1") {
													gold = gold - dg;
													depositr3 = "W TRAKCIE";
													dtime3 = mobkilled + 50;
													break;
												}
											}
											if(deposit3 > gold) {
												cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
												cout << "Nie posiadasz takiej iloœci z³ota!" << endl;
												system("pause");
												continue;
											}
										}
									}
								}
								if (depositc == "4") {
									break;
								}

							} while(0==0);
						}
						if(finanse == "2") {

//kredyt
							string creditc, cconfirm;
							float cg, optcredit1, optcredit2, optcredit3;


							do {
								cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
								cout << "Wybierz kredyt:" << endl;
								cout << "1.\tChwilówka          " << "\t" << creditr1 << endl;
								cout << "2.\tPo¿yczka           " << "\t" << creditr2 << endl;
								cout << "3.\tKredyt inwestycyjny" << "\t" << creditr3 << endl;
								cout << "4. Wróæ do menu" << endl << endl;
								cin >> creditc;

								if (creditc == "1") {
									if (creditr1 == "DO SP£ACENIA") {
										cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
										cout << "Do sp³acenia kredytu potrzebujesz " << credit1 << " sztuk z³ota." << endl << endl;
										if(gold >= credit1) {
											cout << "Posiadasz wystarczaj¹c¹ iloœæ z³ota." << endl;
											cout << "Pozosta³y termin: " << ctime1 - mobkilled << " pokonanych przeciwników" << endl;
											cout << "Czy chcesz go sp³aciæ teraz?" << endl;
											cout << "1. Tak" << endl;
											cout << "2. Nie" << endl;
											cin >> cconfirm;
											if (cconfirm == "1") {
												gold = gold - cg;
												creditr1 = "DOSTÊPNA";
												break;
											}
										}
										if(gold < credit1) {
											cout << "Nie posiadasz wystarczaj¹cej iloœci z³ota." << endl;
											cout << "Brakuj¹ca iloœæ: " << credit1 - gold << " sztuk z³ota" << endl;
											cout << "Pozosta³y termin: " << ctime1 - mobkilled << " pokonanych przeciwników" << endl;
											system("pause");
											break;
										}
									}
									if (creditr1 == "DOSTÊPNA") {

										cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
										cout << "Chwilówka jest krótkoterminowym kredytem o oprocentowaniu 25%" << endl;
										cout << "Nale¿y j¹ sp³aciæ przed zabiciem 15 przeciwników" << endl << endl;
										cout << "Czy chcesz zaci¹gn¹æ ten kredyt?" << endl << endl;
										cout << "1. Tak" << endl;
										cout << "2. Obejrzê jeszcze inne" << endl;
										cin >> cconfirm;

										if (cconfirm == "1") {
											optcredit1 = (5*15*lvl)/1.25;

											do {
												cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
												cout << "Ile z³ota chcia³byœ po¿yczyæ?" << endl << endl;
												cout << "Maksymalna wartoœæ kredytu : " << optcredit1 << " sztuk z³ota." << endl << endl;
												cin >> credit1;
												if (credit1 >= 100 && credit1 <= optcredit1) {
													cg = credit1;
													gold = gold + cg;
													ctime1 = mobkilled + 15;
													credit1 = credit1 * 1.25;
													creditr1 = "DO SP£ACENIA";
													break;
												}
												if (credit1 < 100 || credit1 > optcredit1) {
													cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
													cout << "Mo¿esz po¿yczyæ conajmniej 100, a conajwy¿ej " << optcredit1 << " sztuk z³ota." << endl << endl;
													system("pause");
												}
												if (credit1 == 0) {
													break;
												}

											} while(0==0);
										}
									}
								}
								if (creditc == "2") {
									if (creditr2 == "DO SP£ACENIA") {
										cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
										cout << "Do sp³acenia kredytu potrzebujesz " << credit2 << " sztuk z³ota." << endl << endl;
										if(gold >= credit2) {
											cout << "Posiadasz wystarczaj¹c¹ iloœæ z³ota." << endl;
											cout << "Pozosta³y termin: " << ctime2 - mobkilled << " pokonanych przeciwników" << endl;
											cout << "Czy chcesz go sp³aciæ teraz?" << endl;
											cout << "1. Tak" << endl;
											cout << "2. Nie" << endl;
											cin >> cconfirm;
											if (cconfirm == "1") {
												gold = gold - cg;
												creditr2 = "DOSTÊPNA";
												break;
											}
										}
										if(gold < credit2) {
											cout << "Nie posiadasz wystarczaj¹cej iloœci z³ota." << endl;
											cout << "Brakuj¹ca iloœæ: " << credit2 - gold << " sztuk z³ota" << endl;
											cout << "Pozosta³y termin: " << ctime2 - mobkilled << " pokonanych przeciwników" << endl;
											system("pause");
											break;
										}
									}
									if (creditr2 == "DOSTÊPNA") {

										cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
										cout << "Po¿yczka jest kredytem o oprocentowaniu 15%" << endl;
										cout << "Nale¿y j¹ sp³aciæ przed zabiciem 30 przeciwników" << endl << endl;
										cout << "Czy chcesz zaci¹gn¹æ ten kredyt?" << endl << endl;
										cout << "1. Tak" << endl;
										cout << "2. Obejrzê jeszcze inne" << endl;
										cin >> cconfirm;

										if (cconfirm == "1") {
											optcredit2 = (5*30*lvl)/1.15;


											do {
												cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
												cout << "Ile z³ota chcia³byœ po¿yczyæ?" << endl << endl;
												cout << "Maksymalna wartoœæ kredytu: " << optcredit2 << " sztuk z³ota." << endl << endl;
												cin >> credit2;
												if (credit2 >= 500 && credit2 <= optcredit2) {
													cg = credit2;
													gold = gold + cg;
													ctime2 = mobkilled + 30;
													credit2 = credit2 * 1.15;
													creditr2 = "DO SP£ACENIA";
													break;
												}
												if (credit2 < 500 || credit2 > optcredit2) {
													cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
													cout << "Mo¿esz po¿yczyæ conajmniej 500, a conajwy¿ej " << optcredit2 << " sztuk z³ota." << endl << endl;
													system("pause");
												}
												if (credit2 == 0) {
													break;
												}

											} while(0==0);
										}
									}
								}

								if (creditc == "3") {
									if (creditr3 == "DO SP£ACENIA") {
										cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
										cout << "Do sp³acenia kredytu potrzebujesz " << credit3 << " sztuk z³ota." << endl << endl;
										if(gold >= credit3) {
											cout << "Posiadasz wystarczaj¹c¹ iloœæ z³ota." << endl;
											cout << "Pozosta³y termin: " << ctime3 - mobkilled << " pokonanych przeciwników" << endl;
											cout << "Czy chcesz go sp³aciæ teraz?" << endl;
											cout << "1. Tak" << endl;
											cout << "2. Nie" << endl;
											cin >> cconfirm;
											if (cconfirm == "1") {
												gold = gold - cg;
												creditr3 = "DOSTÊPNY";
												break;
											}
										}
										if(gold < credit3) {
											cout << "Nie posiadasz wystarczaj¹cej iloœci z³ota." << endl;
											cout << "Brakuj¹ca iloœæ: " << credit3 - gold << " sztuk z³ota" << endl;
											cout << "Pozosta³y termin: " << ctime3 - mobkilled << " pokonanych przeciwników" << endl;
											system("pause");
											break;
										}
									}
									if (creditr3 == "DOSTÊPNY") {

										cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
										cout << "Kredyt inwestycyjny jest kredytem d³ugoterminowym o oprocentowaniu 30%" << endl;
										cout << "Nale¿y go sp³aciæ przed zabiciem 60 przeciwników" << endl << endl;
										cout << "Czy chcesz zaci¹gn¹æ ten kredyt?" << endl << endl;
										cout << "1. Tak" << endl;
										cout << "2. Obejrzê jeszcze inne" << endl;
										cin >> cconfirm;

										if (cconfirm == "1") {
											optcredit3 = (5*60*lvl)/1.3;


											do {
												cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
												cout << "Ile z³ota chcia³byœ po¿yczyæ?" << endl << endl;
												cout << "Maksymalna wartoœæ kredytu: " << optcredit3 << " sztuk z³ota." << endl << endl;
												cin >> credit3;
												if (credit3 >= 1000 && credit3 <= optcredit3) {
													cg = credit3;
													gold = gold + cg;
													ctime3 = mobkilled + 60;
													credit3 = credit3 * 1.3;
													creditr3 = "DO SP£ACENIA";
													break;
												}
												if (credit3 < 1000 || credit3 > optcredit3) {
													cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
													cout << "Mo¿esz po¿yczyæ conajmniej 1000, a conajwy¿ej " << optcredit3 << " sztuk z³ota." << endl << endl;
													system("pause");
												}
												if (credit3 == 0) {
													break;
												}
											} while(0==0);
										}
									}
								}
								if(creditc == "4") {
									break;
								}
							} while(0==0);
						}
					}
				}

//autofight
				if(wtd == "5") {

					int autofight;
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					cout << "Na ile potworów chcesz zapolowaæ?" << endl;
					cin >> autofight;

					int i;
					for(i=0; i < autofight; i++) {

						float pexp, dmgdealt, dmgtaken, dmgs;
						int dmgpused;
						dmgdealt = 0;
						dmgtaken = 0;
						pexp = 0.85*lvl;
						do {

							if(dmgpotion > 0) {
								dmgpotion = dmgpotion - 1;
								dmgs = dmg;
								dmg = 1.15*dmg;
								dmgpused = 1;
							}

							string mob;
							int moblvl, intmlr, amob;
							float mobhp, mobhpmax, mobdmg, mobexp, mobg, mlr;
							mlr = round(lvl+0.35*lvl);
							intmlr = mlr;
							moblvl = (rand() % (intmlr) + 1);

							amob = (rand() % 11 + 1);
							if(amob == 1) {
								mob = "Wilk";
								mobhp = 7 + 0.5*moblvl;
								mobhpmax = mobhp;
								mobdmg = 3 + 0.3*moblvl;
								mobg = moblvl * 5;
							}
							if(amob == 2) {
								mob = "NiedŸwiedŸ";
								mobhp = 30 + 0.9*moblvl;
								mobhpmax = mobhp;
								mobdmg = 6 + 0.5*moblvl;
								mobg = moblvl * 5;
							}
							if(amob == 3) {
								mob = "Rozwœcieczony knur";
								mobhp = (12 + 0.8*moblvl);
								mobhpmax = mobhp;
								mobdmg = 4.5 + 1.15*moblvl;
								mobg = moblvl * 5;
							}
							if(amob == 4) {
								mob = "WiedŸma";
								mobhp = (13 + 1.13*moblvl);
								mobhpmax = mobhp;
								mobdmg = 6 + 0.66*moblvl ;
								mobg = moblvl * 6.66;
							}
							if(amob == 5) {
								mob = "Ropuch";
								mobhp = (9.5 + 1.25*moblvl);
								mobhpmax = mobhp;
								mobdmg = 3 + 0.95*moblvl;
								mobg = moblvl * 5;
							}
							if(amob == 6) {
								mob = "Utopiec";
								mobhp = (9 + moblvl);
								mobhpmax = mobhp;
								mobdmg = 6 + 0.4*moblvl;
								mobg = moblvl * 5;
							}
							if(amob == 7) {
								mob = "Wilko³ak";
								mobhp = 15 + 1.9*moblvl;
								mobhpmax = mobhp;
								mobdmg = 8 + 0.7*moblvl;
								mobg = moblvl * 5;
							}
							if(amob == 8) {
								mob = "Nietoperz";
								mobhp = (3 + 0.25*moblvl);
								mobhpmax = mobhp;
								mobdmg = 2 + 0.2*moblvl;
								mobg = moblvl * 5;
							}
							if(amob == 9) {
								mob = "Dziki pies";
								mobhp = (5 + 0.3*moblvl);
								mobhpmax = mobhp;
								mobdmg = 2 + 0.3*moblvl;
								mobg = moblvl * 5;
							}
							if(amob == 10) {
								mob = "Ghul";
								mobhp = (9 + 0.7*moblvl);
								mobhpmax = mobhp;
								mobdmg = 4 + 0.55*moblvl;
								mobg = moblvl * 5;
							}
							if(amob == 11) {
								mob = "Arachnoid";
								mobhp = (6 + 0.65*moblvl);
								mobhpmax = mobhp;
								mobdmg = 6 + 0.4*moblvl;
								mobg = moblvl * 5;
							}
							mobexp = 1.25*(moblvl + mobdmg + mobhp);

							do {
								mobhp = mobhp - dmg;
								dmgdealt = dmgdealt + dmg;

								hp = hp - mobdmg;
								dmgtaken = dmgtaken + mobdmg;

							} while(hp>0 && mobhp>0);
							if (hp<=0 && gangel != 1) {
								cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\tKONIEC GRY" << endl;
								cout << "\t\t Zgin¹³eœ" << endl;
								cout << endl;
								cout << "\n\n\tStatystyki:       " << endl;
								cout << "\tAtak:                 " << dmg << endl;
								cout << "\tZdrowie:              " << hp << "/" << hpmax << endl;
								cout << "\tPoziom:               " << lvl << endl;
								cout << "\tDoœwiadczenie:        " << exp << "/" << expn << endl;
								cout << "\tPunkty doœwiadczenia: " << lvlp << endl;
								cout << "\tZ³oto:                " << gold << endl;
								cout << "\tPokonani przeciwnicy: " << mobkilled << endl << endl;
								dead = 1;
								system("pause");
								goto start;
							}
							if(hp<=0 && gangel == 1) {
								cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
								cout << "Zgin¹³eœ..." << endl << endl;
								cout << "Twój Anio³ Stró¿ zostaje zu¿yty. Wracasz do ¿ywych" << endl << endl;
								hp = 0.5*hpmax;
								gangel = 2;
								system("pause");
							}
							if (mobhp<=0) {
								cout << endl;
								cout << "Gratulacje!! Pokona³eœ " << mob <<"!" << endl;
								mobkilled = mobkilled + 1;
								hp = hp + (0.75*dmgtaken);
								exp = exp + mobexp;
								gold = gold + mobg;
								cout << "Otrzymujesz " << mobexp << " doœwiadczenia, " << 0.75*dmgtaken << " zdrowia oraz " << mobg << " z³ota." << endl << endl;
								break;
							}

							autofight = autofight - 1;

						} while (hp>0);

						if(dmgpused == 1) {
							dmgpused = 0;
							dmg = dmgs;
						}
					}



					cout << endl;
					cout << "\n\n\tStatystyki:       " << endl;
					cout << "\tAtak:                 " << dmg << endl;
					cout << "\tZdrowie:              " << hp << "/" << hpmax << endl;
					cout << "\tPoziom:               " << lvl << endl;
					cout << "\tDoœwiadczenie:        " << exp << "/" << expn << endl;
					cout << "\tPunkty doœwiadczenia: " << lvlp << endl;
					cout << "\tZ³oto:                " << gold << endl;
					cout << "\tPokonani przeciwnicy: " << mobkilled << endl << endl;

					do {
						if(exp>=expn) {
							cout << "Gratulacje zdoby³eœ poziom " << lvl+1 << "!" << endl;
							exp = exp - expn;
							lvl = lvl + 1;
							lvlp = lvlp + lvl + 2;
							cout << "Otrzymujesz " << lvl + 2 << " punktów doœwiadczenia." << endl << endl;
							if(difficulty=="1" || difficulty == "5") {
								expn = 100*lvl;
							}
							if(difficulty=="2") {
								expn = 1.15*100*lvl;
							}
							if(difficulty=="3") {
								expn = 1.3*100*lvl;
							}
							if(difficulty=="4") {
								expn = 100*lvl;
							}

						}
					} while(exp>=expn);

					system("pause");
				}


//Œwi¹tynia
				if(wtd == "6") {
					if(difficulty == "4" || difficulty == "5") {
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
						cout<<"Jesteœ w œwi¹tyni, co teraz zrobisz?"<<endl;
						cout<<"1. Pomódl siê"<<endl;
						cout<<"2. Udaj siê do fontanny po³amanych"<<endl<<endl;
						string fountain;
						cin>> fountain;
						if(fountain == "1") {
							exp = expn;
							cout<<"Pomodli³eœ siê, otrzymujesz nowy poziom"<<endl;
							system("pause");
						}
						if(fountain == "2") {
							hp=hpmax;
							cout<<"Zosta³eœ wyleczony"<<endl;
							system("pause");
						}
					}

					if(difficulty == "1") {
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
						cout<<"Jesteœ w œwi¹tyni, co teraz zrobisz?"<<endl;
						cout<<"1. Pomódl siê"<<endl;
						cout<<"2. Udaj siê do fontanny po³amanych"<<endl<<endl;
						string fountain;
						cin>> fountain;
						if(fountain == "1") {
							exp=exp+0.25;
							cout<<"Pomodli³eœ siê, otrzymujesz 0.25 doœwiadczenia!"<<endl;
							system("pause");
						}
						if(fountain == "2") {
							hp=hp+0.15;
							cout<<"Zosta³eœ uleczony o 0.15 zdrowia!"<<endl;
							system("pause");
						}
					}
					if(difficulty == "2") {
						if(lvl >= 10) {
							cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
							cout<<"Jesteœ w œwi¹tyni, co teraz zrobisz?"<<endl;
							cout<<"1. Pomódl siê"<<endl;
							cout<<"2. Udaj siê do fontanny po³amanych"<<endl<<endl;
							string fountain;
							cin>> fountain;
							if(fountain == "1") {
								exp=exp+0.25;
								cout<<"Pomodli³eœ siê, otrzymujesz 0.25 doœwiadczenia!"<<endl << endl;
								system("pause");
							}
							if(fountain == "2") {
								hp=hp+0.15;
								cout<<"Zosta³eœ uleczony o 0.15 zdrowia!"<<endl << endl;
								system("pause");
							}
						}
						if(lvl < 10) {
							cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
							cout << "Zdob¹dŸ poziom 10, aby dostaæ siê do œwi¹tyni!" << endl << endl;
							system("pause");
						}
					}
					if(difficulty == "3") {
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
						cout << "Œwi¹tynia jest niedostêpna na twoim poziomie trudnoœci!" << endl << endl;
						system("pause");
					}
				}

				if(wtd=="7") {
zapisywanie:
					string save;
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					cout << "Czy chcesz zapisac?" << endl;
					cout << "1. Tak"<<endl;
					cout << "2. Nie, wyjdŸ bez zapisu" << endl;
					cout << "3. Wróæ do menu"<< endl << endl;
					cin >> save;


					if(save == "1") {
						string saveslot;
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
						cout << "1. Miejsce na zapis 1" << endl;
						cout << "2. Miejsce na zapis 2" << endl;
						cout << "3. Miejsce na zapis 3" << endl;
						cout << "4. Miejsce na zapis 4" << endl;
						cout << "5. Miejsce na zapis 5" << endl << endl;
						cin >> saveslot;


						int idepositr1, idepositr2, idepositr3, icreditr1, icreditr2, icreditr3;
						if(depositr1 == "GOTOWA") {
							idepositr1 = 1;
						}
						if(depositr1 == "W TRAKCIE") {
							idepositr1 = 2;
						}
						if(depositr1 == "PUSTA") {
							idepositr1 = 3;
						}
						if(depositr2 == "GOTOWA") {
							idepositr2 = 1;
						}
						if(depositr2 == "W TRAKCIE") {
							idepositr2 = 2;
						}
						if(depositr2 == "PUSTA") {
							idepositr2 = 3;
						}
						if(depositr3 == "GOTOWA") {
							idepositr3 = 1;
						}
						if(depositr3 == "W TRAKCIE") {
							idepositr3 = 2;
						}
						if(depositr3 == "PUSTA") {
							idepositr3 = 3;
						}
						if(creditr1 == "DO SP£ACENIA") {
							icreditr1 = 1;
						}
						if(creditr1 == "DOSTÊPNA") {
							icreditr1 = 2;
						}
						if(creditr2 == "DO SP£ACENIA") {
							icreditr2 = 1;
						}
						if(creditr2 == "DOSTÊPNA") {
							icreditr2 = 2;
						}
						if(creditr3 == "DO SP£ACENIA") {
							icreditr3 = 1;
						}
						if(creditr3 == "DOSTÊPNY") {
							icreditr3 = 2;
						}

						int irace, itype;
						if(race == "Cz³owiek") {
							irace = 1;
						}
						if(race == "Ork") {
							irace = 2;
						}
						if(race == "Elf") {
							irace = 3;
						}
						if(race == "Krasnolud") {
							irace = 4;
						}
						if(race == "Goblin") {
							irace = 5;
						}
						if(type == "Wojownik") {
							itype = 1;
						}
						if(type == "Obroñca") {
							itype = 2;
						}
						if(type == "Paladyn") {
							itype = 3;
						}
						if(type == "Czeladnik") {
							itype = 4;
						}
						if(type == "£owca") {
							itype = 5;
						}
						if(type == "Berserker") {
							itype = 6;
						}
						if(type == "Buntownik") {
							itype = 7;
						}
						if(type == "Czyœciciel") {
							itype = 8;
						}
						if(type == "Elf wy¿szy") {
							itype = 9;
						}
						if(type == "Maschinmeister") {
							itype = 10;
						}
						if(type == "Chochlik") {
							itype = 11;
						}
						if(difficulty == "1") {
							idifficulty = 1;
						}
						if(difficulty == "2") {
							idifficulty = 2;
						}
						if(difficulty == "3") {
							idifficulty = 3;
						}
						if(difficulty == "4") {
							idifficulty = 4;
						}
						if(difficulty == "5") {
							idifficulty = 5;
						}
						dmg = round(dmg);
						hp = round(hp);
						hpmax = round(hpmax);
						exp = round(exp);
						expn = round(expn);
						gold = round(gold);
						iname = 0;

						if(saveslot == "1") {
							ofstream zapis("zapis1.txt");
							ofstream Izapis("Izapis1.txt");


							Izapis<<name;
							zapis << idifficulty << endl << dead << endl << gangel <<endl<<dtime1<<endl<< dtime2<<endl<< dtime3<<endl<<ctime1<<endl<< ctime2<<endl<< ctime3<<endl<< idepositr1<<endl<< idepositr2<<endl<< idepositr3<<endl <<icreditr1<<endl<< icreditr2<<endl <<icreditr3<<endl<<iname<<endl<< irace<<endl<<itype<<endl<<lvlp<<endl<< lvl<<endl<< mobkilled<<endl<<dmgpotion<<endl <<dmg<<endl<< hp<<endl<< hpmax<<endl<< exp<<endl<< expn<<endl<< gold;

							zapis.close();
							Izapis.close();
						}
						if(saveslot == "2") {
							ofstream zapis("zapis2.txt");
							ofstream Izapis("Izapis2.txt");


							Izapis<<name;
							zapis << idifficulty << endl << dead << endl << gangel <<endl<<dtime1<<endl<< dtime2<<endl<< dtime3<<endl<<ctime1<<endl<< ctime2<<endl<< ctime3<<endl<< idepositr1<<endl<< idepositr2<<endl<< idepositr3<<endl <<icreditr1<<endl<< icreditr2<<endl <<icreditr3<<endl<<iname<<endl<< irace<<endl<<itype<<endl<<lvlp<<endl<< lvl<<endl<< mobkilled<<endl<<dmgpotion<<endl <<dmg<<endl<< hp<<endl<< hpmax<<endl<< exp<<endl<< expn<<endl<< gold;

							zapis.close();
							Izapis.close();
						}
						if(saveslot == "3") {
							ofstream zapis("zapis3.txt");
							ofstream Izapis("Izapis3.txt");


							Izapis<<name;
							zapis << idifficulty << endl << dead << endl << gangel <<endl<<dtime1<<endl<< dtime2<<endl<< dtime3<<endl<<ctime1<<endl<< ctime2<<endl<< ctime3<<endl<< idepositr1<<endl<< idepositr2<<endl<< idepositr3<<endl <<icreditr1<<endl<< icreditr2<<endl <<icreditr3<<endl<<iname<<endl<< irace<<endl<<itype<<endl<<lvlp<<endl<< lvl<<endl<< mobkilled<<endl<<dmgpotion<<endl <<dmg<<endl<< hp<<endl<< hpmax<<endl<< exp<<endl<< expn<<endl<< gold;

							zapis.close();
							Izapis.close();
						}
						if(saveslot == "4") {
							ofstream zapis("zapis4.txt");
							ofstream Izapis("Izapis4.txt");


							Izapis<<name;
							zapis << idifficulty << endl << dead << endl << gangel <<endl<<dtime1<<endl<< dtime2<<endl<< dtime3<<endl<<ctime1<<endl<< ctime2<<endl<< ctime3<<endl<< idepositr1<<endl<< idepositr2<<endl<< idepositr3<<endl <<icreditr1<<endl<< icreditr2<<endl <<icreditr3<<endl<<iname<<endl<< irace<<endl<<itype<<endl<<lvlp<<endl<< lvl<<endl<< mobkilled<<endl<<dmgpotion<<endl <<dmg<<endl<< hp<<endl<< hpmax<<endl<< exp<<endl<< expn<<endl<< gold;

							zapis.close();
							Izapis.close();
						}
						if(saveslot == "5") {
							ofstream zapis("zapis5.txt");
							ofstream Izapis("Izapis5.txt");


							Izapis<<name;
							zapis << idifficulty << endl << dead << endl << gangel <<endl<<dtime1<<endl<< dtime2<<endl<< dtime3<<endl<<ctime1<<endl<< ctime2<<endl<< ctime3<<endl<< idepositr1<<endl<< idepositr2<<endl<< idepositr3<<endl <<icreditr1<<endl<< icreditr2<<endl <<icreditr3<<endl<<iname<<endl<< irace<<endl<<itype<<endl<<lvlp<<endl<< lvl<<endl<< mobkilled<<endl<<dmgpotion<<endl <<dmg<<endl<< hp<<endl<< hpmax<<endl<< exp<<endl<< expn<<endl<< gold;

							zapis.close();
							Izapis.close();
						}


						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
						cout << "Zapis udany" <<endl<<endl;
						system("pause");
						return 0;


					}

					if(save == "2") {

						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
						cout<<"Nie? Dobrze, zapamiêtam to."<<endl<<endl;
						system("pause");


						return 0;
					}




				}
			} while(dead==0);
		}

		if(start=="2") {

			string saveslot;
			do {
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				cout << "1. Zapis 1" << endl;
				cout << "2. Zapis 2" << endl;
				cout << "3. Zapis 3" << endl;
				cout << "4. Zapis 4" << endl;
				cout << "5. Zapis 5" << endl << endl;
				cin >> saveslot;
			} while(saveslot != "1" && saveslot != "2" && saveslot != "3" && saveslot != "4" && saveslot != "5");

			//wczytywanie Kuby
			ifstream dane;

			if(saveslot == "1") {
				dane.open( "zapis1.txt", ios::in | ios::out );
				//	dane.open( "Izapis1.txt", ios::in | ios::out );
			}
			if(saveslot == "2") {
				dane.open( "zapis2.txt", ios::in | ios::out );
				//	dane.open( "Izapis2.txt", ios::in | ios::out );
			}
			if(saveslot == "3") {
				dane.open( "zapis3.txt", ios::in | ios::out );
				//	dane.open( "Izapis3.txt", ios::in | ios::out );
			}
			if(saveslot == "4") {
				dane.open( "zapis4.txt", ios::in | ios::out );
				//	dane.open( "Izapis4.txt", ios::in | ios::out );
			}
			if(saveslot == "5") {
				dane.open( "zapis5.txt", ios::in | ios::out );
				//	dane.open( "Izapis5.txt", ios::in | ios::out );
			}

//			ifstream dane;
//			dane.open( "dane.txt", ios::in | ios::out );


			int arr[28];
			int cnt= 0;
			//int x;
			string x;
			// check that array is not already full
			while (cnt < arr[28] && dane >> x) {

				//cout << "str: " << x << endl;

				// and read integer from file
				arr[cnt] = atoi(x.c_str());

				//cout << "int: " << arr[cnt] << endl;

				cnt++;
			}


			//zapis << dead << endl << gangel <<endl<<dtime1<<endl<< dtime2<<endl<< dtime3<<endl<<ctime1<<endl<< ctime2<<endl<< ctime3<<endl<< depositr1<<endl<< depositr2<<endl<< depositr3<<endl <<creditr1<<endl<< creditr2<<endl <<creditr3<<endl<<name<<endl <<gender<<endl<< race<<endl<<age<<endl<<lvlp<<endl<< lvl<<endl<< mobkilled<<endl<<dmgpotion<<endl <<dmg<<endl<< hp<<endl<< hpmax<<endl<< exp<<endl<< expn<<endl<< gold;
			idifficulty = arr[0];
			dead  = arr[1];
			gangel = arr[2];
			dtime1  = arr[3];
			dtime2 = arr[4];
			dtime3 = arr[5];
			ctime1 = arr[6];
			ctime2 = arr[7];
			ctime3 = arr[8];


			idepositr1 = arr[9];
			idepositr2 = arr[10];
			idepositr3 = arr[11];
			icreditr1 = arr[12];
			icreditr2 = arr[13];
			icreditr3 = arr[14];
			iname = arr[15];
			irace = arr[16];
			itype = arr[17];


			lvlp = arr[18];
			lvl = arr[19];
			mobkilled = arr[20];
			dmgpotion = arr[21];
			dmg = arr[22];
			hp = arr[23];
			hpmax = arr[24];
			exp = arr[25];
			expn = arr[26];
			gold = arr[27];

			if(idepositr1 == 1) {
				depositr1 = "GOTOWA";
			}
			if(idepositr1 == 2) {
				depositr1 = "W TRAKCIE";
			}
			if(idepositr1 == 3) {
				depositr1 = "PUSTA";
			}
			if(idepositr2 == 1) {
				depositr2 = "GOTOWA";
			}
			if(idepositr2 == 2) {
				depositr2 = "W TRAKCIE";
			}
			if(idepositr2 == 3) {
				depositr2 = "PUSTA";
			}
			if(idepositr3 == 1) {
				depositr3 = "GOTOWA";
			}
			if(idepositr3 == 2) {
				depositr3 = "W TRAKCIE";
			}
			if(idepositr3 == 3) {
				depositr3 = "PUSTA";
			}
			if(icreditr1 == 1) {
				creditr1 = "DO SP£ACENIA";
			}
			if(icreditr1 == 2) {
				creditr1 = "DOSTÊPNA";
			}
			if(icreditr2 == 1) {
				creditr2 = "DO SP£ACENIA";
			}
			if(icreditr2 == 2) {
				creditr2 = "DOSTÊPNA";
			}
			if(icreditr3 == 1) {
				creditr3 = "DO SP£ACENIA";
			}
			if(icreditr3 == 2) {
				creditr3 = "DOSTÊPNY";
			}
			if(irace == 1) {
				race = "Cz³owiek";
			}
			if(irace == 2) {
				race = "Ork";
			}
			if(irace == 3) {
				race = "Elf";
			}
			if(irace == 4) {
				race = "Krasnolud";
			}
			if(irace == 5) {
				race = "Goblin";
			}
			if(itype == 1) {
				type = "Wojownik";
			}
			if(itype == 2) {
				type = "Obroñca";
			}
			if(itype == 3) {
				type = "Paladyn";
			}
			if(itype == 4) {
				type = "Czeladnik";
			}
			if(itype == 5) {
				type = "£owca";
			}
			if(itype == 6) {
				type = "Berserker";
			}
			if(itype == 7) {
				type = "Buntownik";
			}
			if(itype == 8) {
				type = "Czyœciciel";
			}
			if(itype == 9) {
				type = "Elf wy¿szy";
			}
			if(itype == 10) {
				type = "Maschinmeister";
			}
			if(itype == 11) {
				type = "Chochlik";
			}
			if(idifficulty == 1) {
				difficulty = "1";
			}
			if(idifficulty == 2) {
				difficulty = "2";
			}
			if(idifficulty == 3) {
				difficulty = "3";
			}
			if(idifficulty == 4) {
				difficulty = "4";
			}
			if(idifficulty == 5) {
				difficulty = "5";
			}
			dane.close();


			quest = 0;
			
			
			
			if(saveslot == "1"){


			ifstream Izapis("Izapis1.txt");
			if (Izapis.is_open()) {

				getline(Izapis, name);
			}


			Izapis.close();
}
	if(saveslot == "2"){


			ifstream Izapis("Izapis2.txt");
			if (Izapis.is_open()) {

				getline(Izapis, name);
			}


			Izapis.close();
}

	if(saveslot == "3"){


			ifstream Izapis("Izapis3.txt");
			if (Izapis.is_open()) {

				getline(Izapis, name);
			}


			Izapis.close();
}

	if(saveslot == "4"){


			ifstream Izapis("Izapis4.txt");
			if (Izapis.is_open()) {

				getline(Izapis, name);
			}


			Izapis.close();
}

	if(saveslot == "5"){


			ifstream Izapis("Izapis5.txt");
			if (Izapis.is_open()) {

				getline(Izapis, name);
			}


			Izapis.close();
}




//zanim zapisywanie imienia
			//cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			//cout << "Jak siê nazywasz?" << endl;
			//cin >> name;



			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			cout << "Wczytany zapis stanu gry:" << endl << endl;
			cout << "\tTwoja postaæ:" << endl;
			cout << "\t\tImiê:                 " << name << endl;
			cout << "\t\tRasa:                 " << race << endl;
			cout << "\t\tKlasa:                " << type << endl;
			cout << "\tStatystyki:             " << endl;
			cout << "\t\tAtak:                 " << dmg << endl;
			cout << "\t\tZdrowie:              " << hp << "/" << hpmax << endl;
			cout << "\t\tPoziom:               " << lvl << endl;
			cout << "\t\tDoœwiadczenie:        " << exp << "/" << expn << endl;
			cout << "\t\tPunkty doœwiadczenia: " << lvlp << endl;
			cout << "\t\tZ³oto:                " << gold << endl;
			cout << "\t\tPokonani przeciwnicy: " << mobkilled << endl << endl;
			system("pause");

			goto core;



		}
		if(start=="3") {
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			cout << "\t Dziêkujemy za zainteresowanie nasz¹ produkcj¹ <3" << endl << endl;
			cout << "Autorzy:" << endl;
			int credits;
			credits = (rand() % 6 + 1);
			if(credits == 1) {
				cout << "Dawid Pawlik" << endl;
				cout << "Jakub Wójcik" << endl;
				cout << "Karolina Borowiec" << endl;
			}
			if(credits == 2) {
				cout << "Dawid Pawlik" << endl;
				cout << "Karolina Borowiec" << endl;
				cout << "Jakub Wójcik" << endl;
			}
			if(credits == 3) {
				cout << "Jakub Wójcik" << endl;
				cout << "Dawid Pawlik" << endl;
				cout << "Karolina Borowiec" << endl;
			}
			if(credits == 4) {
				cout << "Jakub Wójcik" << endl;
				cout << "Karolina Borowiec" << endl;
				cout << "Dawid Pawlik" << endl;
			}
			if(credits == 5) {
				cout << "Karolina Borowiec" << endl;
				cout << "Dawid Pawlik" << endl;
				cout << "Jakub Wójcik" << endl;
			}
			if(credits == 6) {
				cout << "Karolina Borowiec" << endl;
				cout << "Jakub Wójcik" << endl;
				cout << "Dawid Pawlik" << endl;
			}

			cout << endl;
			system("pause");

		}
		if(start=="4") {
koniec:
			string exit;
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			cout << "Czy na pewno chcesz siê z nami rozstaæ?" << endl;
			cout << "1. Tak, wyjœcie." << endl;
			cout << "2. Nie, zostanê jeszcze na chwilkê.." << endl;
			cin >> exit;
			if(exit=="1") {
				return 0;
			} else {
				continue;
			}
		}
	} while(dead==0);
}
