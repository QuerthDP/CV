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
		cout << "Co zamierzasz uczyni�?" << endl;
		cout << "1. Nowa Gra" << endl;
		cout << "2. Wczytaj zapis" << endl;
		cout << "3. Autorzy" << endl;
		cout << "4. Wyjd� z gry" << endl << endl;
		cin >> start;

//kreator postaci
		if(start=="1") {

//string depositr1, depositr2, depositr3, creditr1, creditr2, creditr3;
			depositr1 = "PUSTA";
			depositr2 = "PUSTA";
			depositr3 = "PUSTA";
			creditr1 = "DOST�PNA";
			creditr2 = "DOST�PNA";
			creditr3 = "DOST�PNY";
			dead = 0;
			quest = 0;

//string difficulty;
			do {
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				cout << "Wybierz poziom trudno�ci:" << endl;
				cout << "1. Pocz�tkuj�cy" << endl;
				cout << "2. Podr�nik" << endl;
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


//fake �adowanie
			int loading;
			loading = 0;
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			do {
				int loadingp = (rand() % 100 + 1) % 7;
				if(loadingp == 0) {
					loading++;
				}
				cout << "�adowanie zawarto�ci: " << loading << "%" << endl;
			} while(loading < 100);
			cout << "Za�adowano (PATCH 1.20.12.15beta_release)" << endl << endl;
			system("pause");

//tips
zasady:
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			cout << "\tPodpowied� (1/10)" << endl << endl;
			cout << " Wybieraj�c opcj� podr�y mo�esz napotka� na przeciwnika, otrzyma� zadanie lub znale�� skarb!" << endl<< endl;
			system("pause");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			cout << "\tPodpowied� (2/10)" << endl << endl;
			cout << " Ilo�� do�wiadczenia potrzebna do uzyskania kolejnego poziomu ro�nie wraz z poziomem. \n Cowi�cej ilo�� ta jest zale�na od wybranego poziomu trudno�ci." << endl<< endl;
			system("pause");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			cout << "\tPodpowied� (3/10)" << endl << endl;
			cout << " Nie ka�d� walk� da si� zwyci�y�... \n Staraj si� unika� walk ze statusem \"Pewna �mier�\" i \"Rzut monet�\"." << endl<< endl;
			system("pause");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			cout << "\tPodpowied� (4/10)" << endl << endl;
			cout << " Uwa�aj gdy zaci�gasz kredyt, kt�rego obawiasz si� nie zdo�a� go sp�aci�! \n Nie wywi�zuj�c si� z umowy mo�esz zgromadzi� naprawd� du�y d�ug.." << endl<< endl;
			system("pause");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			cout << "\tPodpowied� (5/10)" << endl << endl;
			cout << " Niekt�re kredyty s� dost�pne dopiero od pewnego poziomu. \n Gdy minimalna warto�� kredytu jest wi�ksza od maksymalnej po prostu zrezygnuj - wr�� gdy zdob�dziesz wy�szy poziom." << endl<< endl;
			system("pause");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			cout << "\tPodpowied� (6/10)" << endl << endl;
			cout << " Uwa�aj na kupno Z�otej koperty! \n Hazard to nie jest bajka i bardzo �atwo jest wyj�� na strat�!" << endl<< endl;
			system("pause");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			cout << "\tPodpowied� (7/10)" << endl << endl;
			cout << " Zdecyduj m�drze kiedy zakupi� Anio�a Str�a! \n Mo�esz go kupi� tylko raz podczas ca�ej rozgrywki!" << endl<< endl;
			system("pause");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			cout << "\tPodpowied� (8/10)" << endl << endl;
			cout << " Rasa i klasa, kt�r� zaraz wybierzesz maj� wp�yw na niekt�re statystyki i mechanizmy gry! \n Kieruj si� zatem przy wyborze g�osem serca i w�asn� ciekawo�ci�!" << endl<< endl;
			system("pause");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			cout << "\tPodpowied� (9/10)" << endl << endl;
			cout << " Uwa�aj na wybieranie zbyt du�ej ilo�ci przeciwnik�w podczas polowania! \n Mo�e to doprowadzi� do niechybnej �mierci!" << endl<< endl;
			system("pause");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			cout << "\tPodpowied� (10/10)" << endl << endl;
			cout << " �wi�tynia to twoje ostatnie ko�o ratunkowe. \n Korzystaj wi�c z niej odpowiedzialnie, je�eli nie chcesz psu� sobie zabawy. \n Jest ona niedost�pna na 3. poziomie trudno�ci." << endl<< endl;
			system("pause");

			do {
				string sg;
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				cout << "Czy jeste� gotowy rozpocz�� rozgrywk� i stawi� czo�a przygodzie?" << endl << endl;
				cout << "1. Oczywi�cie! Zacznijmy ju�!" << endl;
				cout << "2. Nie. Chc� przeczyta� porady raz jeszcze." << endl;
				cout << "3. Wyjd� z gry" << endl << endl;
				cin >> sg;
				if(sg == "1") {
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					cout << "Wi�c ruszajmy!" << endl << endl;
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
			cout << "\"Co si� sta�o?\"" << endl;
			cout << "\"Aaagh moja g�owa..\"" << endl << endl << endl;
			system("pause");
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			cout << " Otwierasz oczy i budzisz si� jakby z wiecznego snu. \n Odnajdujesz si� w zupe�nie nowej, nieznanej ci nigdy wcze�niej rzeczywisto�ci.. \n Twoja obola�a g�owa zdaje ci si� p�ata� figle. \n \"Czy to nadal sen?\" - my�lisz rozgl�daj�c si� po otaczaj�cej ci� puszczy. \n \"Gdzie ja jestem?...\" \n Zastanawiasz si� czy nie uderzy�e� si� ostatnimi czasy w g�ow� zbyt mocno. \n Po kilku minutach niedowierzania w to, co w�a�nie do�wiadczasz postanawiasz si� podnie��. \n Wstajesz i otrzepujesz si� z py�u, jednak�e po chwili ponownie upadasz z braku si�. \n Odnajdujesz le��c� nieopodal ciebie ma�� butelk� wody. \n Pijesz z niej i natychmiast po tym ze zm�czenia pogr��a ci� g��boki sen..." << endl<< endl;
			system("pause");

sandbox:
//string name, race, type;
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			cout << "Jak si� nazywasz?" << endl;
			cin >> name;
			do {
				cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
				cout << "Jakiej jeste� rasy?" << endl;
				cout << "1. Cz�owiek" << endl;
				cout << "2. Ork" << endl;
				cout << "3. Elf" << endl;
				cout << "4. Krasnolud" << endl;
				cout << "5. Goblin" << endl << endl;
				cin >> race;
				if(race=="1") {
					race = "Cz�owiek";
					do {
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
						cout << "Jaka jest twoja klasa?" << endl;
						cout << "1. Wojownik" << endl;
						cout << "2. Obro�ca" << endl;
						cout << "3. Paladyn" << endl;
						cout << "4. Czeladnik" << endl;
						cout << "5. �owca" << endl << endl;
						cin >> type;
						if(type=="1") {
							type = "Wojownik";
							dmg = dmg + 2;
							hp = hp + 6;
							break;
						}
						if(type=="2") {
							type = "Obro�ca";
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
							type = "�owca";
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
						cout << "2. Czy�ciciel" << endl;
						cout << "3. Elf wy�szy" << endl;
						cin >> type;
						if(type=="1") {
							type = "Buntownik";
							dmg = dmg + 4;
							hp = hp + 4;
							break;
						}
						if(type=="2") {
							type = "Czy�ciciel";
							dmg = dmg + 6;
							exp = exp + 50;
							break;
						}
						if(type=="3") {
							type = "Elf wy�szy";
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
						cout << "2. Obro�ca" << endl;
						cout << "3. Maschinmeister" << endl;
						cin >> type;
						if(type=="1") {
							type = "Wojownik";
							dmg = dmg + 4;
							hp = hp + 4;
							break;
						}
						if(type=="2") {
							type = "Obro�ca";
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
				cout << "Posiadasz " << lvlp << " punkt�w do�wiadczenia do rozdysponowania." << endl;
				cout << "Atak: " << dmg << endl;
				cout << "Zdrowie: " << hp << "/" << hpmax << endl;
				do {
					cout << "Ile punkt�w chcesz doda� do ataku?" << endl;
					cin >> ldmg;
					if (ldmg > lvlp) {
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
						cout << "Niestety, nie posiadasz tylu punkt�w do�wiadczenia do rozdysponowania.." << endl;
						cout << "Posiadasz " << lvlp << " punkt�w do�wiadczenia do rozdysponowania." << endl;
						cout << "Atak: " << dmg << endl;
						cout << "Zdrowie: " << hp << "/" << hpmax << endl;
						continue;
					}
					if (ldmg <= lvlp) {
						cout << "Potwierd� ilo��: ";
						cin	>> ldmg2;
						if (ldmg == ldmg2) {
							dmg = dmg + ldmg;
							lvlp = lvlp - ldmg;
							break;
						} else;
						{
							cout << "Ilo�� si� nie zgadza." << endl;
							continue;
						}
					}
				} while(0==0);
			}
			if (lvlp>0) {
				cout << endl << "Posiadasz " << lvlp << " punkt�w do�wiadczenia do rozdysponowania." << endl;
				cout << "Atak: " << dmg << endl;
				cout << "Zdrowie: " << hp << "/" << hpmax << endl;
				do {
					cout << "Ile punkt�w chcesz doda� do zdrowia?" << endl;
					cin >> lhp;
					if (lhp > lvlp) {
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
						cout << "Niestety, nie posiadasz tylu punkt�w do�wiadczenia do rozdysponowania.." << endl;
						cout << "Posiadasz " << lvlp << " punkt�w do�wiadczenia do rozdysponowania." << endl;
						cout << "Atak: " << dmg << endl;
						cout << "Zdrowie: " << hp << "/" << hpmax << endl;
						continue;
					}
					if (lhp <= lvlp) {
						cout << "Potwierd� ilo��: ";
						cin	>> lhp2;
						if (lhp == lhp2) {
							hp = hp + lhp;
							hpmax = hpmax + lhp;
							lvlp = lvlp - lhp;
							break;
						} else;
						{
							cout << "Ilo�� si� nie zgadza." << endl;
							continue;
						}
					}
				} while(0==0);
			}
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			cout << "\tTwoja posta�:" << endl;
			cout << "\t\tImi�:                 " << name << endl;
			cout << "\t\tRasa:                 " << race << endl;
			cout << "\t\tKlasa:                " << type << endl;
			cout << "\tStatystyki:             " << endl;
			cout << "\t\tAtak:                 " << dmg << endl;
			cout << "\t\tZdrowie:              " << hp << "/" << hpmax << endl;
			cout << "\t\tPoziom:               " << lvl << endl;
			cout << "\t\tDo�wiadczenie:        " << exp << "/" << expn << endl;
			cout << "\t\tPunkty do�wiadczenia: " << lvlp << endl;
			cout << "\t\tZ�oto:                " << gold << endl << endl;
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
					cout << "Do uko�czenia LOKATA I pozosta�o 3 przeciwnik�w do pokonania." << endl << endl;
					system("pause");
				}
				if(mobkilled == dtime2 - 3) {
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					cout << "Do uko�czenia LOKATA II pozosta�o 3 przeciwnik�w do pokonania." << endl << endl;
					system("pause");
				}
				if(mobkilled == dtime3 - 3) {
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					cout << "Do uko�czenia LOKATA III pozosta�o 3 przeciwnik�w do pokonania." << endl << endl;
					system("pause");
				}

				float missingg, credit1, credit2, credit3;
				if(mobkilled == ctime1 - 5) {
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					cout << "Do terminu sp�aty chwil�wki pozosta�o 5 przeciwnik�w do pokonania." << endl << endl;
					if (gold >= credit1 && credit1 != 0) {
						cout << "Posiadasz wystarczaj�co ilo�� z�ota do sp�aty kredytu. Udaj si� do sklepu jak najszybciej!" << endl << endl;
					}
					if (gold < credit1) {
						missingg = credit1 - gold;
						cout << "Brakuj�ce z�oto: " << missingg << endl << endl;
					}
					system("pause");
				}
				if(mobkilled == ctime2 - 10) {
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					cout << "Do terminu sp�aty po�yczki pozosta�o 10 przeciwnik�w do pokonania." << endl << endl;
					if (gold >= credit2 && credit2 != 0) {
						cout << "Posiadasz wystarczaj�co ilo�� z�ota do sp�aty kredytu. Udaj si� do sklepu jak najszybciej!" << endl << endl;
					}
					if (gold < credit2) {
						missingg = credit2 - gold;
						cout << "Brakuj�ce z�oto: " << missingg << endl << endl;
					}
					system("pause");
				}
				if(mobkilled == ctime3 - 15) {
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					cout << "Do terminu sp�aty kredytu inwestycyjnego pozosta�o 15 przeciwnik�w do pokonania." << endl << endl;
					if (gold >= credit3 && credit3 != 0) {
						cout << "Posiadasz wystarczaj�co ilo�� z�ota do sp�aty kredytu. Udaj si� do sklepu jak najszybciej!" << endl << endl;
					}
					if (gold < credit3) {
						missingg = credit3 - gold;
						cout << "Brakuj�ce z�oto: " << missingg << endl << endl;
					}
					system("pause");
				}
				if(ctime1 <= mobkilled && ctime1 != 0) {
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					cout << "Czas sp�aty kredytu up�yn��." << endl << endl;
					if(gold < credit1) {
						cout << "Nie uda�o ci si� sp�aci� kredytu." << endl;
						cout << "Tracisz 250% jego warto�ci." << endl << endl;
						gold = gold - 2.5*credit1;
						ctime1 = 0;
					}
					if(gold >= credit1) {
						cout << "Sp�acasz kredyt ze swoich oszcz�dno�ci." << endl << endl;
						gold = gold - credit1;
						creditr1 = "DOST�PNA";
						ctime1 = 0;
					}
					system("pause");

				}
				if(ctime2 <= mobkilled && ctime2 != 0) {
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					cout << "Czas sp�aty kredytu up�yn��." << endl << endl;
					if(gold < credit2) {
						cout << "Nie uda�o ci si� sp�aci� kredytu." << endl;
						cout << "Tracisz 250% jego warto�ci." << endl << endl;
						gold = gold - 2.5*credit2;
						ctime2 = 0;
					}
					if(gold >= credit2) {
						cout << "Sp�acasz kredyt ze swoich oszcz�dno�ci." << endl << endl;
						gold = gold - credit2;
						creditr2 = "DOST�PNA";
						ctime2 = 0;
					}
					system("pause");

				}
				if(ctime3 <= mobkilled  && ctime3 != 0) {
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					cout << "Czas sp�aty kredytu up�yn��." << endl << endl;
					if(gold < credit3) {
						cout << "Nie uda�o ci si� sp�aci� kredytu." << endl;
						cout << "Tracisz 250% jego warto�ci." << endl << endl;
						gold = gold - 2.5*credit3;
						ctime3 = 0;
					}
					if(gold >= credit3) {
						cout << "Sp�acasz kredyt ze swoich oszcz�dno�ci." << endl << endl;
						gold = gold - credit3;
						creditr3 = "DOST�PNY";
						ctime3 = 0;
					}
					system("pause");

				}
				do {
					if(exp>=expn) {
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
						cout << "Gratulacje zdoby�e� poziom " << lvl+1 << "!" << endl;
						exp = exp - expn;
						lvl = lvl + 1;
						lvlp = lvlp + lvl + 2;
						cout << "Otrzymujesz " << lvl + 2 << " punkt�w do�wiadczenia." << endl << endl;
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
				cout << "Pora rusza�.. Przygoda czeka!" << endl << endl;
				cout << "Co planujesz?" << endl;
				cout << "1. Wyruszam w drog�" << endl;
				cout << "2. Sprawdz� swoje umiej�tno�ci" << endl;
				cout << "3. Naucz� si� czego� nowego" << endl;
				cout << "4. Chcia�bym co� kupi�" << endl;
				cout << "5. Id� na polowanie" << endl;
				cout << "6. Id� do �wi�tyni" << endl;
				cout << "7. (Zapisz i wyjd�)" << endl << endl;
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
						cout << "Przemierzaj�c nieokie�znane krainy nowego l�du napotykasz przed sob� dziwnego starca." << endl;
						cout << "Przybyszu! Witaj w �wiecie Avergnon! - s�yszysz wypowiadane s�owa z jego ust dotkni�tych wiekiem" << endl;
q1dialogue1:
						cout << "Zastanawiasz si� sk�d wiedzia�, �e jeste� tu nowy... Jednak tw�j wzrok pada na pewien dziwny przyrz�d, kt�ry dzier�y� w r�kach." << endl << endl;
						string dialogue;
						cout << "1. Co to takiego? (!)" << endl;
						cout << "2. <Przedstaw si�>" << endl;
						cout << "3. Jak si� tu znalaz�e�?" << endl;
						cout << "4. <Odepchnij starca i krocz dalej �cie�k�> (?)" << endl;
						cout << "5. <Odejd�> (x)" << endl << endl;
						cin >> dialogue;
						if(dialogue == "5") {
							quest = quest+1;
							goto core;
						}
						if(dialogue == "2") {
							cout << "\n\n\n\n\n\n\n\n";
							cout << "-Witaj. Nazywam si� " << name << ", a jak ciebie zw�?" << endl;
							cout << "-Nie pytaj o ulew�, p�ki pierwsza kropla nie upadnie na twoj� twarz podr�niku..." << endl << endl;
							string dialogue2;
							cout << "1. S�ucham???" << endl;
							cout << "2. <Udawaj, �e rozumiesz>" << endl << endl;
							cin >> dialogue2;
							if(dialogue2 == "1") {
								cout << "\n\n\n\n\n\n\n\n";
								cout << "-S�ucham???" << endl;
								cout << "-�adne drzewo nie wie, �e w przysz�o�ci mo�e zosta� ksi��k�..." << endl;
								cout << "\n\n\n\n\n\n\n\n";
								cout << "<Kontynuuj..>" << endl;
								goto q1dialogue1;
							}
							if(dialogue2 == "2") {
								cout << "\n\n\n\n\n\n\n\n";
								cout << "-Tak jest mistrzu... Przepraszam za moj� nachalno��." << endl;
								cout << "-Pr�dki tygrys, to sprytny tygrys." << endl;
								cout << "-Prawda, sensei.." << endl;
								cout << "\n\n\n\n\n\n\n\n";
								cout << "<Kontynuuj..>" << endl;
								goto q1dialogue1;
							}
						}
						if(dialogue == "3") {
							cout << "\n\n\n\n\n\n\n\n";
							cout << "-Jak si� tu znalaz�e�?" << endl;
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
							cout << "Napotka�e� " << mob << " na poziomie " << moblvl << "!" << endl;
							cout << mob << " ci� atakuje!" << endl << endl;
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
								cout << name << " zada� cios za " << dmg << " obra�e�!" << endl;
								cout << "Zdrowie przeciwnika: " << mobhp << "/" << mobhpmax << endl << endl;
								cout << "Otrzymujesz " << mobdmg << " obra�e�!" << endl;
								cout << "Twoje zdrowie: " << hp << "/" << hpmax << endl << endl;

							} while(hp>0 && mobhp>0);
							if (hp<=0 && gangel != 1) {
								cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\tKONIEC GRY" << endl;
								cout << "\t\t Zgin��e�" << endl << endl;
								cout << "\n\n\tStatystyki: " << endl;
								cout << "\tAtak:                 " << dmg << endl;
								cout << "\tZdrowie:              " << hp << "/" << hpmax << endl;
								cout << "\tPoziom:               " << lvl << endl;
								cout << "\tDo�wiadczenie:        " << exp << "/" << expn << endl;
								cout << "\tPunkty do�wiadczenia: " << lvlp << endl;
								cout << "\tZ�oto:                " << gold << endl;
								cout << "\tPokonani przeciwnicy: " << mobkilled << endl << endl;
								dead = 1;
								system("pause");
								goto start;
							}
							if(hp<=0 && gangel == 1) {
								cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
								cout << "Zgin��e�..." << endl << endl;
								cout << "Tw�j Anio� Str� zostaje zu�yty. Wracasz do �ywych" << endl << endl;
								hp = 0.5*hpmax;
								gangel = 2;
								system("pause");
							}
							if (mobhp<=0) {
								cout << endl;
								cout << "Gratulacje!! Pokona�e� " << mob <<"!" << endl;
								mobkilled = mobkilled + 1;
								hp = hp + (0.75*dmgtaken);
								exp = exp + mobexp;
								gold = gold + mobg;
								cout << "Otrzymujesz " << mobexp << " do�wiadczenia, " << 0.75*dmgtaken << " zdrowia oraz " << mobg << " z�ota." << endl << endl;
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
										cout << "Gratulacje zdoby�e� poziom " << lvl+1 << "!" << endl;
										exp = exp - expn;
										lvl = lvl + 1;
										lvlp = lvlp + lvl + 2;
										cout << "Otrzymujesz " << lvl + 2 << " punkt�w do�wiadczenia." << endl << endl;
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
								cout << "\tDo�wiadczenie:        " << exp << "/" << expn << endl;
								cout << "\tPunkty do�wiadczenia: " << lvlp << endl;
								cout << "\tZ�oto:                " << gold << endl;
								cout << "\tPokonani przeciwnicy: " << mobkilled << endl << endl;

								system("pause");

							}
						}
						if(dialogue == "1") {
							cout << "\n\n\n\n\n\n\n\n";
							cout << "-Co to takiego?" << endl;
							cout << "-Hmm? Co? Aaa to.. nic wielkiego." << endl;
							cout << "-Mo�esz mi powiedzie� co to jest?" << endl;
							cout << "-No prosz� prosz�, ciekawo�� zabi�a kota.. Nie wida�? To klepsydra." << endl;
							cout << "-Wygl�da na wyj�tkowo star�." << endl;
							cout << "-Dobrze, �e nie przyjmuje pochlebstw, ale komplementem to nie by�o. To moja zabawka. Dosta�em j� gdy by�em jeszcze ma�ym brzd�cem." << endl;
							cout << "-Przepraszam.. nie mia�em tego na my�li." << endl;
							cout << "-Echh. Nie przejmuj si�. Wszyscy tak reaguj�." << endl;
							cout << "-Wszyscy? Kim s� wszyscy?" << endl;
							cout << "-Jak to kim? Nie spotka�e� po drodz� mo�e �adnego ghula czy utopca? Ni chocia� wied�my?" << endl;
							cout << "-Co to znaczy? Umiesz rozmawia� z potworami?" << endl;
							cout << "-Ha. Dobre sobie. To one rozmawiaj� ze mn�!" << endl;
							cout << "-Powiesz mi wreszcie kim jeste�?" << endl;
							cout << "-Ja, jestem kr�lem czasu i przestrzeni.. To dzi�ki temu male�kiemu artefaktowi jestem w stanie podr�owa� przez wymiary." << endl;
							cout << "-A wi�c mo�e wiesz co tutaj robi�?" << endl;
							cout << "-Co ty tutaj robisz? Mo�e powiniene� lepiej zapyta� samego siebie, ha!" << endl;
							cout << "Wracaj�c. Tak jestem w�adc� przestrzeni i jestem w stanie ci powiedzie�, �e twoje wcielenia z innego �wiata nie mia�y tyle szcz�cia co ty." << endl;
							cout << "-O czym ty m�wisz?" << endl;
							cout << "-M�wi� o tym, �e twoje inne wcielenia pozwoli�y sobie mnie zaatakowa� jeszcze wcze�niej ni� ty to zrobi�e�. Oczywi�cie z r�nym skutkiem.." << endl;
							cout << "Jednemu, uda�o si� na tyle, �e zdo�a� mnie wywr�ci� i put�uk� moj� klepsydr�... ale to inna sprawa. Ty tak nie zrobisz." << endl;
							cout << "-Dlaczego mia�bym ci� w og�le atakowa�? Bredzisz starcze." << endl;
							cout << "-Jeszcze nie raz si� spotkamy, a ty wspomnisz moje s�owa.." << endl <<endl;
							system("pause");
							cout << "\n\n\n\n\n\n\n\n";
							cout << "Starzec odchodzi podpieraj�c si� swoj� d�ug� lask� i wiod�c pot�n� brod� po ziemi." << endl;
							cout << "Nie zamierzasz go goni�. Przecie� powiedzia�, �e i tak pr�dzej, czy p�niej jeszcze si� spotkacie." << endl << endl;
							system("pause");


							cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
							cout << "Gratulacje! Zadanie fabularne zako�czone powodzeniem!" << endl;
							cout << "Otrzymujesz 250 do�wiadczenia!" << endl << endl;
							exp = exp + 250;
							quest = quest +1;
							system("pause");


						}

						goto core;
					}//koniec questa1
					if((lvl == 7 || lvl == 8) && quest == 1) {
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
						cout << "Pod��aj�c �cie�k� przez krain� Avergnon napotykasz intryguj�c� polan�." << endl;
						cout << "Zauwa�asz, �e znajduje si� na niej kamienna studnia, do kt�rej co� dziwnego, niezbadanego przyci�ga tw�j wzrok." << endl;
						cout << "Po chwili zauwa�asz jak�� zgarbion� posta�, kt�ra pr�buje nabra� z niej wody." << endl << endl;
						string dialogue;
						cout << "1. Podejd� i zbadaj co si� tam dzieje. (!)" << endl;
						cout << "2. <Odejd�> (x)" << endl << endl;
						cin >> dialogue;
						if(dialogue == "2") {
							quest = quest+1;
							goto core;
						}
						if(dialogue == "1") {
							cout << "\n\n\n\n\n\n\n\n";
							cout << "-O witaj ponownie podr�niku! Zadomowi�e� si� ju� w Avergnon?" << endl;
							cout << "-Ponownie? Kim jeste� starcze?" << endl;
							cout << "-Ech, niekiedy nawet modliszka nie jest w stanie dojrze� swojej ofiary..." << endl;
							cout << "Spotkali�my si� ju� ostatnio. Co� ci �wita?" << endl;
							cout << "-Tak.. chyba ju� kojarz�.. Ale czy m�g�by� przypomnie� mi kim jeste�?" << endl;
							cout << "-Ja, jestem kr�lem czasu i przestrzeni.. To dzi�ki temu male�kiemu artefaktowi jestem w stanie podr�owa� przez wymiary." << endl;
							cout << "-A tak, teraz ju� sobie przypominam. Chyba gdzie� ju� to s�ysza�em." << endl;
							cout << "-Co ci� sprowadza do mojej studni �ycia?" << endl;
q2dialogue1:
							cout << "-Studni �ycia? Sk�d taka nazwa?" << endl;
							cout << "-Nachyl si� nad jej wod�, a sam si� przekonasz." << endl << endl;
							string dialogue1;
							cout << "1. <Nachyl si�> (!)" << endl;
							cout << "2. Nie mo�esz mi po prostu powiedzie�?" << endl;
							cout << "3. <Wskocz do studni> (?)" << endl;
							cin >> dialogue1;
							if(dialogue1 == "3") {
								cout << "\n\n\n\n\n\n\n\n";
								cout << "\t\t Zgin��e�" << endl << endl;
								cout << "\n\n\tStatystyki: " << endl;
								cout << "\tAtak:                 " << dmg << endl;
								cout << "\tZdrowie:              " << hp << "/" << hpmax << endl;
								cout << "\tPoziom:               " << lvl << endl;
								cout << "\tDo�wiadczenie:        " << exp << "/" << expn << endl;
								cout << "\tPunkty do�wiadczenia: " << lvlp << endl;
								cout << "\tZ�oto:                " << gold << endl;
								cout << "\tPokonani przeciwnicy: " << mobkilled << endl << endl;
								system("pause");

								cout << "\n\n\n\n\n\n\n\n";
								cout << "Studnia �ycia zostaje u�yta! Wracasz do �ywych!" << endl << endl;
								goto studnia;

							}
							if(dialogue1 == "2") {
								cout << "\n\n\n\n\n\n\n\n";
								cout << "-Nie mo�esz mi po prostu powiedzie�?" << endl;
								cout << "-Nie. Sam si� przekonaj." << endl;
								cout << "\n\n\n\n\n\n\n\n";
								cout << "<Kontynuuj..>" << endl;
								goto q2dialogue1;
							}
							if(dialogue1 == "1") {
								cout << "\n\n\n\n\n\n\n\n";
								cout << "<Czujesz powiew rze�kiego wiatru. Do twoich nozdrzy dociera wiosenna bryza.>" << endl << endl;
								if(hp == hpmax) {
									hp = hpmax;
									cout << "Leczysz si� do pe�ni si�!" << endl << endl;
								}
								if(hp + 10 != hpmax) {
									hp = hp + 10;
									cout << "Otrzymujesz 10 zdrowia!" << endl << endl;
								}
								cout << "-Snfff. O pierunie! Co to by�o?!" << endl;
								cout << "-Ha ha! M�wi�em aby� spr�bowa�!" << endl;
studnia:
								cout << "-Niez�e cude�ko, nieprawda�?" << endl;
								cout << "-... i to jakie.." << endl;
								cout << "Co tutaj robisz?" << endl;
								cout << "-Mimo, �e jestem panem czas�w, to jednak, jak to m�wi�, staro�� nie rado��! Trzeba si� jako� utrzyma� przy �yciu!" << endl;
								cout << "-Czyli mo�esz umrze�? Co je�li studnia wyschnie?" << endl;
								cout << "-Nic wielkiego. Ka�de zdarzenie w naturze ma swoj� przyczyn�, i swoje nast�pstwo. Kiedy odejd�, zast�pi mnie kto� inny." << endl;
								cout << "-Wiesz ju� kto to b�dzie?" << endl;
								cout << "-..." << endl;
								cout << "\n\n\n\n\n\n\n\n";
								cout << "Starzec odchodzi podpieraj�c si� swoj� d�ug� lask� i wiod�c pot�n� brod� po ziemi." << endl;
								cout << "-Zaczekaj!!" << endl;
								cout << "\n\n\n\n\n\n\n\n";
								cout << "Nie otrzymujesz �adnej odpowiedzi na swoje wo�ania. Nie zamierzasz go goni�. Przeczuwasz, �e i tak kiedy� jeszcze si� spotkacie.." << endl << endl;
								system("pause");


								cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
								cout << "Gratulacje! Zadanie fabularne zako�czone powodzeniem!" << endl;
								cout << "Otrzymujesz 500 do�wiadczenia!" << endl << endl;
								exp = exp + 500;
								quest = quest +1;
								system("pause");

							}
						}

						goto core;
					}//koniec questa2
					if((lvl == 14 || lvl == 15) && quest == 2) {
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
						cout << " Idziesz drog� pod��aj�c za g�osem serca. \n Napotykasz drogowskaz. Tym razem jeste� w stanie odczyta� jego destynacje. \n Twoj� ciekawo�� przykuwa rozleg�y czerwony napis \n\t KARCZMA \"ROZB�JNIK\" \n Po kilku chwilach docierasz do karczmy. \n Szynkasz oferuje ci kufel lokalnego przysmaku. \n Ty jednak nierzadko nie znasz umiaru w piciu... \n Po kilku kolejkach rozp�ta�e� i�cie pija�sk� awantur�. \n Go�cie obrzucaj� si� kuflami, a ty z niepewn� g�ow� ci�gle podjudzasz awanturnik�w. \n Nagle zauwa�asz pewnego starca. Jeden z awanturnik�w zbli�a si� do niego z pi�ciami.." << endl;
						if (gold >= 2) {
							gold = gold - 2;
						}
						cout << "\n\n\n\n\n\n\n\n";
						cout << "<Wstawiasz si� w obronie starca>" << endl << endl;
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
						cout << "Napotka�e� " << mob << " na poziomie " << moblvl << "!" << endl;
						cout << mob << " ci� atakuje!" << endl << endl;
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
							cout << name << " zada� cios za " << dmg << " obra�e�!" << endl;
							cout << "Zdrowie przeciwnika: " << mobhp << "/" << mobhpmax << endl << endl;
							cout << "Otrzymujesz " << mobdmg << " obra�e�!" << endl;
							cout << "Twoje zdrowie: " << hp << "/" << hpmax << endl << endl;

						} while(hp>0 && mobhp>0);
						if (hp<=0 && gangel != 1) {
							cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\tKONIEC GRY" << endl;
							cout << "\t\t Zgin��e�" << endl << endl;
							cout << "\n\n\tStatystyki: " << endl;
							cout << "\tAtak:                 " << dmg << endl;
							cout << "\tZdrowie:              " << hp << "/" << hpmax << endl;
							cout << "\tPoziom:               " << lvl << endl;
							cout << "\tDo�wiadczenie:        " << exp << "/" << expn << endl;
							cout << "\tPunkty do�wiadczenia: " << lvlp << endl;
							cout << "\tZ�oto:                " << gold << endl;
							cout << "\tPokonani przeciwnicy: " << mobkilled << endl << endl;
							dead = 1;
							system("pause");
							goto start;
						}
						if(hp<=0 && gangel == 1) {
							cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
							cout << "Zgin��e�..." << endl << endl;
							cout << "Tw�j Anio� Str� zostaje zu�yty. Wracasz do �ywych" << endl << endl;
							hp = 0.5*hpmax;
							gangel = 2;
							system("pause");
						}
						if (mobhp<=0) {
							cout << endl;
							cout << "Gratulacje!! Pokona�e� " << mob <<"!" << endl;
							mobkilled = mobkilled + 1;
							hp = hp + (0.75*dmgtaken);
							exp = exp + mobexp;
							gold = gold + mobg;
							cout << "Otrzymujesz " << mobexp << " do�wiadczenia, " << 0.75*dmgtaken << " zdrowia oraz " << mobg << " z�ota." << endl << endl;
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
									cout << "Gratulacje zdoby�e� poziom " << lvl+1 << "!" << endl;
									exp = exp - expn;
									lvl = lvl + 1;
									lvlp = lvlp + lvl + 2;
									cout << "Otrzymujesz " << lvl + 2 << " punkt�w do�wiadczenia." << endl << endl;
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
						cout << "\tDo�wiadczenie:        " << exp << "/" << expn << endl;
						cout << "\tPunkty do�wiadczenia: " << lvlp << endl;
						cout << "\tZ�oto:                " << gold << endl;
						cout << "\tPokonani przeciwnicy: " << mobkilled << endl << endl;

						system("pause");

						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
						cout << "-Uff, to wygl�da�o gro�nie.. Dzi�kuj� ci podr�niku." << endl;
						cout << "-Kim jeste� starcze, �eby si� tak nara�a�?!" << endl;
						cout << "Ledwo wyszed�em z tego ca�o ratuj�c twoj� dup�!!" << endl;
						cout << "-Nie denerwuj si� m�odzie�cze.. Przecie� wiesz kim jestem.." << endl;
						cout << "Nie martw si�, przypomn� ci. Ja, jestem kr�lem czasu i przestrzeni.. To dzi�ki temu male�kiemu artefaktowi jestem w stanie podr�owa� przez wymiary." << endl;
						cout << "-Ach tak.. Nie raz ju� to s�ysza�em.." << endl;
						cout << "Przepraszam za m�j gniew.. To przez te wszystkie trunki.. Za du�o mam na g�owie.." << endl;
						cout << "-Nic nie szkodzi. Nawet najwi�ksi mistrzowie kiedy� pope�niaj� b��dy." << endl;
						cout << "Cho� przeprosiny to wa�ne i silne s�owo, to nie ty powiniene� go u�y�. Ja przepraszam, �e nara�am ci� na takie niebezpiecze�stwo." << endl;
						cout << "W ka�dym razie, dzi�kuj� za ratunek." << endl;
						cout << "-Nie dzi�kuj. To by�a dla mnie cenna lekcja. Co ci� tu sprowadza?" << endl;
						cout << "-Jak to co? Przecie� jeste�my w karczmie! My�lisz, �e stary to co? Nie mo�e sobie czasem odsapn��?" << endl;
						cout << "-Nie spodziewa�em si� pija�twa po tobie. Ale skoro ju� tu jeste�my, to mo�e kolejk�?" << endl;
						cout << "-Z przyjemno�ci� podr�niku." << endl << endl;
						system("pause");
						cout << "\n\n\n\n\n\n\n\n";
						cout << "<Pstrykasz palcami na znak dla szynkarza. Przynosi on kolejk� mocnego trunku>" << endl;
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
						cout << "Gratulacje! Zadanie fabularne zako�czone powodzeniem!" << endl;
						cout << "Otrzymujesz 1000 do�wiadczenia!" << endl << endl;
						exp = exp + 1000;
						quest = quest +1;
						system("pause");

						goto core;
					}//koniec questa3
					if((lvl == 25 || lvl == 26) && quest == 3) {
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
						cout << "-Ha ha! Kogo ja widz�!!" << endl;
						cout << "Ile�my si� ju� nie widzieli przyjacielu!!" << endl;
						cout << "-S�ucham?? Kim jeste�? Nie poznaj� ci�!" << endl;
						cout << "-Ech.. Naprawd� masz problemy z pami�ci�.." << endl;
						cout << "Ja, jestem kr�lem czasu i przestrzeni.. To dzi�ki temu male�kiemu artefaktowi jestem w stanie podr�owa� przez wymiary." << endl;
						cout << "Ju� ci �wita?" << endl;
						cout << "-Wiesz.. Tyle si� zmieni�o, �e moja pami�� ju� nie ta.. Nieco wydoro�la�em." << endl;
						cout << "-I te�, nieco wypi�e�.. �mierdzisz rumem." << endl;
						cout << "-Snff snff. Nie wiem o czym m�wisz." << endl;
						cout << "-Ju� ty dobrze wiesz.. Zmieni�e� si� " << name << ". Ju� nie jeste� t� sam� osob�, w kt�rej pok�ada�em nadzieje..." << endl;
						cout << "-Bredzisz starcze. To nadal ten sam ja!" << endl;
						cout << "-Nie. To ju� nie ty. Zosta� wrak cz�owieka, zatraconego w pija�stwie.." << endl;
						cout << "Zwiedzi�em setki, jak nie tysi�ce �wiat�w. Wiele r�wnoleg�ych rzeczywisto�ci, i w ani jednej nie uda�o ci si� wyj�� na prost�." << endl;
						cout << "Myli�em si� my�l��, �e tym razem b�dzie inaczej. Zawiod�em si� na tobie, przyjacielu.." << endl;
						cout << "Nie.. nie jestem ju� twoim przyjacielem.." << endl;
						cout << "\n\n\n\n\n\n\n\n";
						cout << "<Odchodzisz po�piesznym krokiem>" << endl << endl;
						system("pause");

						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
						cout << "Gratulacje! Zadanie fabularne zako�czone powodzeniem!" << endl;
						cout << "Otrzymujesz 2500 do�wiadczenia!" << endl << endl;
						exp = exp + 2500;
						quest = quest +1;
						system("pause");


						goto core;
					}//koniec questa4
					if((lvl == 40 || lvl == 41) && quest == 4) {
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
						cout << "-Witaj w�drowcze! To nasze ostatnie spotkanie.." << endl;
						cout << "Wiem, �e napotka�e� mnie wiele razy, z mniejszym lub wi�kszym skutkiem wys�ucha�e� moich lekcji." << endl;
						cout << "Mimo, �e twoja pami�� mo�e teraz zawodzi�, mam nadziej�, �e wkr�tce dowiesz si� kim jestem." << endl;
						cout << "Ciesz� si�, �e nie przerywasz moich s��w, albowiem s� one nadwyraz wa�ne." << endl;
						cout << "Jeste� ju� naprawd� wprawionym i do�wiadczonym wojownikiem. Wiele napotka�e� po drodz�, aby tu dotrze�." << endl;
						cout << "Wiele potu, krwi i wylanych �ez zosta�o przez ciebie przelanych, aby znale�� si� tu gdzie jeste�." << endl;
						cout << "Ja, niestety ju� d�ugo tu nie pob�d�. Umieram. Lecz przed �mierci�, chce ci powiedzie�, �e mimo wszystko by�e� dobrym uczniem." << endl;
						cout << "Nauczy�em ci� wszystkiego, co by�o w mojej mocy, a teraz pragn� by� mnie zast�pi�." << endl;
						cout << "Prosz�, we� t� klepsydr�. Uczy� z ni� co uwa�asz za s�uszn�. Pami�taj jednak, jak� moc dzier�ysz w swoich r�kach." << endl <<endl;
						cout << "Od teraz jeste� Panem Czasu i Przestrzeni, kr�lu..." << endl << endl;
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
						cout << "Gratulacje! W�a�nie uko�czy�e� Avergnon!!" << endl << endl;
						cout << "Wielkie \"DZI�KUJEMY\" sk�adamy na twoje r�c� za dotrwanie do tego momentu!" << endl;
						cout << "Razem ca�ym zespo�em, mamy nadziej�, �e doceni�e� nasz� prac�, a rozgrywka ci si� podoba�a!" << endl;
						cout << "Gratulujemy wytrwa�o�ci!" << endl << endl;
						cout << "\t Dzi�kujemy za zainteresowanie nasz� produkcj� <3" << endl << endl;
						cout << "Autorzy:" << endl;
						int credits;
						credits = (rand() % 6 + 1);
						if(credits == 1) {
							cout << "Dawid Pawlik" << endl;
							cout << "Jakub W�jcik" << endl;
							cout << "Karolina Borowiec" << endl;
						}
						if(credits == 2) {
							cout << "Dawid Pawlik" << endl;
							cout << "Karolina Borowiec" << endl;
							cout << "Jakub W�jcik" << endl;
						}
						if(credits == 3) {
							cout << "Jakub W�jcik" << endl;
							cout << "Dawid Pawlik" << endl;
							cout << "Karolina Borowiec" << endl;
						}
						if(credits == 4) {
							cout << "Jakub W�jcik" << endl;
							cout << "Karolina Borowiec" << endl;
							cout << "Dawid Pawlik" << endl;
						}
						if(credits == 5) {
							cout << "Karolina Borowiec" << endl;
							cout << "Dawid Pawlik" << endl;
							cout << "Jakub W�jcik" << endl;
						}
						if(credits == 6) {
							cout << "Karolina Borowiec" << endl;
							cout << "Jakub W�jcik" << endl;
							cout << "Dawid Pawlik" << endl;
						}
						cout << endl;
						system("pause");

						string end;
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
						cout << "Mo�esz dalej kontynuowa� przygod� w Avergnon mimo zako�czenia linii fabularnej!" << endl;
						cout << "1. Kontynuuj" << endl;
						cout << "2. Wyj�cie" << endl << endl;
						cin >> end;
						if(end == "2") {
							goto zapisywanie;
						}
						if(end == "1") {
							cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
							cout << "Gratulacje! Zadanie fabularne zako�czone powodzeniem!" << endl;
							cout << "Otrzymujesz 15000 do�wiadczenia i 5000 z�ota!" << endl << endl;
							exp = exp + 15000;
							gold = gold + 5000;
							quest = quest +1;
							system("pause");
						}

						goto core;
					}//koniec questline (cz�owiek)

































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
							location = " Przedzierasz si� w g��b lasu. \n Wsz�dzie wok� otacza ci� dzika przyroda. \n Do twoich uszu docieraj� d�wi�ki �wiergotania ptak�w. \n Chrust z ka�dym krokiem wydaje coraz g�o�niejsze trzaski. \n Nagle przed sob� dostrzegasz co� dziwnego...";

							int forest = (rand() % 3 + 1);
							if(forest == 1) {
								mob = "Wataha wilk�w";
								moba = (rand() % 7 + 3);
								mobhp = 7 + 0.5*moblvl * moba;
								mobhpmax = mobhp;
								mobdmg = 3 + 0.3*moblvl * moba;
								mobg = moblvl * 5;
							}
							if(forest == 2) {
								mob = "Nied�wied�";
								mobhp = 30 + 0.9*moblvl;
								mobhpmax = mobhp;
								mobdmg = 6 + 0.5*moblvl;
								mobg = moblvl * 5;
							}
							if(forest == 3) {
								mob = "Rozw�cieczony knur";
								mobhp = (12 + 0.8*moblvl);
								mobhpmax = mobhp;
								mobdmg = 4.5 + 1.15*moblvl;
								mobg = moblvl * 5;
							}

						}
						if (loc >= 21 && loc <= 25) {

//lochy
							location = " Przed sob� widzisz tajemniczy otw�r w ziemi. \n Zagl�dasz do niego, po czym twemu wzrokowi ukazuje si� stara drabina. \n Schodzisz po niej w g��b przepa�ci, jak antylopa w paszcze lwa. \n Po zej�ciu z drabiny dostrzegasz przed sob� metalowe wi�zienne drzwi. Wygl�daj� na otwarte...";

							int dungeon = (rand() % 3 + 1);
							if(dungeon == 1) {
								mob = "Grupa bandyt�w";
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
								mob = "Golem stra�niczy";
								mobhp = 70 + 3*moblvl;
								mobhpmax = mobhp;
								mobdmg = 4 + 0.45*moblvl ;
								mobg = moblvl * 10;
							}

						}
						if (loc >= 26 && loc <= 39) {

//wie�
							location = " Przemierzaj�c poln� drog� napotykasz drogowskaz. \n Nie jeste� w stanie odczyta� napisu... Wydaje si� by� zapisany w nieznanym ci j�zyku. \n Jednak ze wzgl�du na swoj� piekieln� ciekawo�� pod��asz za nim. \n Po kilkuset krokach docierasz do wsi. \n Pocz�tkowo wydaje ci si� opuszczona, ale czy na pewno?";

							int village = (rand() % 4 + 1);
							if(village == 1) {
								mob = "Grupa bandyt�w";
								moba = (rand() % 2 + 2);
								mobhp = 8 + 1.1*moblvl * moba;
								mobhpmax = mobhp;
								mobdmg = 8 + 0.3*moblvl * moba;
								mobg = moblvl * 5 + moblvl * moba;
							}
							if(village == 2) {
								mob = "Grupa ch�op�w";
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

//ob�z bandyt�w
							location = " Przemierzaj�c tereny tej dzikiej krainy s�yszysz gdzie� nieopodal g�osy. \n Wydaje si�, �e to g�osy ludzkie, jednak�e nie jeste� w stanie nic zrozumie�. \n Mo�liwe, �e wykrzykuje je kto� w nieznanym ci j�zyku. \n Idziesz jednak za ich �ladem, by sprawdzi� co si� dzieje. \n Po chwili wpadasz w sid�a... \n Zosta�e� schwytany przez zgraj� bandyt�w!";
							hp = hp - 5;

							mob = "Grupa bandyt�w";
							moba = (rand() % 3 + 3);
							mobhp = 8 + 1.1*moblvl * moba;
							mobhpmax = mobhp;
							mobdmg = 10 + 0.3*moblvl * moba;
							mobg = moblvl * 5 + moblvl * moba;

						}
						if (loc >= 49 && loc <= 50) {

//polana
							location = " Przemierzaj�c chaszcze, lasy i moczary padasz z wyci�czenia.. \n Chcia�by� znale�� jak�� Oaz� w g�stwinie, kt�ra ci� otacza. \n Nagle twym ocz� ukazuje si� �wiat�o dzienne. \n Promyki s�o�ca g�adz� twoj� oblan� potem, wycie�czon� twarz. \n Docierasz na rozleg�� polan� przy dzikim strumyku. \n G�adka, wolnorosn�ca trawa przyjemnie �askocze twoje poranione stopy. \n Czy w takim raju mo�e czycha� niebezpiecze�stwo?";
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
							location = " Przemierasz klifowe wybrze�e w poszukiwaniu skarb�w. \n Jednak�e twoim oczom ukazuje si� wielka jama w skale. \n Nie by�by� sob� jakby� tam nie wlaz�.. \n Po chwili znajdujesz si� w jaskini. \n Szcz�cie, �e posiadasz pochodnie..";

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
								mob = "Nied�wied�";
								mobhp = 30 + 0.9*moblvl;
								mobhpmax = mobhp;
								mobdmg = 6 + 0.5*moblvl;
								mobg = moblvl * 5;
							}
							if(cave == 3) {
								mob = "R�j Arachnoid�w";
								moba = (rand() % 6 + 3);
								mobhp = 6 + 0.65*moblvl * moba;
								mobhpmax = mobhp;
								mobdmg = 3 + 1.3*moblvl * moba ;
								mobg = moblvl * 5;
							}

						}
						if (loc >= 61 && loc <= 75) {

//chata w lesie
							location = " Przemierzaj�c las twoim oczom ukazuje si� zgrabna chatka. \n Wydaje si� by� do�� zaniedban�. Dochodz� z niej jednak intryguj�ce ci� d�wi�ki. \n Jako do�wiadczony �owca przyg�d szybko orientujesz si� co si� dzieje.. \n Ju� wiesz, �e czeka ci� \"leczenie\" likantropii czystym srebrem.";

							mob = "Wilko�ak";
							mobhp = 15 + 1.9*moblvl;
							mobhpmax = mobhp;
							mobdmg = 8 + 0.7*moblvl ;
							mobg = moblvl * 5;
						}
						if (loc >= 76 && loc <= 90) {

//bagno
							location = " Cholerne moczary... \n Jeste� ca�y pokryty b�otem i z wielk� trudno�ci� przedzierasz si� przez podtopione tereny bagna. \n Musisz jednak prze� do przodu. W ko�cu nie chcemy by nas tu noc zasta�a. \n Niestety uderzasz si� o co� w nog�.. \n Zerkasz pod wod� by obejrze� co stanowi�o dla ciebie t� przeszkod�.. \n\n\t ODNAJDUJESZ SKRZYNK� \n\n Po chwili jednak tw�j wzrok kieruje si� na co� innego...";
							hp = hp - 0.25;
							gold = gold + 5;

							int swamp = (rand() % 4 + 1);
							if(swamp == 1) {
								mob = "Wied�ma";
								mobhp = (13 + 1.13*moblvl);
								mobhpmax = mobhp;
								mobdmg = 6 + 0.66*moblvl ;
								mobg = moblvl * 6.66;
							}
							if(swamp == 2) {
								mob = "Grupa ch�op�w";
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
								mob = "Stado Utopc�w";
								moba = (rand() % 5 + 2);
								mobhp = 9 + moblvl * moba;
								mobhpmax = mobhp;
								mobdmg = 6 + 0.4*moblvl * moba;
								mobg = moblvl * 5;
							}

						}
						if (loc >= 91 && loc <= 92) {
//karczma
							location = " Idziesz drog� pod��aj�c za g�osem serca. \n Napotykasz drogowskaz. Tym razem jeste� w stanie odczyta� jego destynacje. \n Twoj� ciekawo�� przykuwa rozleg�y czerwony napis \n\t KARCZMA \"ROZB�JNIK\" \n Po kilku chwilach docierasz do karczmy. \n Szynkasz oferuje ci kufel lokalnego przysmaku. \n Ty jednak nierzadko nie znasz umiaru w piciu... \n Po kilku kolejkach rozp�ta�e� i�cie pija�sk� awantur�. \n Go�cie obrzucaj� si� kuflami, a ty z niepewn� g�ow� ci�gle podjudzasz awanturnik�w. \n Nagle jeden zbli�a si� do ciebie z pi�ciami..";
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
							location = " Na swoim w�drownym szlaku napotykasz ruiny przydro�nej warowni. \n Zamierzasz rozejrze� si� po nich w poszukiwaniu �akomych k�sk�w w postaci niema�ej ilo�ci z�ota w skarbcach. \n Po wielogodzinnych przeszukiwaniach wapiennych mur�w twierdzy, piwnic pokrytych g�st� sieci� paj�czyn, jak i kunsztownych pokoi, kt�re niestety kto� z�upi� przed tob� wydaje ci si� �e nic ju� nie znajdziesz. \n A jednak...";

							mob = "Golem stra�niczy";
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
							cout << "Napotka�e� " << mob << " na poziomie " << moblvl << "!" << endl;
							cout << mob << " ci� atakuje!" << endl << endl;


							float d;
							string wchance;
							d = hp/mobdmg - mobhp/dmg;
							if(d>=3) {
								wchance = "Pewne zwyci�stwo!";
							}
							if(d>1 && d < 3) {
								wchance = "Lekka przewaga";
							}
							if(d >= -1 && d <= 1) {
								wchance = "\"Rzut monet�\"";
							}
							if(d<-1) {
								wchance = "Pewna �mier�";
							}
							cout << "Szans� na wygran�: " << wchance << endl << endl;

							cout << "Co robisz?" << endl;
							cout << "1. Walcz�!!!" << endl;
							cout << "2. Uciekam.. (Tracisz " << pexp << "% maksymalnego do�wiadczenia)" << endl << endl;
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
									cout << name << " zada� cios za " << dmg << " obra�e�!" << endl;
									cout << "Zdrowie przeciwnika: " << mobhp << "/" << mobhpmax << endl << endl;
									cout << "Otrzymujesz " << mobdmg << " obra�e�!" << endl;
									cout << "Twoje zdrowie: " << hp << "/" << hpmax << endl << endl;


								} while(hp>0 && mobhp>0);

								if (hp<=0 && gangel != 1) {
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\tKONIEC GRY" << endl;
									cout << "\t\t Zgin��e�" << endl << endl;
									cout << "\n\n\tStatystyki: " << endl;
									cout << "\tAtak:                 " << dmg << endl;
									cout << "\tZdrowie:              " << hp << "/" << hpmax << endl;
									cout << "\tPoziom:               " << lvl << endl;
									cout << "\tDo�wiadczenie:        " << exp << "/" << expn << endl;
									cout << "\tPunkty do�wiadczenia: " << lvlp << endl;
									cout << "\tZ�oto:                " << gold << endl;
									cout << "\tPokonani przeciwnicy: " << mobkilled << endl << endl;
									dead = 1;
									system("pause");
									goto start;
								}
								if(hp<=0 && gangel == 1) {
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
									cout << "Zgin��e�..." << endl << endl;
									cout << "Tw�j Anio� Str� zostaje zu�yty. Wracasz do �ywych" << endl << endl;
									hp = 0.5*hpmax;
									gangel = 2;
									system("pause");
								}
								if (mobhp<=0) {
									cout << endl;
									cout << "Gratulacje!! Pokona�e� " << mob <<"!" << endl;
									mobkilled = mobkilled + 1;
									hp = hp + (0.75*dmgtaken);
									exp = exp + mobexp;
									gold = gold + mobg;
									cout << "Otrzymujesz " << mobexp << " do�wiadczenia, " << 0.75*dmgtaken << " zdrowia oraz " << mobg << " z�ota." << endl << endl;
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
								cout << "Tracisz " << pexp/100*expn << " do�wiadczenia.." << endl;
								break;
							}
						} while (hp>0);

//levelowanie
						do {
							if(exp>=expn) {
								cout << "Gratulacje zdoby�e� poziom " << lvl+1 << "!" << endl;
								exp = exp - expn;
								lvl = lvl + 1;
								lvlp = lvlp + lvl + 2;
								cout << "Otrzymujesz " << lvl + 2 << " punkt�w do�wiadczenia." << endl << endl;
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
						cout << "\tDo�wiadczenie:        " << exp << "/" << expn << endl;
						cout << "\tPunkty do�wiadczenia: " << lvlp << endl;
						cout << "\tZ�oto:                " << gold << endl;
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
							trc = "z�ota";

						}
						if (tr >= 21 && tr <= 40) {

							treasure = "Tajemnicza butelka";
							int bottle = (rand() % (10*lvl) + 40 );
							exp = exp + bottle;
							trv = bottle;
							trc = "do�wiadczenia";

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
						cout << "Gratulacje odnalaz�e� " << treasure << "!" << endl;
						cout << "Znaleziony przedmiot da� ci " << trv << " " << trc << "." << endl << endl;
						system("pause");

					}


				}

//statystyki
				if(wtd == "2") {
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					cout << "\tTwoja posta�:" << endl;
					cout << "\t\tImi�:                 " << name << endl;
					cout << "\t\tRasa:                 " << race << endl;
					cout << "\t\tKlasa:                " << type << endl;
					cout << "\tStatystyki:             " << endl;
					cout << "\t\tAtak:                 " << dmg << endl;
					cout << "\t\tZdrowie:              " << hp << "/" << hpmax << endl;
					cout << "\t\tPoziom:               " << lvl << endl;
					cout << "\t\tDo�wiadczenie:        " << exp << "/" << expn << endl;
					cout << "\t\tPunkty do�wiadczenia: " << lvlp << endl;
					cout << "\t\tZ�oto:                " << gold << endl;
					cout << "\t\tPokonani przeciwnicy: " << mobkilled << endl << endl;
					system("pause");
				}


//rozdawanie lvlp
				if(wtd == "3") {
					float ldmg, lhp, ldmg2, lhp2;
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					if (lvlp>0) {
						cout << "Posiadasz " << lvlp << " punkt�w do�wiadczenia do rozdysponowania." << endl;
						cout << "Atak: " << dmg << endl;
						cout << "Zdrowie: " << hp << "/" << hpmax << endl;
						do {
							cout << "Ile punkt�w chcesz doda� do ataku?" << endl;
							cin >> ldmg;
							if (ldmg > lvlp) {
								cout << "Niestety, nie posiadasz tylu punkt�w do�wiadczenia do rozdysponowania.." << endl;
								cout << "Posiadasz " << lvlp << " punkt�w do�wiadczenia do rozdysponowania." << endl;
								cout << "Atak: " << dmg << endl;
								cout << "Zdrowie: " << hp << "/" << hpmax << endl;
								continue;
							}
							if (ldmg <= lvlp) {
								cout << "Potwierd� ilo��: ";
								cin	>> ldmg2;
								if (ldmg == ldmg2) {
									dmg = dmg + ldmg;
									lvlp = lvlp - ldmg;
									break;
								} else;
								{
									cout << "Ilo�� si� nie zgadza." << endl;
									continue;
								}
							}
						} while(0==0);
					}
					if (lvlp>0) {
						cout << endl << "Posiadasz " << lvlp << " punkt�w do�wiadczenia do rozdysponowania." << endl;
						cout << "Atak: " << dmg << endl;
						cout << "Zdrowie: " << hp << "/" << hpmax << endl;
						do {
							cout << "Ile punkt�w chcesz doda� do zdrowia?" << endl;
							cin >> lhp;
							if (lhp > lvlp) {
								cout << "Niestety, nie posiadasz tylu punkt�w do�wiadczenia do rozdysponowania.." << endl;
								cout << "Posiadasz " << lvlp << " punkt�w do�wiadczenia do rozdysponowania." << endl;
								cout << "Atak: " << dmg << endl;
								cout << "Zdrowie: " << hp << "/" << hpmax << endl;
								continue;
							}
							if (lhp <= lvlp) {
								cout << "Potwierd� ilo��: ";
								cin	>> lhp2;
								if (lhp == lhp2) {
									hp = hp + lhp;
									hpmax = hpmax + lhp;
									lvlp = lvlp - lhp;
									break;
								} else;
								{
									cout << "Ilo�� si� nie zgadza." << endl;
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
					cout << "3. Wr�� do menu" << endl << endl;
					cin >> shop;

					if (shop == "1") {

//sklep
						string shopc, item, itemc;
						float itemp;
						do {

							do {
								if(exp>=expn) {
									cout << "Gratulacje zdoby�e� poziom " << lvl+1 << "!" << endl;
									exp = exp - expn;
									lvl = lvl + 1;
									lvlp = lvlp + lvl + 2;
									cout << "Otrzymujesz " << lvl + 2 << " punkt�w do�wiadczenia." << endl << endl;
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
							cout << "SKLEP: \t\t\t\t  Z�OTO: " << gold <<  endl << endl;
							cout << "0. \tWr�� do menu" << endl << endl << endl;
							cout << "1. \tMikstura zdrowia      --- 20 sztuk z�ota" << endl;
							cout << "\t   Odnawia 3 punkty brakuj�cego zdrowia" << endl << endl;
							cout << "2. \tMikstura �ycia        --- 50 sztuk z�ota" << endl;
							cout << "\t   Odnawia 2% maksymalnego zdrowia" << endl << endl;
							cout << "3. \tNektar odnowy         --- 600 sztuk z�ota" << endl;
							cout << "\t   Odnawia 50% brakuj�cego zdrowia" << endl << endl;
							cout << "4. \tNapar mocy            --- 120 sztuk z�ota" << endl;
							cout << "\t   Dodaje 5% ataku (minimum 3 ataku)" << endl << endl;
							cout << "5. \tEliksir zdolno�ci     --- 580 sztuk z�ota" << endl;
							cout << "\t   Dodaje punkty do�wiadczenia w zale�no�ci od poziomu postaci" << endl << endl;
							cout << "6. \tKsi�ga umiej�tno�ci   --- 25 sztuk z�ota" << endl;
							cout << "\t   Dodaje 1 punkt do�wiadczenia"  << endl << endl;
							cout << "7. \tKsi��ka podr�nika    --- 70 sztuk z�ota" << endl;
							cout << "\t   Dodaje 25% maksymalnego do�wiadczenia (maksimum 700)"  << endl << endl;
							cout << "8. \tZ�ota koperta         --- 150 sztuk z�ota" << endl;
							cout << "\t   Zawiera od 50 do 300 sztuk z�ota"  << endl << endl;
							cout << "9. \tEliksir waleczno�ci   --- 150 sztuk z�ota" << endl;
							cout << "\t   Zwi�ksza atak o 15% na nast�pne 10 walk"  << endl << endl;
							cout << "10.\tEliksir wytrzyma�o�ci --- 420 sztuk z�ota" << endl;
							cout << "\t   Zwi�ksza zdrowie o 10% (mo�e przekroczy� limit zdrowia)"  << endl << endl;
							cout << "11.\tAnio� Str�           --- 1500 sztuk z�ota" << endl;
							cout << "\t   Po otrzymaniu letalnych obra�e� leczysz si� do 50% maksymalnego zdrowia"  << endl << endl;
							cin >> shopc;
							if(shopc == "0") {
								break;
							}
							if(shopc == "1") {
								item = "Mikstura zdrowia";
								itemp = 20;
								if(gold < itemp) {
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
									cout << "Nie posiadasz wystarczaj�cej ilo�ci z�ota" << endl;
									system("pause");
								} else {
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
									cout << "Potwierd� zakup" << endl;
									cout << "Przedmiot: " << item <<"\tCena: " << itemp << endl << endl;
									cout << "1. Potwierd�" << endl;
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
								item = "Mikstura �ycia";
								itemp = 50;
								if(gold < itemp) {
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
									cout << "Nie posiadasz wystarczaj�cej ilo�ci z�ota" << endl;
									system("pause");
								} else {
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
									cout << "Potwierd� zakup" << endl;
									cout << "Przedmiot: " << item <<"\tCena: " << itemp << endl << endl;
									cout << "1. Potwierd�" << endl;
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
									cout << "Nie mo�esz zakupi� Nektaru odnowy b�d�c pod wyp�ywem Eliksiru wytrzyma�o�ci." << endl << endl;
									system("pause");
								} else {
									if(gold < itemp) {
										cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
										cout << "Nie posiadasz wystarczaj�cej ilo�ci z�ota" << endl;
										system("pause");
									} else {
										cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
										cout << "Potwierd� zakup" << endl;
										cout << "Przedmiot: " << item <<"\tCena: " << itemp << endl << endl;
										cout << "1. Potwierd�" << endl;
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
									cout << "Nie posiadasz wystarczaj�cej ilo�ci z�ota" << endl;
									system("pause");
								} else {
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
									cout << "Potwierd� zakup" << endl;
									cout << "Przedmiot: " << item <<"\tCena: " << itemp << endl << endl;
									cout << "1. Potwierd�" << endl;
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
								item = "Eliksir zdolno�ci";
								itemp = 580;
								if(gold < itemp) {
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
									cout << "Nie posiadasz wystarczaj�cej ilo�ci z�ota" << endl;
									system("pause");
								} else {
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
									cout << "Potwierd� zakup" << endl;
									cout << "Przedmiot: " << item <<"\tCena: " << itemp << endl << endl;
									cout << "1. Potwierd�" << endl;
									cout << "2. Anuluj" << endl;
									cin >> itemc;
									if(itemc == "1") {
										gold = gold - itemp;
										lvlp = lvlp + lvl + 2;
									}
								}
							}
							if(shopc == "6") {
								item = "Ksi�ga umiej�tno�ci";
								itemp = 25;
								if(gold < itemp) {
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
									cout << "Nie posiadasz wystarczaj�cej ilo�ci z�ota" << endl;
									system("pause");
								} else {
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
									cout << "Potwierd� zakup" << endl;
									cout << "Przedmiot: " << item <<"\tCena: " << itemp << endl << endl;
									cout << "1. Potwierd�" << endl;
									cout << "2. Anuluj" << endl;
									cin >> itemc;
									if(itemc == "1") {
										gold = gold - itemp;
										lvlp = lvlp + 1;
									}
								}
							}
							if(shopc == "7") {
								item = "Ksi�ga podr�nika";
								itemp = 70;
								if(gold < itemp) {
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
									cout << "Nie posiadasz wystarczaj�cej ilo�ci z�ota" << endl;
									system("pause");
								} else {
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
									cout << "Potwierd� zakup" << endl;
									cout << "Przedmiot: " << item <<"\tCena: " << itemp << endl << endl;
									cout << "1. Potwierd�" << endl;
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
								item = "Z�ota koperta";
								itemp = 150;
								if(gold < itemp) {
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
									cout << "Nie posiadasz wystarczaj�cej ilo�ci z�ota" << endl;
									system("pause");
								} else {
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
									cout << "Potwierd� zakup" << endl;
									cout << "Przedmiot: " << item <<"\tCena: " << itemp << endl << endl;
									cout << "1. Potwierd�" << endl;
									cout << "2. Anuluj" << endl;
									cin >> itemc;
									if(itemc == "1") {
										gold = gold - itemp;
										int gift = (rand()%301 + 0);
										gold = gold + gift;
										cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
										cout << "Otrzymujesz " << gift << " sztuk z�ota!" << endl;
										system("pause");
									}
								}
							}
							if(shopc == "9") {
								item = "Eliksir waleczno�ci";
								itemp = 150;
								if(gold < itemp) {
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
									cout << "Nie posiadasz wystarczaj�cej ilo�ci z�ota" << endl;
									system("pause");
								} else {
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
									cout << "Potwierd� zakup" << endl;
									cout << "Przedmiot: " << item <<"\tCena: " << itemp << endl << endl;
									cout << "1. Potwierd�" << endl;
									cout << "2. Anuluj" << endl;
									cin >> itemc;
									if(itemc == "1") {
										dmgpotion = dmgpotion + 10;
									}
								}
							}
							if(shopc == "10") {
								item = "Eliksir wytrzyma�o�ci";
								itemp = 420;
								if(gold < itemp) {
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
									cout << "Nie posiadasz wystarczaj�cej ilo�ci z�ota" << endl;
									system("pause");
								} else {
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
									cout << "Potwierd� zakup" << endl;
									cout << "Przedmiot: " << item <<"\tCena: " << itemp << endl << endl;
									cout << "1. Potwierd�" << endl;
									cout << "2. Anuluj" << endl;
									cin >> itemc;
									if(itemc == "1") {
										gold = gold - itemp;
										hp = 1.1*hp;
									}
								}
							}
							if(shopc == "11") {
								item = "Anio� Str�";
								itemp = 1500;
								if(gangel == 1) {
									cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
									cout << "Posiadasz ju� Anio�a Str�a!" << endl;
									system("pause");
								}
								if(gangel == 0) {
									if(gold < itemp) {
										cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
										cout << "Nie posiadasz wystarczaj�cej ilo�ci z�ota" << endl;
										system("pause");
									} else {
										cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
										cout << "Potwierd� zakup" << endl;
										cout << "Przedmiot: " << item <<"\tCena: " << itemp << endl << endl;
										cout << "1. Potwierd�" << endl;
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
									cout << "Ju� kiedy� zu�y�e� Anio�a Str�a!" << endl;
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
								cout << "Wybierz lokat�:" << endl;
								cout << "1.\tLOKATA I   - Kr�tkoterminowa" << "\t" << depositr1 << endl;
								cout << "2.\tLOKATA II  - Zwyk�a         " << "\t" << depositr2 << endl;
								cout << "3.\tLOKATA III - D�ugoterminowa " << "\t" << depositr3 << endl;
								cout << "4. Wr�� do menu" << endl << endl;
								cin >> depositc;

								if (depositc == "1") {
									if (depositr1 == "GOTOWA") {
										gold = gold + deposit1;
										cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
										cout << "Otrzymujesz " << deposit1 << " sztuk z�ota!" << endl << endl;
										dtime1 = 0;
										depositr1 = "PUSTA";
										system("pause");
										break;
									}
									if (depositr1 == "W TRAKCIE") {
										cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
										cout << "Lokata nie jest gotowa do wyp�acenia." << endl;
										cout << "Do zrealizowania lokaty pozosta�o " << dtime1 - mobkilled << " przeciwnik�w do pokonania." << endl << endl;
										system("pause");
										continue;
									}
									if (depositr1 == "PUSTA") {
										cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
										cout << "LOKATA I jest lokat� kr�tkoterminow� o oprocentowaniu 2,5%" << endl;
										cout << "Mo�na j� odebra� po zabiciu 10 przeciwnik�w" << endl << endl;
										cout << "Czy chcesz skorzysta� z tej lokaty?" << endl << endl;
										cout << "1. Tak" << endl;
										cout << "2. Obejrz� jeszcze inne" << endl << endl;
										cin >> dconfirm;

										if (dconfirm == "1") {
											cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
											cout << "Ile z�ota chcia�by� zainwestowa� na t� lokat�?" << endl << endl;
											cin >> deposit1;
											if(deposit1 <= gold) {
												cout << endl << endl;
												dg = deposit1;
												deposit1 = deposit1*1.025;
												cout << "Przy takiej ilo�ci z�ota po zrealizowaniu lokaty otrzymasz " << deposit1 << " sztuk z�ota." <<endl << endl;
												cout << "Czy zgadasz si� na takie warunki lokaty?" << endl;
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
												cout << "Nie posiadasz takiej ilo�ci z�ota!" << endl;
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
										cout << "Otrzymujesz " << deposit2 << " sztuk z�ota!" << endl << endl;
										dtime2 = 0;
										depositr2 = "PUSTA";
										system("pause");
										break;
									}
									if (depositr2 == "W TRAKCIE") {
										cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
										cout << "Lokata nie jest gotowa do wyp�acenia." << endl << endl;
										cout << "Do zrealizowania lokaty pozosta�o " << dtime2 - mobkilled << " przeciwnik�w do pokonania." << endl << endl;
										system("pause");
										continue;
									}
									if (depositr2 == "PUSTA") {
										cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
										cout << "LOKATA II jest lokat� zwyk�� o oprocentowaniu 10%" << endl;
										cout << "Mo�na j� odebra� po zabiciu 25 przeciwnik�w" << endl << endl;
										cout << "Czy chcesz skorzysta� z tej lokaty?" << endl << endl;
										cout << "1. Tak" << endl;
										cout << "2. Obejrz� jeszcze inne" << endl << endl;
										cin >> dconfirm;

										if (dconfirm == "1") {
											cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
											cout << "Ile z�ota chcia�by� zainwestowa� na t� lokat�?" << endl << endl;
											cin >> deposit2;
											if(deposit2 <= gold) {
												cout << endl << endl;
												dg = deposit2;
												deposit2 = deposit2*1.1;
												cout << "Przy takiej ilo�ci z�ota po zrealizowaniu lokaty otrzymasz " << deposit2 << " sztuk z�ota." <<endl << endl;
												cout << "Czy zgadasz si� na takie warunki lokaty?" << endl;
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
												cout << "Nie posiadasz takiej ilo�ci z�ota!" << endl;
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
										cout << "Otrzymujesz " << deposit3 << " sztuk z�ota!" << endl << endl;
										dtime3 = 0;
										depositr3 = "PUSTA";
										system("pause");
										break;
									}
									if (depositr3 == "W TRAKCIE") {
										cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
										cout << "Lokata nie jest gotowa do wyp�acenia." << endl << endl;
										cout << "Do zrealizowania lokaty pozosta�o " << dtime3 - mobkilled << " przeciwnik�w do pokonania." << endl << endl;
										system("pause");
										continue;
									}
									if (depositr3 == "PUSTA") {
										cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
										cout << "LOKATA I jest lokat� kr�tkoterminow� o oprocentowaniu 25%" << endl;
										cout << "Mo�na j� odebra� po zabiciu 50 przeciwnik�w" << endl << endl;
										cout << "Czy chcesz skorzysta� z tej lokaty?" << endl << endl;
										cout << "1. Tak" << endl;
										cout << "2. Obejrz� jeszcze inne" << endl;
										cin >> dconfirm;

										if (dconfirm == "1") {
											cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
											cout << "Ile z�ota chcia�by� zainwestowa� na t� lokat�?" << endl << endl;
											cin >> deposit3;
											if(deposit3 <= gold) {
												cout << endl << endl;
												dg = deposit3;
												deposit3 = deposit3*1.25;
												cout << "Przy takiej ilo�ci z�ota po zrealizowaniu lokaty otrzymasz " << deposit3 << " sztuk z�ota." <<endl << endl;
												cout << "Czy zgadasz si� na takie warunki lokaty?" << endl;
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
												cout << "Nie posiadasz takiej ilo�ci z�ota!" << endl;
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
								cout << "1.\tChwil�wka          " << "\t" << creditr1 << endl;
								cout << "2.\tPo�yczka           " << "\t" << creditr2 << endl;
								cout << "3.\tKredyt inwestycyjny" << "\t" << creditr3 << endl;
								cout << "4. Wr�� do menu" << endl << endl;
								cin >> creditc;

								if (creditc == "1") {
									if (creditr1 == "DO SP�ACENIA") {
										cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
										cout << "Do sp�acenia kredytu potrzebujesz " << credit1 << " sztuk z�ota." << endl << endl;
										if(gold >= credit1) {
											cout << "Posiadasz wystarczaj�c� ilo�� z�ota." << endl;
											cout << "Pozosta�y termin: " << ctime1 - mobkilled << " pokonanych przeciwnik�w" << endl;
											cout << "Czy chcesz go sp�aci� teraz?" << endl;
											cout << "1. Tak" << endl;
											cout << "2. Nie" << endl;
											cin >> cconfirm;
											if (cconfirm == "1") {
												gold = gold - cg;
												creditr1 = "DOST�PNA";
												break;
											}
										}
										if(gold < credit1) {
											cout << "Nie posiadasz wystarczaj�cej ilo�ci z�ota." << endl;
											cout << "Brakuj�ca ilo��: " << credit1 - gold << " sztuk z�ota" << endl;
											cout << "Pozosta�y termin: " << ctime1 - mobkilled << " pokonanych przeciwnik�w" << endl;
											system("pause");
											break;
										}
									}
									if (creditr1 == "DOST�PNA") {

										cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
										cout << "Chwil�wka jest kr�tkoterminowym kredytem o oprocentowaniu 25%" << endl;
										cout << "Nale�y j� sp�aci� przed zabiciem 15 przeciwnik�w" << endl << endl;
										cout << "Czy chcesz zaci�gn�� ten kredyt?" << endl << endl;
										cout << "1. Tak" << endl;
										cout << "2. Obejrz� jeszcze inne" << endl;
										cin >> cconfirm;

										if (cconfirm == "1") {
											optcredit1 = (5*15*lvl)/1.25;

											do {
												cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
												cout << "Ile z�ota chcia�by� po�yczy�?" << endl << endl;
												cout << "Maksymalna warto�� kredytu : " << optcredit1 << " sztuk z�ota." << endl << endl;
												cin >> credit1;
												if (credit1 >= 100 && credit1 <= optcredit1) {
													cg = credit1;
													gold = gold + cg;
													ctime1 = mobkilled + 15;
													credit1 = credit1 * 1.25;
													creditr1 = "DO SP�ACENIA";
													break;
												}
												if (credit1 < 100 || credit1 > optcredit1) {
													cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
													cout << "Mo�esz po�yczy� conajmniej 100, a conajwy�ej " << optcredit1 << " sztuk z�ota." << endl << endl;
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
									if (creditr2 == "DO SP�ACENIA") {
										cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
										cout << "Do sp�acenia kredytu potrzebujesz " << credit2 << " sztuk z�ota." << endl << endl;
										if(gold >= credit2) {
											cout << "Posiadasz wystarczaj�c� ilo�� z�ota." << endl;
											cout << "Pozosta�y termin: " << ctime2 - mobkilled << " pokonanych przeciwnik�w" << endl;
											cout << "Czy chcesz go sp�aci� teraz?" << endl;
											cout << "1. Tak" << endl;
											cout << "2. Nie" << endl;
											cin >> cconfirm;
											if (cconfirm == "1") {
												gold = gold - cg;
												creditr2 = "DOST�PNA";
												break;
											}
										}
										if(gold < credit2) {
											cout << "Nie posiadasz wystarczaj�cej ilo�ci z�ota." << endl;
											cout << "Brakuj�ca ilo��: " << credit2 - gold << " sztuk z�ota" << endl;
											cout << "Pozosta�y termin: " << ctime2 - mobkilled << " pokonanych przeciwnik�w" << endl;
											system("pause");
											break;
										}
									}
									if (creditr2 == "DOST�PNA") {

										cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
										cout << "Po�yczka jest kredytem o oprocentowaniu 15%" << endl;
										cout << "Nale�y j� sp�aci� przed zabiciem 30 przeciwnik�w" << endl << endl;
										cout << "Czy chcesz zaci�gn�� ten kredyt?" << endl << endl;
										cout << "1. Tak" << endl;
										cout << "2. Obejrz� jeszcze inne" << endl;
										cin >> cconfirm;

										if (cconfirm == "1") {
											optcredit2 = (5*30*lvl)/1.15;


											do {
												cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
												cout << "Ile z�ota chcia�by� po�yczy�?" << endl << endl;
												cout << "Maksymalna warto�� kredytu: " << optcredit2 << " sztuk z�ota." << endl << endl;
												cin >> credit2;
												if (credit2 >= 500 && credit2 <= optcredit2) {
													cg = credit2;
													gold = gold + cg;
													ctime2 = mobkilled + 30;
													credit2 = credit2 * 1.15;
													creditr2 = "DO SP�ACENIA";
													break;
												}
												if (credit2 < 500 || credit2 > optcredit2) {
													cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
													cout << "Mo�esz po�yczy� conajmniej 500, a conajwy�ej " << optcredit2 << " sztuk z�ota." << endl << endl;
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
									if (creditr3 == "DO SP�ACENIA") {
										cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
										cout << "Do sp�acenia kredytu potrzebujesz " << credit3 << " sztuk z�ota." << endl << endl;
										if(gold >= credit3) {
											cout << "Posiadasz wystarczaj�c� ilo�� z�ota." << endl;
											cout << "Pozosta�y termin: " << ctime3 - mobkilled << " pokonanych przeciwnik�w" << endl;
											cout << "Czy chcesz go sp�aci� teraz?" << endl;
											cout << "1. Tak" << endl;
											cout << "2. Nie" << endl;
											cin >> cconfirm;
											if (cconfirm == "1") {
												gold = gold - cg;
												creditr3 = "DOST�PNY";
												break;
											}
										}
										if(gold < credit3) {
											cout << "Nie posiadasz wystarczaj�cej ilo�ci z�ota." << endl;
											cout << "Brakuj�ca ilo��: " << credit3 - gold << " sztuk z�ota" << endl;
											cout << "Pozosta�y termin: " << ctime3 - mobkilled << " pokonanych przeciwnik�w" << endl;
											system("pause");
											break;
										}
									}
									if (creditr3 == "DOST�PNY") {

										cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
										cout << "Kredyt inwestycyjny jest kredytem d�ugoterminowym o oprocentowaniu 30%" << endl;
										cout << "Nale�y go sp�aci� przed zabiciem 60 przeciwnik�w" << endl << endl;
										cout << "Czy chcesz zaci�gn�� ten kredyt?" << endl << endl;
										cout << "1. Tak" << endl;
										cout << "2. Obejrz� jeszcze inne" << endl;
										cin >> cconfirm;

										if (cconfirm == "1") {
											optcredit3 = (5*60*lvl)/1.3;


											do {
												cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
												cout << "Ile z�ota chcia�by� po�yczy�?" << endl << endl;
												cout << "Maksymalna warto�� kredytu: " << optcredit3 << " sztuk z�ota." << endl << endl;
												cin >> credit3;
												if (credit3 >= 1000 && credit3 <= optcredit3) {
													cg = credit3;
													gold = gold + cg;
													ctime3 = mobkilled + 60;
													credit3 = credit3 * 1.3;
													creditr3 = "DO SP�ACENIA";
													break;
												}
												if (credit3 < 1000 || credit3 > optcredit3) {
													cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
													cout << "Mo�esz po�yczy� conajmniej 1000, a conajwy�ej " << optcredit3 << " sztuk z�ota." << endl << endl;
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
					cout << "Na ile potwor�w chcesz zapolowa�?" << endl;
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
								mob = "Nied�wied�";
								mobhp = 30 + 0.9*moblvl;
								mobhpmax = mobhp;
								mobdmg = 6 + 0.5*moblvl;
								mobg = moblvl * 5;
							}
							if(amob == 3) {
								mob = "Rozw�cieczony knur";
								mobhp = (12 + 0.8*moblvl);
								mobhpmax = mobhp;
								mobdmg = 4.5 + 1.15*moblvl;
								mobg = moblvl * 5;
							}
							if(amob == 4) {
								mob = "Wied�ma";
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
								mob = "Wilko�ak";
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
								cout << "\t\t Zgin��e�" << endl;
								cout << endl;
								cout << "\n\n\tStatystyki:       " << endl;
								cout << "\tAtak:                 " << dmg << endl;
								cout << "\tZdrowie:              " << hp << "/" << hpmax << endl;
								cout << "\tPoziom:               " << lvl << endl;
								cout << "\tDo�wiadczenie:        " << exp << "/" << expn << endl;
								cout << "\tPunkty do�wiadczenia: " << lvlp << endl;
								cout << "\tZ�oto:                " << gold << endl;
								cout << "\tPokonani przeciwnicy: " << mobkilled << endl << endl;
								dead = 1;
								system("pause");
								goto start;
							}
							if(hp<=0 && gangel == 1) {
								cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
								cout << "Zgin��e�..." << endl << endl;
								cout << "Tw�j Anio� Str� zostaje zu�yty. Wracasz do �ywych" << endl << endl;
								hp = 0.5*hpmax;
								gangel = 2;
								system("pause");
							}
							if (mobhp<=0) {
								cout << endl;
								cout << "Gratulacje!! Pokona�e� " << mob <<"!" << endl;
								mobkilled = mobkilled + 1;
								hp = hp + (0.75*dmgtaken);
								exp = exp + mobexp;
								gold = gold + mobg;
								cout << "Otrzymujesz " << mobexp << " do�wiadczenia, " << 0.75*dmgtaken << " zdrowia oraz " << mobg << " z�ota." << endl << endl;
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
					cout << "\tDo�wiadczenie:        " << exp << "/" << expn << endl;
					cout << "\tPunkty do�wiadczenia: " << lvlp << endl;
					cout << "\tZ�oto:                " << gold << endl;
					cout << "\tPokonani przeciwnicy: " << mobkilled << endl << endl;

					do {
						if(exp>=expn) {
							cout << "Gratulacje zdoby�e� poziom " << lvl+1 << "!" << endl;
							exp = exp - expn;
							lvl = lvl + 1;
							lvlp = lvlp + lvl + 2;
							cout << "Otrzymujesz " << lvl + 2 << " punkt�w do�wiadczenia." << endl << endl;
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


//�wi�tynia
				if(wtd == "6") {
					if(difficulty == "4" || difficulty == "5") {
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
						cout<<"Jeste� w �wi�tyni, co teraz zrobisz?"<<endl;
						cout<<"1. Pom�dl si�"<<endl;
						cout<<"2. Udaj si� do fontanny po�amanych"<<endl<<endl;
						string fountain;
						cin>> fountain;
						if(fountain == "1") {
							exp = expn;
							cout<<"Pomodli�e� si�, otrzymujesz nowy poziom"<<endl;
							system("pause");
						}
						if(fountain == "2") {
							hp=hpmax;
							cout<<"Zosta�e� wyleczony"<<endl;
							system("pause");
						}
					}

					if(difficulty == "1") {
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
						cout<<"Jeste� w �wi�tyni, co teraz zrobisz?"<<endl;
						cout<<"1. Pom�dl si�"<<endl;
						cout<<"2. Udaj si� do fontanny po�amanych"<<endl<<endl;
						string fountain;
						cin>> fountain;
						if(fountain == "1") {
							exp=exp+0.25;
							cout<<"Pomodli�e� si�, otrzymujesz 0.25 do�wiadczenia!"<<endl;
							system("pause");
						}
						if(fountain == "2") {
							hp=hp+0.15;
							cout<<"Zosta�e� uleczony o 0.15 zdrowia!"<<endl;
							system("pause");
						}
					}
					if(difficulty == "2") {
						if(lvl >= 10) {
							cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
							cout<<"Jeste� w �wi�tyni, co teraz zrobisz?"<<endl;
							cout<<"1. Pom�dl si�"<<endl;
							cout<<"2. Udaj si� do fontanny po�amanych"<<endl<<endl;
							string fountain;
							cin>> fountain;
							if(fountain == "1") {
								exp=exp+0.25;
								cout<<"Pomodli�e� si�, otrzymujesz 0.25 do�wiadczenia!"<<endl << endl;
								system("pause");
							}
							if(fountain == "2") {
								hp=hp+0.15;
								cout<<"Zosta�e� uleczony o 0.15 zdrowia!"<<endl << endl;
								system("pause");
							}
						}
						if(lvl < 10) {
							cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
							cout << "Zdob�d� poziom 10, aby dosta� si� do �wi�tyni!" << endl << endl;
							system("pause");
						}
					}
					if(difficulty == "3") {
						cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
						cout << "�wi�tynia jest niedost�pna na twoim poziomie trudno�ci!" << endl << endl;
						system("pause");
					}
				}

				if(wtd=="7") {
zapisywanie:
					string save;
					cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
					cout << "Czy chcesz zapisac?" << endl;
					cout << "1. Tak"<<endl;
					cout << "2. Nie, wyjd� bez zapisu" << endl;
					cout << "3. Wr�� do menu"<< endl << endl;
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
						if(creditr1 == "DO SP�ACENIA") {
							icreditr1 = 1;
						}
						if(creditr1 == "DOST�PNA") {
							icreditr1 = 2;
						}
						if(creditr2 == "DO SP�ACENIA") {
							icreditr2 = 1;
						}
						if(creditr2 == "DOST�PNA") {
							icreditr2 = 2;
						}
						if(creditr3 == "DO SP�ACENIA") {
							icreditr3 = 1;
						}
						if(creditr3 == "DOST�PNY") {
							icreditr3 = 2;
						}

						int irace, itype;
						if(race == "Cz�owiek") {
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
						if(type == "Obro�ca") {
							itype = 2;
						}
						if(type == "Paladyn") {
							itype = 3;
						}
						if(type == "Czeladnik") {
							itype = 4;
						}
						if(type == "�owca") {
							itype = 5;
						}
						if(type == "Berserker") {
							itype = 6;
						}
						if(type == "Buntownik") {
							itype = 7;
						}
						if(type == "Czy�ciciel") {
							itype = 8;
						}
						if(type == "Elf wy�szy") {
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
						cout<<"Nie? Dobrze, zapami�tam to."<<endl<<endl;
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
				creditr1 = "DO SP�ACENIA";
			}
			if(icreditr1 == 2) {
				creditr1 = "DOST�PNA";
			}
			if(icreditr2 == 1) {
				creditr2 = "DO SP�ACENIA";
			}
			if(icreditr2 == 2) {
				creditr2 = "DOST�PNA";
			}
			if(icreditr3 == 1) {
				creditr3 = "DO SP�ACENIA";
			}
			if(icreditr3 == 2) {
				creditr3 = "DOST�PNY";
			}
			if(irace == 1) {
				race = "Cz�owiek";
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
				type = "Obro�ca";
			}
			if(itype == 3) {
				type = "Paladyn";
			}
			if(itype == 4) {
				type = "Czeladnik";
			}
			if(itype == 5) {
				type = "�owca";
			}
			if(itype == 6) {
				type = "Berserker";
			}
			if(itype == 7) {
				type = "Buntownik";
			}
			if(itype == 8) {
				type = "Czy�ciciel";
			}
			if(itype == 9) {
				type = "Elf wy�szy";
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
			//cout << "Jak si� nazywasz?" << endl;
			//cin >> name;



			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			cout << "Wczytany zapis stanu gry:" << endl << endl;
			cout << "\tTwoja posta�:" << endl;
			cout << "\t\tImi�:                 " << name << endl;
			cout << "\t\tRasa:                 " << race << endl;
			cout << "\t\tKlasa:                " << type << endl;
			cout << "\tStatystyki:             " << endl;
			cout << "\t\tAtak:                 " << dmg << endl;
			cout << "\t\tZdrowie:              " << hp << "/" << hpmax << endl;
			cout << "\t\tPoziom:               " << lvl << endl;
			cout << "\t\tDo�wiadczenie:        " << exp << "/" << expn << endl;
			cout << "\t\tPunkty do�wiadczenia: " << lvlp << endl;
			cout << "\t\tZ�oto:                " << gold << endl;
			cout << "\t\tPokonani przeciwnicy: " << mobkilled << endl << endl;
			system("pause");

			goto core;



		}
		if(start=="3") {
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			cout << "\t Dzi�kujemy za zainteresowanie nasz� produkcj� <3" << endl << endl;
			cout << "Autorzy:" << endl;
			int credits;
			credits = (rand() % 6 + 1);
			if(credits == 1) {
				cout << "Dawid Pawlik" << endl;
				cout << "Jakub W�jcik" << endl;
				cout << "Karolina Borowiec" << endl;
			}
			if(credits == 2) {
				cout << "Dawid Pawlik" << endl;
				cout << "Karolina Borowiec" << endl;
				cout << "Jakub W�jcik" << endl;
			}
			if(credits == 3) {
				cout << "Jakub W�jcik" << endl;
				cout << "Dawid Pawlik" << endl;
				cout << "Karolina Borowiec" << endl;
			}
			if(credits == 4) {
				cout << "Jakub W�jcik" << endl;
				cout << "Karolina Borowiec" << endl;
				cout << "Dawid Pawlik" << endl;
			}
			if(credits == 5) {
				cout << "Karolina Borowiec" << endl;
				cout << "Dawid Pawlik" << endl;
				cout << "Jakub W�jcik" << endl;
			}
			if(credits == 6) {
				cout << "Karolina Borowiec" << endl;
				cout << "Jakub W�jcik" << endl;
				cout << "Dawid Pawlik" << endl;
			}

			cout << endl;
			system("pause");

		}
		if(start=="4") {
koniec:
			string exit;
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			cout << "Czy na pewno chcesz si� z nami rozsta�?" << endl;
			cout << "1. Tak, wyj�cie." << endl;
			cout << "2. Nie, zostan� jeszcze na chwilk�.." << endl;
			cin >> exit;
			if(exit=="1") {
				return 0;
			} else {
				continue;
			}
		}
	} while(dead==0);
}
