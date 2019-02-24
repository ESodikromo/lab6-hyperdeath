#pragma once
#include <string>
using namespace std;
struct LegoSet {
	int number;
	string theme;
	string name;
	int minifigs;
	int pieces;
	double price;
	LegoSet(int nu, string th, string na, int mi, int pi, double pr);
};
