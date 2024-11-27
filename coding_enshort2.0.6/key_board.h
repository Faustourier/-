#include <bits/stdc++.h>
//#include "fast.h"
#include"conio.h"
#include<shlobj.h>
#define LL long long
#define N 1e6+10

using namespace std;
void key_up(int vk) {
	keybd_event(vk, 0, KEYEVENTF_KEYUP, 0);
	return;
}
void key_down(int vk) {
	keybd_event(vk, 0, 0, 0);
	return ;
}
void press(int vk) {
	key_down(vk);
	key_up(vk);
	return;
}
