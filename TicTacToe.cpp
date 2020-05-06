#include "TicTacToe.h"
#include <sstream>
#include <Windows.h>
#include <Mmsystem.h>

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
#define ENTER 13
#define SPACE
#define underline "\033[4m"
#define stopUnderline "\033[0m"

void startScreen();
void menu(int x, int y);
void play();
void settings();
void loadSettings();
void drawBord();
void setGame();
void game(int player1c, int player2c, string player1, string player2, string shapeP1);

int kbInput, selection = 1, defColor = 7, sColor, volume;

void main() {

	SMALL_RECT size{ 100, 41 , 915, 800 };

	setWindow(size.Left, size.Top, size.Right, size.Bottom, FALSE);
	//loadSettings();
	//startScreen();
	//menu(size.Left, size.Top);

	while (1) {
		kbInput = _getch();
		Position(0, 0); cout << kbInput << "     ";
	}
}

void startScreen() {

	PlaySound(TEXT("justin.wav"), NULL, SND_ASYNC);

	Color(6); Word("tic", 50 - (7 * 1.5), 41 / 2 - 8);
	Sleep(1000);
	Color(9); Word("tac", 50 - (7 * 1.5), 41 / 2 - 0);
	Sleep(1000);
	Color(12); Word("toe", 50 - (7 * 1.5), 41 / 2 + 8);
	Sleep(1000);
	Color(defColor); Position(50 - 11, 41 / 2 + 16); cout << "Press any key to continue";
	_getch();


}

