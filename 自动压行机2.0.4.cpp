#include<bits/stdc++.h>
#include<windows.h>
#include"conio.h"
#include<shlobj.h>
#define LL long long
using namespace std;
int id = 0;
vector <string> s;
void down(int vk);
void up(int vk);
void press(int vk);
void init();
void clude();
void introduction();
void dele_space(string s);
void display1();
void update();
void close();
void make();
int main() {
	press(VK_LSHIFT);
	display1();

	return 0;
}
void down(int vk) {
	keybd_event(vk, 0, 0, 0);
	return ;
}
void up(int vk) {
	keybd_event(vk, 0, KEYEVENTF_KEYUP, 0);
	return;
}
void press(int vk) {
	down(vk);
	up(vk);
	return;
}
void init() {
	while (1) {
		string l;
		getline(cin, l);
		if (l == "!!!") {
			break;
		}
		s.push_back(l);
	}
}
void introduction() {
	system("cls");
	printf("使用方法:\n1.将原代码复制入剪切板\n2.打开本程序\n3.按f进入压行界面，粘贴原代码，并以“!!!”单行成段为结束\n4.手动粘贴走代码\n\n");
	printf("使用方法（适用于2.2.0以后，版本敬请期待）:\n1.将原代码复制入剪切板\n2.打开本程序\n3.按f自动开始压行，并会自动保存入剪贴板\n4.关闭本程序并回到ide用ctrl+v粘贴代码安心食用");
	for (int i = 0; i < 19; i++) {
		cout << endl;
	}
	cout << "按任意键返回主界面";
	char c = getch();
	display1();
	return;
}
void dele_space(int id) {
	bool flag = 0;
	int l = s[id].length();
	for (int i = 0; i < l; i++) {
		if (flag == 0 && s[id][i] == '"') {
			flag = 1;

		} else if (flag == 1 && s[id][i] == '"') {
			flag = 0;

		}
		if (s[id][i] == ' ') {
			if (flag == 0) {
				if (i + 1 == l) {
					s[id].erase(i, 1);
				} else {
					if (s[id][i + 1] == ' ') {
						s[id].erase(i, 1);
						i--;
					}
				}
			}


		}
	}
	return ;
}
void display1() {
	system("cls");

	printf("自动压行机\n作者：周浩宇\n版本：2.0.4\n按[u]查看更新内容\n按[i]查看使用说明\n按[f]进入自动压行\n按其他键位关闭\n");
	char c = getch();

	if (c == 'i') {
		introduction();
	}
	if (c == 'u') {
		update();
	}
	if (c == 'f') {
		system("cls");
		/*
		make();
		freopen("example.txt","r",stdin);
		*/
		init();
		system("cls");
		cout << "请复制后食用" << endl << endl;

		for (int i = id; i < s.size(); i++) {

			for (int j = 0; j < s[i].length(); j++) {

				if (s[i][j] == ' ' || s[i][j] == '\t') {
					s[i].erase(j, 1);
					j--;

				} else {
					break;
				}
			}
			dele_space(i);
			bool flag = 0;
			vector <int>ly;
			vector <int>ry;
			bool tttt = 0;
			for (int k = 0; k <= s[i].length(); k++) {
				if (tttt == 0 && s[i][k] == '"') {
					tttt = 1;
					ly.push_back(k);
				} else if (tttt == 1 && s[i][k] == '"') {
					tttt = 0;
					ry.push_back(k);
				}

			}
			bool ffflag = 0;
			int shi1 = s[i].find("#");
			int shi2 = s[i].find("//");
			for (int k = 0; k < ly.size(); k++) {
				if (shi1 > ly[k] && shi1 < ry[k] || shi2 > ly[k] && shi2 < ry[k]) {
					ffflag = 1;
				}
			}

			if (s[i].find("#") != -1 && ffflag == 0) {
				if (i != 0) {

					cout << endl;

				}
				if (s[i + 1].find("#") != -1) {
					cout << s[i];
				} else {
					cout << s[i] << endl;

				}
			} else if (s[i].find("//") != -1 && ffflag == 0) {
				if (s[i + 1].find("#") != -1) {
					cout << s[i];
				} else {
					cout << s[i] << endl;
				}

			} else {
				if (s[i][s[i].length() - 1] == ';') {
					cout << s[i];
				} else {
					cout << s[i] << ' ';
				}

			}



		}
		for (int i = 0; i <= 15; i++) {
			cout << endl;
		}
		system("pause");
		close();
	} else {
		close();
	}

	return ;
}
void update() {
	system("cls");
	printf("2024.10.??  1.0.0  第一代自动压行机问世，手动输入代码进行压行（但是代码不见了QAQ）\n");
	printf("2024.10.23  2.0.0  修复了头文件不加空格无法识别的问题\n");
	printf("                   修复了引号头文件无法识别的问题\n");
	printf("                   新增#define的识别\n");
	printf("2024.10.23  2.0.1  修复了退出异常的问题\n");
	printf("2024.10.23  2.0.2  修复了更新文件异常的问题\n");
	printf("                   新增#所有的识别\n");
	printf("                   新增//所有的识别\n");
	printf("2024.10.23  2.0.3  修复了换行异常的问题\n");
	printf("2024.10.24  2.0.4  修复了空格异常与引号异常的问题\n");
	printf("                   （今天程序员日我还在改代码）\n");

	for (int i = 0; i < 19; i++) {
		cout << endl;
	}
	cout << "按任意键返回主界面";
	char c = getch();
	display1();
	return;
}
void close() {
	system("cls");
	cout << "感谢使用，祝您AKIOI";
	Sleep(1500);
	exit(0);
}
void make() {
	//局部变量
	system("type nul > example.in");
	//freopen("example.in","r",stdin);
	freopen("example.in", "w", stdout);
	char *pbuf = NULL;
	int i, count = 0; //count 表示单词的数量
	char word[30];//字符数组，保存单词

	HANDLE hclip;//剪切板句柄


	//打开剪切板，获取里面的数据
	if (OpenClipboard(NULL) == 0) {
		printf("打开剪切板失败！\n");
		exit(-1);
	}
	//剪切板当中的数据是不是文本类型的
	if (!IsClipboardFormatAvailable(CF_TEXT)) {
		printf("剪切板当中的数据类型不匹配!\n");
		CloseClipboard();//关闭剪切板，不然其他程序无法正常0使用剪切板
		exit(-1);
	}
	//获取剪切板里面的数据
	hclip = GetClipboardData(CF_TEXT);
	pbuf = (char *)GlobalLock(hclip); //加锁，返回一个VOID类型的指针
	GlobalUnlock(hclip);//解锁
	//测试剪切板是否能使用
	//printf("%s\n",pbuf);
	//找出所有文件的单词
	while (1) {

		//如果到了字符串末尾就退出循环
		if (*pbuf == 0)
			break;

		i = 0;
		do {
			word[i] = *pbuf; //将读取到的字母或数字字符赋给word
			++pbuf;//将指针指向下一个字符处
			++i;
		} while (*pbuf && isalnum(*pbuf));
		word[i] = '\0'; //添加字符串结束
		printf("%s", word); //在屏幕上打印出该单词
		++count;
	}

	CloseClipboard();//关闭剪切板，不然其他程序无法正常0使用剪切板
	cout << endl << "!!!";
	freopen( "CON", "w", stdout );
	//fclose(stdout);
}
