#pragma once
#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>
#include "lab1header.h"
using namespace std;
string returncolor(piece_color a);
piece_color returnenum(string a);

struct game_piece {
	piece_color color;
	string piecename;
	string piecedisplay;
};