void menu(int x, int y) {

	system("cls");
	Color(sColor); Word("play", x / 2 - (7 * 2), y / 2 - 10);
	Color(defColor); Word("settings", x / 2 - (7 * 4), y / 2);
	Word("exit", x / 2 - 14, y / 2 + 10);

	selection = 1;

	while (1) {

		kbInput = _getch();
		if (kbInput == DOWN && selection != 3) {
			selection++;
		}
		else if (kbInput == UP && selection != 1) {
			selection--;
		}

		if (kbInput == ENTER) {
			if (selection == 1)
				setGame();
			else if (selection == 2)
				settings();
			else if (selection == 3)
				PostMessage(GetConsoleWindow(), WM_CLOSE, 0, 0);
		}

		if (selection == 1) {
			Color(sColor); Word("play", x / 2 - (7 * 2), y / 2 - 10);
			Color(defColor); Word("settings", x / 2 - (7 * 4), y / 2);
		}
		else if (selection == 2) {
			Color(defColor); Word("play", x / 2 - (7 * 2), y / 2 - 10);
			Color(sColor); Word("settings", x / 2 - (7 * 4), y / 2);
			Color(defColor); Word("exit", x / 2 - 14, y / 2 + 10);
		}
		else if (selection == 3) {
			Color(defColor); Word("settings", x / 2 - (7 * 4), y / 2);
			Color(sColor); Word("exit", x / 2 - 14, y / 2 + 10);
		}

	}
}
void play() {

}
void settings() {

	system("cls");

	ofstream setttingsFile("settings.dll");
	int x = 72, y = 41;
	selection = 1;

	Color(sColor); Word("selection", x / 2 - (7 * 5), y / 2 - 10);
	Color(defColor); Word("volume", x / 2 - (7 * 5), y / 2);
	Word("back", x / 2 - 35, y / 2 + 10);

	Color(sColor);
	Position(100 - 10, y / 2 - 10);		cout << "#########" << endl;
	Position(100 - 10, y / 2 - 10 + 1);	cout << "#########" << endl;
	Position(100 - 10, y / 2 - 10 + 2);	cout << "#########" << endl;
	Position(100 - 10, y / 2 - 10 + 3);	cout << "#########" << endl;
	Position(100 - 10, y / 2 - 10 + 4);	cout << "#########" << endl;
	Position(100 - 10, y / 2 - 10 + 5);	cout << "#########" << endl;
	Position(100 - 10, y / 2 - 10 + 6);	cout << "#########" << endl;
	Color(defColor);
	Word("1", x / 2 + 31, y / 2);

	while (1) {

		kbInput = _getch();


		if (kbInput == DOWN && selection != 3)
			selection++;
		else if (kbInput == UP && selection != 1)
			selection--;
		else if (kbInput == LEFT) {
			if (selection == 1 && sColor != 1)
				sColor--;
			else if (selection == 2 && volume != 1)
				volume--;
		}
		else if (kbInput == RIGHT) {
			if (selection == 1 && sColor != 6)
				sColor++;
			else if (selection == 2 && volume != 9) {
				volume++;
			}
		}
		if (kbInput == ENTER) {
			setttingsFile << "Color:" << endl << sColor << endl << "Volume:" << endl << volume << endl;
			menu(100, 41);
		}

		if (selection == 1) {
			Color(sColor); Word("selection", x / 2 - (7 * 5), y / 2 - 10);
			Color(defColor); Word("volume", x / 2 - 35, y / 2);
			Color(defColor); Word("back", x / 2 - 35, y / 2 + 10);
		}
		else if (selection == 2) {
			Color(defColor); Word("selection", x / 2 - (7 * 5), y / 2 - 10);
			Color(sColor); Word("volume", x / 2 - 35, y / 2);
			Color(defColor); Word("back", x / 2 - 35, y / 2 + 10);
		}
		else if (selection == 3) {
			Color(defColor); Word("selection", x / 2 - (7 * 5), y / 2 - 10);
			Color(defColor); Word("volume", x / 2 - 35, y / 2);
			Color(sColor); Word("back", x / 2 - 35, y / 2 + 10);
			Color(defColor);
		}

		Color(sColor);
		Position(100 - 10, y / 2 - 10);		cout << "#########" << endl;
		Position(100 - 10, y / 2 - 10 + 1);	cout << "#########" << endl;
		Position(100 - 10, y / 2 - 10 + 2);	cout << "#########" << endl;
		Position(100 - 10, y / 2 - 10 + 3);	cout << "#########" << endl;
		Position(100 - 10, y / 2 - 10 + 4);	cout << "#########" << endl;
		Position(100 - 10, y / 2 - 10 + 5);	cout << "#########" << endl;
		Position(100 - 10, y / 2 - 10 + 6);	cout << "#########" << endl;


		if (volume == 1) {
			Color(defColor);
			Word("1", x / 2 + 31, y / 2);
			waveOutSetVolume(0, (65535 / 10) * 1);
		}
		else if (volume == 2) {
			Color(defColor);
			Word("2", x / 2 + 31, y / 2);
			waveOutSetVolume(0, (65535 / 10) * 2);
		}
		else if (volume == 3) {
			Color(defColor);
			Word("3", x / 2 + 31, y / 2);
			waveOutSetVolume(0, (65535 / 10) * 3);
		}
		else if (volume == 4) {
			Color(defColor);
			Word("4", x / 2 + 31, y / 2);
			waveOutSetVolume(0, (65535 / 10) * 4);
		}
		else if (volume == 5) {
			Color(defColor);
			Word("5", x / 2 + 31, y / 2);
			waveOutSetVolume(0, (65535 / 10) * 5);
		}
		else if (volume == 6) {
			Color(defColor);
			Word("6", x / 2 + 31, y / 2);
			waveOutSetVolume(0, (65535 / 10) * 6);
		}
		else if (volume == 7) {
			Color(defColor);
			Word("7", x / 2 + 31, y / 2);
			waveOutSetVolume(0, (65535 / 10) * 7);
		}
		else if (volume == 8) {
			Color(defColor);
			Word("8", x / 2 + 31, y / 2);
			waveOutSetVolume(0, (65535 / 10) * 8);
		}
		else if (volume == 9) {
			Color(defColor);
			Word("9", x / 2 + 31, y / 2);
			waveOutSetVolume(0, (65535 / 10) * 9);
		}
	}

}
void loadSettings() {
	ifstream settingsFile("settings.dll");
	stringstream temp(getLine(settingsFile, 2));
	stringstream temp2(getLine(settingsFile, 4));
	Color(defColor);
	temp >> sColor;
	temp2 >> volume;
	if (sColor == 0)
		sColor += 2;
	if (volume == 0)
		volume += 2;

}
void drawBord() {


	Color(defColor);
	int z = 0;
	for (int x = 0; x <= 1; x++) {
		for (int y = 0; y <= 28; y++) {
			Position(45 - 6 + z, 12 + y); cout << "|";
		}
		z = 18;
	}
	z = 6;
	for (int x = 0; x <= 1; x++) {
		for (int y = 0; y <= 48; y++) {
			Position(45 - 21 + y, 15 + z); cout << "-";
		}
		z = +16;
	}

	/*for (int i = 0; i < 3; i++) {
		for(int ii = 0; ii<3; ii++)
		Word("x", 28 + (i * 17), 13 + (ii * 10));
	}*/



}
void setGame() {

	system("cls");

	PlaySound(NULL, 0, 0);

	string player1 = "david ", player2 = "yosef";
	int player1c = 1, player2c = 2;
	string shapeP1 = "l";
	Cube(50 - 13, 41 / 2 - 7, 26, 14, TRUE);
	Position(50 - 5, 41 / 2 - 5); cout << underline << "Game Info:" << stopUnderline;
	Position(50 - 11, 41 / 2 - 2); cout << "Player 1 name:";
	Position(50 - 11, 41 / 2 - 1); cout << "Player 1 color:";
	Position(50 - 11, 41 / 2 - 0); cout << "Player 1 shape(x,o):";
	Position(50 - 11, 41 / 2 + 1); cout << "Player 2 name:";
	Position(50 - 11, 41 / 2 + 2); cout << "Player 2 color:";
	Position(50 - 11, 41 / 2 + 3); cout << "*color = 1-6";
	Position(50 - 6, 41 / 2 + 5); cout << "Okay";
	Position(50 + 4, 41 / 2 + 5); cout << "Cancel";
		Color(sColor); Position(50 - 11, 41 / 2 - 2); cout << "Player 1 name:";  cin >> player1;
		Color(defColor); Position(50 - 11, 41 / 2 - 2); cout << "Player 1 name:";
		Color(sColor); Position(50 - 11, 41 / 2 - 1); cout << "Player 1 color:"; cin >> player1c;
		Color(defColor);Position(50 - 11, 41 / 2 - 1); cout << "Player 1 color:";
		Color(sColor); Position(50 - 11, 41 / 2 - 0); cout << "Player 1 shape(x,o):"; cin >> shapeP1;
		Color(defColor); Position(50 - 11, 41 / 2 - 0); cout << "Player 1 shape(x,o):";
		Color(sColor); Position(50 - 11, 41 / 2 + 1); cout << "Player 2 name:"; cin >> player2;
		Color(defColor); Position(50 - 11, 41 / 2 + 1); cout << "Player 2 name:";
		Color(sColor); Position(50 - 11, 41 / 2 + 2); cout << "Player 2 color:"; cin >> player2c;
		Color(defColor); Position(50 - 11, 41 / 2 + 2); cout << "Player 2 color:";
		Color(sColor); Position(50 - 6, 41 / 2 + 5); cout << "Okay";


	while (1) {

		kbInput = _getch();
		if (kbInput == RIGHT && selection != 2)
			selection = 2;
		else if (kbInput == LEFT && selection != 1)
			selection = 1;
		if (kbInput == ENTER) {
			if (selection == 1) {
				system("cls");
				game(player1c, player2c, player1, player2, shapeP1);

			}
			else if (selection == 2) {
				menu(100, 41);
			}
		}

		if (selection == 1) {
			Color(sColor);	Position(50 - 6, 41 / 2 + 5); cout << "Okay";
			Color(defColor); Position(50 + 4, 41 / 2 + 5); cout << "Cancel";
		}
		else if (selection == 2) {
			Color(defColor);	Position(50 - 6, 41 / 2 + 5); cout << "Okay";
			Color(sColor); Position(50 + 4, 41 / 2 + 5); cout << "Cancel";
		}
	}



}

