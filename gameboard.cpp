#include "stdafx.h"
#include "gameboard.h"
#include "lab1header.h"
#include "gamepiece.h"
int readdim(ifstream & a, unsigned int& b, unsigned int&c) {
	string s;
	if (a.is_open()) {
		//string lines, words;
		if (getline(a, s)) {
			stringstream stream(s);
			if (stream >> b && stream >> c) {
				return success;
			}
			else {
				return extract_fail;
			}
		}
		else {
			return getfail;
		}
	}
	else {
		return openfilefail;
	}
		
}

int readgamepiece(ifstream & a, vector<game_piece> & b, unsigned int x, unsigned int y) {
	if (a.is_open()) {
		string lines, color, name, display;
		unsigned int h, v;
		bool st = false;
		while (getline(a, lines)) {
			istringstream iss(lines);
			if (iss >> color >> name >> display >> h >> v) {
				if (returnenum(color) == invalid || returnenum(color) == nocolor) {
				}
				else if (h >= x || v >= y) {
				}
				else {
					b[x*v + h].color = returnenum(color);
					b[x*v + h].piecename = name;
					b[x*v + h].piecedisplay = display;
					st = true;
				}
			}
			else {
				return extract_fail;
			}
		}
		if (st) {
			return success;
		}
		else {
			return getfail;
		}
	}
	else {
		return openfilefail;

	}
}
int printgamepiece(const vector<game_piece> & a, unsigned int x, unsigned int y) {
	if (a.size() == x * y) {
		for (unsigned int i = y ; i > 0; i--) {
			for (unsigned int j = 0; j < x; j++) {
				cout << a[x*(i - 1) + j].piecedisplay;
			}
			cout << endl;
		}
		return success;
	}
	else {
		return sizefail;
	}
}
