#include "LegoSet.h"
#include <string>
using namespace std;
LegoSet::LegoSet(int nu, string th, string na, int mi, int pi, double pr) {
	number = nu;
	theme = th;
	name = na;
	minifigs = mi;
	pieces = pi;
	price = pr;
}