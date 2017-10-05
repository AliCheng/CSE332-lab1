// lab1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "lab1header.h"
#include "gameboard.h"
#include "gamepiece.h"

int lowercase(string a) {
	for (auto c : a) {
		tolower(c);
	}
	return success;
}

int usage_message(const string & a) {
	cout << "usage:" << a << "<input_file_name>" << endl;//usage message
	return wrongargument;
}


int main(int argc, char * argv[]){
	ifstream ifs;
	if (argc != expect) {
		return usage_message(argv[programname]);//if the argument number not fit, output usage message
	}
	else {
		ifstream ifs(argv[filename]);  //read input file
		if (ifs.is_open()){
			unsigned int hor, ver;
			int con = readdim(ifs, hor, ver);
			while (con != success) {
				 con = readdim(ifs, hor, ver);
			      }
			vector<game_piece> vec;
			string emptyname = " ";
			string nodisplay = " ";
			game_piece piece;
			for (unsigned int i = 0; i < hor*ver ; i++) { //define vector 
				piece.color = nocolor;
				piece.piecedisplay = nodisplay;
				piece.piecename = emptyname;
				vec.push_back(piece);
			}
			if (readgamepiece(ifs, vec, hor, ver) != success) {//if not success, return the enum value
				return readgamepiece(ifs, vec, hor, ver);
			}
			else {
				return printgamepiece(vec, hor, ver);
			}
			return success;
		}
		else {
			return openfilefail;
		}
	}
}