
#include "stdafx.h"
#include "lab1header.h"
#include "gamepiece.h"
string returncolor(piece_color a) {
	switch (a) {
	case 1:
		return "black";
		break;
	case 2:
		return "red";
		break;
	case 3:
		return "white";
		break;
	case 4:
		return "nocolor";
		break;
	default:
		return "invalid";
	}
}

piece_color returnenum(string a) {
	lowercase(a);
	if (a == "black") {
		return piece_color::black;
	}
	else if (a == "red") {
		return piece_color::red;
	}
	else if (a == "white") {
		return piece_color::white;
	}
	else if (a.find_first_not_of(' ') != string::npos) {
		return piece_color::nocolor;
	}
	else {
		return piece_color::invalid;
	}
}