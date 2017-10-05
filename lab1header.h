#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;
int usage_message(const string & a);
int lowercase(string a);


enum piece_color {
	black = 1,
	red = 2,
	white = 3,
	nocolor = 4,
	invalid = 5
};

enum success {
	success = -1,
	openfilefail = 0,
	getfail = 1,
	fail = 2,
	extract_fail = 4,
	wrongargument = 3,
	sizefail = 5
};

enum file {
	filename = 1,
	programname = 0,
	expect = 2,
};