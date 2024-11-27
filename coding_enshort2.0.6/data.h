#include <bits/stdc++.h>
#include"conio.h"
#include<shlobj.h>
#include "key_board.h"
#define LL long long
#define N 1e6+10
using namespace std;
int ifyahang;
int ifquzhushi;
int id = 0;
vector <string> s;

void chushi() {
	keybd_event(SHIFT_PRESSED, 0, 0, 0);
	keybd_event(SHIFT_PRESSED, 0, KEYEVENTF_KEYUP, 0);
	std::ifstream inFile;
	inFile.open("in.in");
	inFile >> ifyahang >> ifquzhushi;
	inFile.close();
	return;
}


void data_up() {
	std::ofstream outFile;
	outFile.open("in.in");
	outFile << ifyahang << endl<< ifquzhushi;
	outFile.close();
	return;
}
