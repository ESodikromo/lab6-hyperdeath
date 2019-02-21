#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>
#include "LegoSet.h"
using namespace std;

vector<LegoSet> *fileSelect(int choice);
void expensive(vector<LegoSet> *v);
void largePieceSet(vector<LegoSet> *v);
void searchName(vector<LegoSet> *v);
void searchTheme(vector<LegoSet> *v);
void averageCount(vector<LegoSet> *v);
void averagePrice(vector<LegoSet> *v);
void avgNMostMini(vector<LegoSet> *v);
void allSum(vector<LegoSet> *v);


int main()
{
	/*======= Load data from file(s) =======*/
	/*======= Print out how many sets were loaded =======*/

	/* Imagine your program had a menu like this:
	cout << "1. Most Expensive set" << endl;
	 cout << "2. Largest piece count" << endl;
	 cout << "3. Search for set name containing..." << endl;
	 cout << "4. Search themes..." << endl;
	 cout << "5. Part count information" << endl;
	 cout << "6. Price information" << endl;
	 cout << "7. Minifigure information" << endl;
	 cout << "8. If you bought one of everything..." << endl;
	 cout << "0. Exit" << endl;
	*/
	cout << std::fixed << setprecision(2);
	cout << "Which file(s) to open?\n";
	cout << "1. lego1.csv" << endl;
	cout << "2. lego2.csv" << endl;
	cout << "3. lego3.csv" << endl;
	cout << "4. All 3 files" << endl;
	int option;
	cin >> option;
	int menu;
	cin >> menu;
	cin.get();
	switch (menu) {
	case 1:
		expensive(fileSelect(option));
		break;
	case 2:
		largePieceSet(fileSelect(option));
		break;
	case 3:
		searchName(fileSelect(option));
		break;

	case 4:
		searchTheme(fileSelect(option));
		break;

	case 5:
		averageCount(fileSelect(option));
		break;

	case 6:
		averagePrice(fileSelect(option));
		break;

	case 7:
		avgNMostMini(fileSelect(option));
		break;
	case 8:
		return 0;
	default:
		cout << "bad input" << endl;
	}

	return 0;
}

vector<LegoSet> *fileSelect(int choice)
{
	ifstream inFS;
	vector<LegoSet> *result = new vector<LegoSet>;
	if (choice != 4) {
		string opt = "File" + std::to_string(choice) + ".csv";
		inFS.open(opt, ios::in);
		string z;
		inFS >> z;
		while (!inFS.eof) {
			string line;
			size_t caret = 0;
			size_t caret2 = 0;
			inFS >> line;

			caret2 = line.find_first_of(',', caret);
			int number = stoi(line.substr(0, caret2));
			caret = caret2 + 1;
			caret2 = line.find_first_of(',', caret);
			string theme = line.substr();


			caret = line.find_first_of(',', caret+1);
			string name;
			
			caret = line.find_first_of(',', caret+1);
			int minifigs;
			
			caret = line.find_first_of(',', caret+1);
			int pieces;
			double price;

			result->push_back(LegoSet(number, theme, name, minifigs, pieces, price));
		}
	}
	return result;
}

void expensive(vector<LegoSet> *v)
{
}

void largePieceSet(vector<LegoSet> *v)
{
}

void searchName(vector<LegoSet> *v)
{
}

void searchTheme(vector<LegoSet> *v)
{
}

void averageCount(vector<LegoSet> *v)
{
}

void averagePrice(vector<LegoSet> *v)
{
}

void avgNMostMini(vector<LegoSet> *v)
{
}

void allSum(vector<LegoSet> *v)
{
}
