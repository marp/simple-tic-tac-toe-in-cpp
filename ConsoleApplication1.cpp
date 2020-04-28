#include <iostream>
#include <conio.h>

using namespace std;

int wybor, cordX, cordY = 0;

string plansza[3][3] = {
	{" ", " ", " "},
	{" ", " ", " "},
	{" ", " ", " "},
};

/*
string plansza[3][3] = {
	{"X", "O", " "},
	{"X", "O", "X"},
	{"O", "X", "O"},
};
*/

string win, turn;

int main()
{
	for (;;) {
		if (turn == "X") {
			turn = "O";
		}
		else {
			turn = "X";
		}
		cordX = 0;
		cordY = 0;
		cout << plansza[0][0] << "|" << plansza[0][1] << "|" << plansza[0][2] << endl;
		cout << plansza[1][0] << "|" << plansza[1][1] << "|" << plansza[1][2] << endl;
		cout << plansza[2][0] << "|" << plansza[2][1] << "|" << plansza[2][2] << endl;

		cout << "Write coordinates where you want to put " << turn << ": ";
		for (;;) {
			if (cordX <= 0 || cordX >= 4) {
				cout << endl << "X axis: ";
				cin >> cordX;
			}
			else {
				break;
			}
		}
		for (;;) {
			if (cordY <= 0 || cordY >= 4) {
				cout << endl << "Y axis: ";
				cin >> cordY;
			}
			else {
				break;
			}
		}
		if (plansza[--cordY][--cordX] == " ") {
			plansza[cordY][cordX] = turn;
		}else {
			cout << endl<< "To pole jest ZAJETE!"<<endl;
			turn = plansza[cordY][cordX];
			system("Pause");
		}

		//Checks if game is finished
		if (plansza[0][0] == "X" && plansza[0][1] == "X" && plansza[0][2] == "X") {
			win = "X";
		}
		else if (plansza[1][0] == "X" && plansza[1][1] == "X" && plansza[1][2] == "X") {
			win = "X";
		}
		else if (plansza[2][0] == "X" && plansza[2][1] == "X" && plansza[2][2] == "X") {
			win = "X";
		}
		else if (plansza[0][0] == "X" && plansza[1][0] == "X" && plansza[2][0] == "X") {
			win = "X";
		}
		else if (plansza[1][0] == "X" && plansza[1][1] == "X" && plansza[1][2] == "X") {
			win = "X";
		}
		else if (plansza[2][0] == "X" && plansza[2][1] == "X" && plansza[2][2] == "X") {
			win = "X";
		}else if (plansza[0][0] == "X" && plansza[1][1] == "X" && plansza[2][2] == "X") {
			win = "X";
		}
		else if (plansza[2][2] == "X" && plansza[1][1] == "X" && plansza[0][0] == "X") {
			win = "X";
		}
		if (plansza[0][0] == "O" && plansza[0][1] == "O" && plansza[0][2] == "O") {
			win = "O";
		}
		else if (plansza[1][0] == "O" && plansza[1][1] == "O" && plansza[1][2] == "O") {
			win = "O";
		}
		else if (plansza[2][0] == "O" && plansza[2][1] == "O" && plansza[2][2] == "O") {
			win = "O";
		}
		else if (plansza[0][0] == "O" && plansza[1][0] == "O" && plansza[2][0] == "O") {
			win = "O";
		}
		else if (plansza[1][0] == "O" && plansza[1][1] == "O" && plansza[1][2] == "O") {
			win = "O";
		}
		else if (plansza[2][0] == "O" && plansza[2][1] == "O" && plansza[2][2] == "O") {
			win = "O";
		}
		else if (plansza[0][0] == "O" && plansza[1][1] == "O" && plansza[2][2] == "O") {
			win = "O";
		}
		else if (plansza[2][2] == "O" && plansza[1][1] == "O" && plansza[0][0] == "O") {
			win = "O";
		}else if (plansza[0][0] != " " && plansza[0][1] != " " && plansza[0][2] != " " 
			&& plansza[1][0] != " " && plansza[1][1] != " " && plansza[1][2] != " "
			&& plansza[2][0] != " " && plansza[2][1] != " " && plansza[2][2] != " " && win != " ") {
			win = " ";
		}

		if (win == "X") {
			cout <<endl<<endl<< "X win the game!"<<endl<<endl;
			return 0;
		}
		else if (win == "O") {
			cout << endl << endl << "O win the game!" << endl << endl;
			return 0;
		}else if (win == " ") {
			cout << endl << endl << "Draw!" << endl << endl;
			return 0;
		}
		system("CLS");
	}
	return 0;

}