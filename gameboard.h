#pragma once
#pragma once
#include "stdafx.h"
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>
#include "gamepiece.h" 
using namespace std;

int readdim(ifstream & a, unsigned int& b, unsigned int&c);
int readgamepiece(ifstream & a, vector<game_piece> & b, unsigned int x, unsigned int y);
int printgamepiece(const vector<game_piece> & a, unsigned int x, unsigned int y);