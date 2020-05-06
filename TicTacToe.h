#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <ctime>
#include <random>
#include <fstream>
using namespace std;

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

void setWindow(short x, short y, int length, int heigth, bool mouse) {
	
	MoveWindow(GetConsoleWindow(), 1500 / 2 - (length / 2), 800 / 2 - (heigth / 2), length, heigth, TRUE);
	COORD XY{ x , y };
	SetConsoleScreenBufferSize(h, XY);
	//ShowScrollBar(GetConsoleWindow(), SB_BOTH, FALSE);

	CONSOLE_CURSOR_INFO info;

	GetConsoleCursorInfo(h, &info);
	info.bVisible = mouse;
	SetConsoleCursorInfo(h, &info);


}
void Position(int x, int y) {

	COORD XY{ x , y };
	SetConsoleCursorPosition(h, XY);

}
void Color(int i) {
	SetConsoleTextAttribute(h, i);
}
void Word(string letters, int x, int y) {


	for (int i = 0; i < letters.length(); i++) {

		char temp = letters[i];

		switch (temp) {
		case 'a':
			Position(x, y);		cout << "   #   " << endl;
			Position(x, y + 1);	cout << "  # #  " << endl;
			Position(x, y + 2);	cout << " #   # " << endl;
			Position(x, y + 3);	cout << "#     #" << endl;
			Position(x, y + 4);	cout << "#######" << endl;
			Position(x, y + 5);	cout << "#     #" << endl;
			Position(x, y + 6);	cout << "#     #" << endl;
			break;

		case 'b':
			Position(x, y);		cout << "###### " << endl;
			Position(x, y + 1);	cout << "#     #" << endl;
			Position(x, y + 2);	cout << "#     #" << endl;
			Position(x, y + 3);	cout << "###### " << endl;
			Position(x, y + 4);	cout << "#     #" << endl;
			Position(x, y + 5);	cout << "#     #" << endl;
			Position(x, y + 6);	cout << "###### " << endl;
			break;

		case 'c':
			Position(x, y);		cout << "#######" << endl;
			Position(x, y + 1);	cout << "#      " << endl;
			Position(x, y + 2);	cout << "#      " << endl;
			Position(x, y + 3);	cout << "#      " << endl;
			Position(x, y + 4);	cout << "#      " << endl;
			Position(x, y + 5);	cout << "#      " << endl;
			Position(x, y + 6);	cout << "#######" << endl;
			break;

		case 'd':
			Position(x, y);		cout << "###### " << endl;
			Position(x, y + 1);	cout << "#     #" << endl;
			Position(x, y + 2);	cout << "#     #" << endl;
			Position(x, y + 3);	cout << "#     #" << endl;
			Position(x, y + 4);	cout << "#     #" << endl;
			Position(x, y + 5);	cout << "#     #" << endl;
			Position(x, y + 6);	cout << "###### " << endl;
			break;

		case 'e':
			Position(x, y);		cout << "#######" << endl;
			Position(x, y + 1);	cout << "#      " << endl;
			Position(x, y + 2);	cout << "#      " << endl;
			Position(x, y + 3);	cout << "#######" << endl;
			Position(x, y + 4);	cout << "#      " << endl;
			Position(x, y + 5);	cout << "#      " << endl;
			Position(x, y + 6);	cout << "#######" << endl;
			break;

		case 'f':
			Position(x, y);		cout << "#######" << endl;
			Position(x, y + 1);	cout << "#      " << endl;
			Position(x, y + 2);	cout << "#      " << endl;
			Position(x, y + 3);	cout << "#######" << endl;
			Position(x, y + 4);	cout << "#      " << endl;
			Position(x, y + 5);	cout << "#      " << endl;
			Position(x, y + 6);	cout << "#      " << endl;
			break;

		case 'g':
			Position(x, y);		cout << "#######" << endl;
			Position(x, y + 1);	cout << "#      " << endl;
			Position(x, y + 2);	cout << "#      " << endl;
			Position(x, y + 3);	cout << "#  ####" << endl;
			Position(x, y + 4);	cout << "#     #" << endl;
			Position(x, y + 5);	cout << "#     #" << endl;
			Position(x, y + 6);	cout << "#######" << endl;
			break;

		case 'h':
			Position(x, y);		cout << "#     #" << endl;
			Position(x, y + 1);	cout << "#     #" << endl;
			Position(x, y + 2);	cout << "#     #" << endl;
			Position(x, y + 3);	cout << "#######" << endl;
			Position(x, y + 4);	cout << "#     #" << endl;
			Position(x, y + 5);	cout << "#     #" << endl;
			Position(x, y + 6);	cout << "#     #" << endl;
			break;

		case 'i':
			Position(x, y);		cout << "#######" << endl;
			Position(x, y + 1);	cout << "   #   " << endl;
			Position(x, y + 2);	cout << "   #   " << endl;
			Position(x, y + 3);	cout << "   #   " << endl;
			Position(x, y + 4);	cout << "   #   " << endl;
			Position(x, y + 5);	cout << "   #   " << endl;
			Position(x, y + 6);	cout << "#######" << endl;
			break;

		case 'j':
			Position(x, y);		cout << "#######" << endl;
			Position(x, y + 1);	cout << "   #   " << endl;
			Position(x, y + 2);	cout << "   #   " << endl;
			Position(x, y + 3);	cout << "   #   " << endl;
			Position(x, y + 4);	cout << "#  #   " << endl;
			Position(x, y + 5);	cout << "#  #   " << endl;
			Position(x, y + 6);	cout << " ###   " << endl;
			break;

		case 'k':
			Position(x, y);		cout << "#     #" << endl;
			Position(x, y + 1);	cout << "#    # " << endl;
			Position(x, y + 2);	cout << "#   #  " << endl;
			Position(x, y + 3);	cout << "####   " << endl;
			Position(x, y + 4);	cout << "#   #  " << endl;
			Position(x, y + 5);	cout << "#    # " << endl;
			Position(x, y + 6);	cout << "#     #" << endl;
			break;

		case 'l':
			Position(x, y);		cout << "#      " << endl;
			Position(x, y + 1);	cout << "#      " << endl;
			Position(x, y + 2);	cout << "#      " << endl;
			Position(x, y + 3);	cout << "#      " << endl;
			Position(x, y + 4);	cout << "#      " << endl;
			Position(x, y + 5);	cout << "#      " << endl;
			Position(x, y + 6);	cout << "#######" << endl;
			break;

		case 'm':
			Position(x, y);		cout << "#     #" << endl;
			Position(x, y + 1);	cout << "##   ##" << endl;
			Position(x, y + 2);	cout << "# # # #" << endl;
			Position(x, y + 3);	cout << "#  #  #" << endl;
			Position(x, y + 4);	cout << "#     #" << endl;
			Position(x, y + 5);	cout << "#     #" << endl;
			Position(x, y + 6);	cout << "#     #" << endl;
			break;

		case 'n':
			Position(x, y);		cout << "#     #" << endl;
			Position(x, y + 1);	cout << "##    #" << endl;
			Position(x, y + 2);	cout << "# #   #" << endl;
			Position(x, y + 3);	cout << "#  #  #" << endl;
			Position(x, y + 4);	cout << "#   # #" << endl;
			Position(x, y + 5);	cout << "#    ##" << endl;
			Position(x, y + 6);	cout << "#     #" << endl;
			break;

		case 'o':
			Position(x, y);		cout << "#######" << endl;
			Position(x, y + 1);	cout << "#     #" << endl;
			Position(x, y + 2);	cout << "#     #" << endl;
			Position(x, y + 3);	cout << "#     #" << endl;
			Position(x, y + 4);	cout << "#     #" << endl;
			Position(x, y + 5);	cout << "#     #" << endl;
			Position(x, y + 6);	cout << "#######" << endl;
			break;

		case 'p':
			Position(x, y);		cout << "###### " << endl;
			Position(x, y + 1);	cout << "#     #" << endl;
			Position(x, y + 2);	cout << "#     #" << endl;
			Position(x, y + 3);	cout << "###### " << endl;
			Position(x, y + 4);	cout << "#      " << endl;
			Position(x, y + 5);	cout << "#      " << endl;
			Position(x, y + 6);	cout << "#      " << endl;
			break;

		case 'q':
			Position(x, y);		cout << "###### " << endl;
			Position(x, y + 1);	cout << "#    # " << endl;
			Position(x, y + 2);	cout << "#    # " << endl;
			Position(x, y + 3);	cout << "#    # " << endl;
			Position(x, y + 4);	cout << "#  # # " << endl;
			Position(x, y + 5);	cout << "#   ## " << endl;
			Position(x, y + 6);	cout << "##### #" << endl;
			break;

		case 'r':
			Position(x, y);		cout << "###### " << endl;
			Position(x, y + 1);	cout << "#     #" << endl;
			Position(x, y + 2);	cout << "#     #" << endl;
			Position(x, y + 3);	cout << "###### " << endl;
			Position(x, y + 4);	cout << "#     #" << endl;
			Position(x, y + 5);	cout << "#     #" << endl;
			Position(x, y + 6);	cout << "#     #" << endl;
			break;

		case 's':
			Position(x, y);		cout << "#######" << endl;
			Position(x, y + 1);	cout << "#      " << endl;
			Position(x, y + 2);	cout << "#      " << endl;
			Position(x, y + 3);	cout << "#######" << endl;
			Position(x, y + 4);	cout << "      #" << endl;
			Position(x, y + 5);	cout << "      #" << endl;
			Position(x, y + 6);	cout << "#######" << endl;
			break;

		case 't':
			Position(x, y);		cout << "#######" << endl;
			Position(x, y + 1);	cout << "   #   " << endl;
			Position(x, y + 2);	cout << "   #   " << endl;
			Position(x, y + 3);	cout << "   #   " << endl;
			Position(x, y + 4);	cout << "   #   " << endl;
			Position(x, y + 5);	cout << "   #   " << endl;
			Position(x, y + 6);	cout << "   #   " << endl;
			break;

		case 'v':
			Position(x, y);		cout << "#     #" << endl;
			Position(x, y + 1);	cout << "#     #" << endl;
			Position(x, y + 2);	cout << "#     #" << endl;
			Position(x, y + 3);	cout << "#     #" << endl;
			Position(x, y + 4);	cout << " #   # " << endl;
			Position(x, y + 5);	cout << "  # #  " << endl;
			Position(x, y + 6);	cout << "   #   " << endl;
			break;
		case 'u':
			Position(x, y);		cout << "#     #" << endl;
			Position(x, y + 1);	cout << "#     #" << endl;
			Position(x, y + 2);	cout << "#     #" << endl;
			Position(x, y + 3);	cout << "#     #" << endl;
			Position(x, y + 4);	cout << "#     #" << endl;
			Position(x, y + 5);	cout << "#     #" << endl;
			Position(x, y + 6);	cout << "#######" << endl;
			break;
		case 'w':
			Position(x, y);		cout << "#     #" << endl;
			Position(x, y + 1);	cout << "#     #" << endl;
			Position(x, y + 2);	cout << "#     #" << endl;
			Position(x, y + 3);	cout << "#  #  #" << endl;
			Position(x, y + 4);	cout << "# # # #" << endl;
			Position(x, y + 5);	cout << "##   ##" << endl;
			Position(x, y + 6);	cout << "#     #" << endl;
			break;

		case 'x':
			Position(x, y);		cout << "#     #" << endl;
			Position(x, y + 1);	cout << " #   # " << endl;
			Position(x, y + 2);	cout << "  # #  " << endl;
			Position(x, y + 3);	cout << "   #   " << endl;
			Position(x, y + 4);	cout << "  # #  " << endl;
			Position(x, y + 5);	cout << " #   # " << endl;
			Position(x, y + 6);	cout << "#     #" << endl;
			break;

		case 'y':
			Position(x, y);		cout << "#     #" << endl;
			Position(x, y + 1);	cout << "#     #" << endl;
			Position(x, y + 2);	cout << " #   # " << endl;
			Position(x, y + 3);	cout << "  # #  " << endl;
			Position(x, y + 4);	cout << "   #   " << endl;
			Position(x, y + 5);	cout << "   #   " << endl;
			Position(x, y + 6);	cout << "   #   " << endl;
			break;

		case 'z':
			Position(x, y);		cout << "#######" << endl;
			Position(x, y + 1);	cout << "     # " << endl;
			Position(x, y + 2);	cout << "    #  " << endl;
			Position(x, y + 3);	cout << "   #   " << endl;
			Position(x, y + 4);	cout << "  #    " << endl;
			Position(x, y + 5);	cout << " #     " << endl;
			Position(x, y + 6);	cout << "#######" << endl;
			break;
		case '0':
			Position(x, y);		cout << "#######" << endl;
			Position(x, y + 1);	cout << "#######" << endl;                    
			Position(x, y + 2);	cout << "#######" << endl;                        
			Position(x, y + 3);	cout << "#######" << endl;                          
			Position(x, y + 4);	cout << "#######" << endl;
			Position(x, y + 5);	cout << "#######" << endl;                       
			Position(x, y + 6);	cout << "#######" << endl;
			break;
		case '1':
			Position(x, y);		cout << "##                           " << endl;
			Position(x, y + 1);	cout << "##                           " << endl;
			Position(x, y + 2);	cout << "##                           " << endl;
			Position(x, y + 3);	cout << "##                           " << endl;
			Position(x, y + 4);	cout << "##                           " << endl;
			Position(x, y + 5);	cout << "##                           " << endl;
			Position(x, y + 6);	cout << "##                           " << endl;
			break;
		case '2':
			Position(x, y);		cout << "## ##                        " << endl;
			Position(x, y + 1);	cout << "## ##                        " << endl;
			Position(x, y + 2);	cout << "## ##                        " << endl;
			Position(x, y + 3);	cout << "## ##                        " << endl;
			Position(x, y + 4);	cout << "## ##                        " << endl;
			Position(x, y + 5);	cout << "## ##                        " << endl;
			Position(x, y + 6);	cout << "## ##                        " << endl;
			break;
		case '3':
			Position(x, y);		cout << "## ## ##                     " << endl;
			Position(x, y + 1);	cout << "## ## ##                     " << endl;
			Position(x, y + 2);	cout << "## ## ##                     " << endl;
			Position(x, y + 3);	cout << "## ## ##                     " << endl;
			Position(x, y + 4);	cout << "## ## ##                     " << endl;
			Position(x, y + 5);	cout << "## ## ##                     " << endl;
			Position(x, y + 6);	cout << "## ## ##                     " << endl;
			break;
		case '4':
			Position(x, y);		cout << "## ## ## ##                  " << endl;
			Position(x, y + 1);	cout << "## ## ## ##                  " << endl;
			Position(x, y + 2);	cout << "## ## ## ##                  " << endl;
			Position(x, y + 3);	cout << "## ## ## ##                  " << endl;
			Position(x, y + 4);	cout << "## ## ## ##                  " << endl;
			Position(x, y + 5);	cout << "## ## ## ##                  " << endl;
			Position(x, y + 6);	cout << "## ## ## ##                  " << endl;
			break;
		case '5':
			Position(x, y);		cout << "## ## ## ## ##               " << endl;
			Position(x, y + 1);	cout << "## ## ## ## ##               " << endl;
			Position(x, y + 2);	cout << "## ## ## ## ##               " << endl;
			Position(x, y + 3);	cout << "## ## ## ## ##               " << endl;
			Position(x, y + 4);	cout << "## ## ## ## ##               " << endl;
			Position(x, y + 5);	cout << "## ## ## ## ##               " << endl;
			Position(x, y + 6);	cout << "## ## ## ## ##               " << endl;
			break;
		case '6':
			Position(x, y);		cout << "## ## ## ## ## ##            " << endl;
			Position(x, y + 1);	cout << "## ## ## ## ## ##            " << endl;
			Position(x, y + 2);	cout << "## ## ## ## ## ##            " << endl;
			Position(x, y + 3);	cout << "## ## ## ## ## ##            " << endl;
			Position(x, y + 4);	cout << "## ## ## ## ## ##            " << endl;
			Position(x, y + 5);	cout << "## ## ## ## ## ##            " << endl;
			Position(x, y + 6);	cout << "## ## ## ## ## ##            " << endl;
			break;
		case '7':
			Position(x, y);		cout << "## ## ## ## ## ## ##         " << endl;
			Position(x, y + 1);	cout << "## ## ## ## ## ## ##         " << endl;
			Position(x, y + 2);	cout << "## ## ## ## ## ## ##         " << endl;
			Position(x, y + 3);	cout << "## ## ## ## ## ## ##         " << endl;
			Position(x, y + 4);	cout << "## ## ## ## ## ## ##         " << endl;
			Position(x, y + 5);	cout << "## ## ## ## ## ## ##         " << endl;
			Position(x, y + 6);	cout << "## ## ## ## ## ## ##         " << endl;
			break;
		case '8':
			Position(x, y);		cout << "## ## ## ## ## ## ## ##      " << endl;
			Position(x, y + 1);	cout << "## ## ## ## ## ## ## ##      " << endl;
			Position(x, y + 2);	cout << "## ## ## ## ## ## ## ##      " << endl;
			Position(x, y + 3);	cout << "## ## ## ## ## ## ## ##      " << endl;
			Position(x, y + 4);	cout << "## ## ## ## ## ## ## ##      " << endl;
			Position(x, y + 5);	cout << "## ## ## ## ## ## ## ##      " << endl;
			Position(x, y + 6);	cout << "## ## ## ## ## ## ## ##      " << endl;
			break;
		case '9':
			Position(x, y);		cout << "## ## ## ## ## ## ## ## ##   " << endl;
			Position(x, y + 1);	cout << "## ## ## ## ## ## ## ## ##   " << endl;
			Position(x, y + 2);	cout << "## ## ## ## ## ## ## ## ##   " << endl;
			Position(x, y + 3);	cout << "## ## ## ## ## ## ## ## ##   " << endl;
			Position(x, y + 4);	cout << "## ## ## ## ## ## ## ## ##   " << endl;
			Position(x, y + 5);	cout << "## ## ## ## ## ## ## ## ##   " << endl;
			Position(x, y + 6);	cout << "## ## ## ## ## ## ## ## ##   " << endl;
			break;
		case 'C':
			Position(x, y);		cout << "       " << endl;
			Position(x, y + 1);	cout << "       " << endl;
			Position(x, y + 2);	cout << "       " << endl;
			Position(x, y + 3);	cout << "       " << endl;
			Position(x, y + 4);	cout << "       " << endl;
			Position(x, y + 5);	cout << "       " << endl;
			Position(x, y + 6);	cout << "       " << endl;
			break;
		}


		x += 9;
	}
}
void Cube(int x, int y, int length, int height, bool blank) {

	int tempX = x;
	int tempY = y;

	for (int i = 0; i < length; i++) {

		Position(x + 1, y); cout << "- ";
		Position(x + 1, y + height); cout << "- ";
		x++;
	}

	x = tempX;
	for (int i = 1; i < height; i++) {

		Position(x, y + 1); cout << "|";
		Position(x + length + 1, y + 1); cout << "|";
		y++;
	}
	x = tempX;
	y = tempY;
	if (blank == FALSE) {
		int l = 0;
		int c = 1;
		for (int i = 0; i < height - 1; i++) {
			for (int ii = 0; ii < length - 1; ii++) {

				Position(x + 1, y + 1); cout << " ";
				x++;

			}
			x = tempX;
			y++;
		}
	}


}
void Cubes(int x, int y, int length, int height, bool blank) {

	int tempX = x;
	int tempY = y;

	for (int i = 0; i < length+1; i++) {

		Position(x , y); cout << "  ";
		Position(x , y + height); cout << "  ";
		x++;
	}

	x = tempX;
	for (int i = 1; i < height; i++) {

		Position(x, y + 1); cout << " ";
		Position(x + length + 1, y + 1); cout << " ";
		y++;
	}
	x = tempX;
	y = tempY;
	if (blank == FALSE) {
		int l = 0;
		int c = 1;
		for (int i = 0; i < height - 1; i++) {
			for (int ii = 0; ii < length - 1; ii++) {

				Position(x + 1, y + 1); cout << " ";
				x++;

			}
			x = tempX;
			y++;
		}
	}


}
int random(int min, int max) {

	srand(time(NULL));
	int randomNumber = 0;
	randomNumber = rand() % (max - min) + min; 

	return randomNumber;
}
string getLine(ifstream& file, int line) {
	
	string reLine;
	
	file.seekg(ios::beg);
	for (int i = 0; i <= line-1; i++) {
		file >> reLine;
	}

	return reLine;
}