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
	printf("ʹ�÷���:\n1.��ԭ���븴������а�\n2.�򿪱�����\n3.��f����ѹ�н��棬ճ��ԭ���룬���ԡ�!!!�����гɶ�Ϊ����\n4.�ֶ�ճ���ߴ���\n\n");
	printf("ʹ�÷�����������2.2.0�Ժ󣬰汾�����ڴ���:\n1.��ԭ���븴������а�\n2.�򿪱�����\n3.��f�Զ���ʼѹ�У������Զ������������\n4.�رձ����򲢻ص�ide��ctrl+vճ�����밲��ʳ��");
	for (int i = 0; i < 19; i++) {
		cout << endl;
	}
	cout << "�����������������";
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

	printf("�Զ�ѹ�л�\n���ߣ��ܺ���\n�汾��2.0.4\n��[u]�鿴��������\n��[i]�鿴ʹ��˵��\n��[f]�����Զ�ѹ��\n��������λ�ر�\n");
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
		cout << "�븴�ƺ�ʳ��" << endl << endl;

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
	printf("2024.10.??  1.0.0  ��һ���Զ�ѹ�л��������ֶ�����������ѹ�У����Ǵ��벻����QAQ��\n");
	printf("2024.10.23  2.0.0  �޸���ͷ�ļ����ӿո��޷�ʶ�������\n");
	printf("                   �޸�������ͷ�ļ��޷�ʶ�������\n");
	printf("                   ����#define��ʶ��\n");
	printf("2024.10.23  2.0.1  �޸����˳��쳣������\n");
	printf("2024.10.23  2.0.2  �޸��˸����ļ��쳣������\n");
	printf("                   ����#���е�ʶ��\n");
	printf("                   ����//���е�ʶ��\n");
	printf("2024.10.23  2.0.3  �޸��˻����쳣������\n");
	printf("2024.10.24  2.0.4  �޸��˿ո��쳣�������쳣������\n");
	printf("                   ���������Ա���һ��ڸĴ��룩\n");

	for (int i = 0; i < 19; i++) {
		cout << endl;
	}
	cout << "�����������������";
	char c = getch();
	display1();
	return;
}
void close() {
	system("cls");
	cout << "��лʹ�ã�ף��AKIOI";
	Sleep(1500);
	exit(0);
}
void make() {
	//�ֲ�����
	system("type nul > example.in");
	//freopen("example.in","r",stdin);
	freopen("example.in", "w", stdout);
	char *pbuf = NULL;
	int i, count = 0; //count ��ʾ���ʵ�����
	char word[30];//�ַ����飬���浥��

	HANDLE hclip;//���а���


	//�򿪼��а壬��ȡ���������
	if (OpenClipboard(NULL) == 0) {
		printf("�򿪼��а�ʧ�ܣ�\n");
		exit(-1);
	}
	//���а嵱�е������ǲ����ı����͵�
	if (!IsClipboardFormatAvailable(CF_TEXT)) {
		printf("���а嵱�е��������Ͳ�ƥ��!\n");
		CloseClipboard();//�رռ��а壬��Ȼ���������޷�����0ʹ�ü��а�
		exit(-1);
	}
	//��ȡ���а����������
	hclip = GetClipboardData(CF_TEXT);
	pbuf = (char *)GlobalLock(hclip); //����������һ��VOID���͵�ָ��
	GlobalUnlock(hclip);//����
	//���Լ��а��Ƿ���ʹ��
	//printf("%s\n",pbuf);
	//�ҳ������ļ��ĵ���
	while (1) {

		//��������ַ���ĩβ���˳�ѭ��
		if (*pbuf == 0)
			break;

		i = 0;
		do {
			word[i] = *pbuf; //����ȡ������ĸ�������ַ�����word
			++pbuf;//��ָ��ָ����һ���ַ���
			++i;
		} while (*pbuf && isalnum(*pbuf));
		word[i] = '\0'; //����ַ�������
		printf("%s", word); //����Ļ�ϴ�ӡ���õ���
		++count;
	}

	CloseClipboard();//�رռ��а壬��Ȼ���������޷�����0ʹ�ü��а�
	cout << endl << "!!!";
	freopen( "CON", "w", stdout );
	//fclose(stdout);
}