void game(int player1c, int player2c, string player1, string player2, string shapeP1) {

	system("cls");
	int turn = 1, selection = 1 , full = 0;
	int player1L = player1.length() * 8.5;
	int player2L = player2.length() * 8.5;
	string shapeP2;
	int selectedX = 0, selectedY = 0;
	int taken[3][3];


	Color(player1c); Word(player1, 1, 1);
	Color(player2c); Word(player2, 99 - (player2.length() * 8.5), 1);
	drawBord();

	for (int i = 0; i < 3; i++)
		for (int ii = 0; ii < 3; ii++)
			taken[i][ii] = 0;

	if (shapeP1 == "o")
		shapeP2 = 'x';
	else {
		shapeP2 = 'o';
		shapeP1 = 'x';
	}
	Color(defColor);  Position(1, 9);
	for (int i = 0; i <= player1L; i++)
		cout << "#";
	Color(12); Cube(24 + (selectedX * 17), 12 + (selectedY * 10), 13, 8, TRUE);

	while (1) {

		kbInput = _getch();
		if (kbInput == ENTER) {
			if (turn == 1 && taken[selectedX][selectedY] == 0) {
				Color(player1c); Word(shapeP1, 28 + (selectedX * 17), 13 + (selectedY * 10));
				taken[selectedX][selectedY] = 1;
				turn = 2;
			}
			else if (turn == 2 && taken[selectedX][selectedY] == 0) {
				Color(player2c); Word(shapeP2, 28 + (selectedX * 17), 13 + (selectedY * 10));
				taken[selectedX][selectedY] = 2;
				turn = 1;
			}
		}

		if (kbInput == RIGHT && selectedX != 2) {
			Color(defColor); Cubes(24 + (selectedX * 17), 12 + (selectedY * 10), 13, 8, TRUE);
			selectedX++;
			Color(12); Cube(24 + (selectedX * 17), 12 + (selectedY * 10), 13, 8, TRUE);
		}
		else if (kbInput == LEFT && selectedX != 0) {
			Color(defColor); Cubes(24 + (selectedX * 17), 12 + (selectedY * 10), 13, 8, TRUE);
			selectedX--;
			Color(12); Cube(24 + (selectedX * 17), 12 + (selectedY * 10), 13, 8, TRUE);
		}
		else if (kbInput == DOWN && selectedY != 2) {
			Color(defColor); Cubes(24 + (selectedX * 17), 12 + (selectedY * 10), 13, 8, TRUE);
			selectedY++;
			Color(12); Cube(24 + (selectedX * 17), 12 + (selectedY * 10), 13, 8, TRUE);
		}
		else if (kbInput == UP && selectedY != 0) {
			Color(defColor); Cubes(24 + (selectedX * 17), 12 + (selectedY * 10), 13, 8, TRUE);
			selectedY--;
			Color(12); Cube(24 + (selectedX * 17), 12 + (selectedY * 10), 13, 8, TRUE);
		}

		if (turn == 1) {
			Color(defColor);  Position(1, 9);
			for (int i = 0; i <= player1L; i++)
				cout << "#";
			Position(99 - player2L, 9);
			for (int i = 0; i <= player2L; i++)
				cout << " ";
		}
		else if (turn == 2) {
			Color(defColor);  Position(1, 9);
			for (int i = 0; i <= player1L; i++)
				cout << " ";
			Position(99 - player2L, 9);
			for (int i = 0; i <= player2L; i++)
				cout << "#";
		}


		for (int w = 0; w < 3; w++) {
			if (taken[w][0] == 1 && taken[w][1] == 1 && taken[w][2] == 1 || taken[0][w] == 1 && taken[1][w] == 1 && taken[2][w] == 1
				|| taken[0][0] == 1 && taken[1][1] == 1 && taken[2][2] == 1 || taken[0][2] == 1 && taken[1][1] == 1 && taken[2][0] == 1) {
				Cube(50 - 15, 41 / 2 - 5, 30, 10, FALSE);
				PlaySound(TEXT("win.wav"), NULL, SND_ASYNC);
				Color(player1c); Position(48 - player1.length() / 2, 41 / 2 - 1); cout << player1;
				Color(random(1, 13)); cout << " WON";
				Color(defColor); Position(50 - 8, 41 / 2 + 3); cout << "MENU";
				Position(50 + 4, 41 / 2 + 3); cout << "RE:MATCH";
				while (1) {
					kbInput = _getch();
					if (kbInput == RIGHT && selection != 2)
						selection = 2;
					else if (kbInput == LEFT && selection != 1)
						selection = 1;
					if (kbInput == ENTER) {
						if (selection == 1)
							menu(100, 41);
						else if (selection == 2) {
							game(player1c, player2c, player1, player2, shapeP1);
						}

					}
					if (selection == 1) {
						Color(sColor); Position(50 - 8, 41 / 2 + 3); cout << "MENU";
						Color(defColor); Position(50 + 4, 41 / 2 + 3); cout << "RE:MATCH";
					}
					else if (selection == 2) {
						Color(defColor); Position(50 - 8, 41 / 2 + 3); cout << "MENU";
						Color(sColor); Position(50 + 4, 41 / 2 + 3); cout << "RE:MATCH";
					}
				}

			}
			for (int w = 0; w < 3; w++) {
				if (taken[w][0] == 2 && taken[w][1] == 2 && taken[w][2] == 2 || taken[0][w] == 2 && taken[1][w] == 2 && taken[2][w] == 2
					|| taken[0][0] == 2 && taken[1][1] == 2 && taken[2][2] == 2 || taken[0][2] == 2 && taken[1][1] == 2 && taken[2][0] == 2) {
					Cube(50 - 15, 41 / 2 - 5, 30, 10, FALSE);
					PlaySound(TEXT("win.wav"), NULL, SND_ASYNC);
					Color(player2c); Position(48 - player2.length() / 2, 41 / 2 - 1); cout << player2;
					Color(random(1, 13)); cout << " WON";
					Color(defColor); Position(50 - 8, 41 / 2 + 3); cout << "MENU";
					Position(50 + 4, 41 / 2 + 3); cout << "RE:MATCH";
					while (1) {
						kbInput = _getch();
						if (kbInput == RIGHT && selection != 2)
							selection = 2;
						else if (kbInput == LEFT && selection != 1)
							selection = 1;
						if (kbInput == ENTER) {
							if (selection == 1)
								menu(100, 41);
							else if (selection == 2) {
								game(player1c, player2c, player1, player2, shapeP1);
							}

						}
						if (selection == 1) {
							Color(sColor); Position(50 - 8, 41 / 2 + 3); cout << "MENU";
							Color(defColor); Position(50 + 4, 41 / 2 + 3); cout << "RE:MATCH";
						}
						else if (selection == 2) {
							Color(defColor); Position(50 - 8, 41 / 2 + 3); cout << "MENU";
							Color(sColor); Position(50 + 4, 41 / 2 + 3); cout << "RE:MATCH";
						}
					}
				}

			}

				if (taken[0][0] > 0 && taken[0][1] > 0 && taken[0][2] > 0
				 && taken[1][0] > 0 && taken[1][1] > 0 && taken[1][2] > 0 
				 && taken[2][0] > 0 && taken[2][1] > 0 && taken[2][2] > 0) {
						Cube(50 - 15, 41 / 2 - 5, 30, 10, FALSE);
						PlaySound(TEXT("fail.wav"), NULL, SND_ASYNC);
						Position(49, 41 / 2 - 1);
						Color(random(1, 13)); cout << " TIE";
						Color(defColor); Position(50 - 8, 41 / 2 + 3); cout << "MENU";
						Position(50 + 4, 41 / 2 + 3); cout << "RE:MATCH";
						while (1) {
							kbInput = _getch();
							if (kbInput == RIGHT && selection != 2)
								selection = 2;
							else if (kbInput == LEFT && selection != 1)
								selection = 1;
							if (kbInput == ENTER) {
								if (selection == 1)
									menu(100, 41);
								else if (selection == 2) {
									game(player1c, player2c, player1, player2, shapeP1);
								}

							}
							if (selection == 1) {
								Color(sColor); Position(50 - 8, 41 / 2 + 3); cout << "MENU";
								Color(defColor); Position(50 + 4, 41 / 2 + 3); cout << "RE:MATCH";
							}
							else if (selection == 2) {
								Color(defColor); Position(50 - 8, 41 / 2 + 3); cout << "MENU";
								Color(sColor); Position(50 + 4, 41 / 2 + 3); cout << "RE:MATCH";
							}
						}
					}
				

			
		}
	}
}
