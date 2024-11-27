#include<bits/stdc++.h>
#include<windows.h>
#include"conio.h"
#include<shlobj.h>
#define LL long long
using namespace std;
int id=0;
vector <string> s;
void down(int vk);
void up(int vk);
void press(int vk);
void init();
void clude();
void introduction();
void display1();
void update();
void close();
void make();
int main(){
	press(VK_LSHIFT);
	display1();
	system("cls");
	/*
	make();
	freopen("example.txt","r",stdin);
	*/
	init();
	system("cls");
	cout<<"请复制后食用"<<endl<<endl;
	clude();
	for(int i=id;i<s.size();i++){
		
		cout<<s[i]<<' ';
	}
	for(int i=0;i<=15;i++){
		cout<<endl;
	}
	system("pause");
	close();
	return 0;
}

void down(int vk){
	keybd_event(vk,0,0,0);
	return ;
}
void up(int vk){
	keybd_event(vk,0,KEYEVENTF_KEYUP,0);
	return;
}
void press(int vk){
	down(vk);
	up(vk);
	return;
}

void init(){
	while(1){
		string l;
		cin>>l;
		if(l=="!!!"){
			break;
		}
		s.push_back(l);
	}
}
void clude(){
	while(s[id][0]=='#'){
		if(s[id+1][0]=='<'||s[id+1][0]=='"'){
			cout<<s[id]<<s[id+1]<<endl;
			id++;
			id++;
			continue;
		}else{
			if(s[id][s[id].length()-1]=='>'||s[id][s[id].length()-1]=='"'){
				cout<<s[id]<<endl;
				id++;
				continue;
			}else if(s[id]=="#define"){
				if(s[id+2]=="long"){
					cout<<s[id]<<' '<<s[id+1]<<' '<<s[id+2]<<' '<<s[id+3]<<endl;
					id++;
					id++;
					id++;
					id++;
					continue;
				}else{
					cout<<s[id]<<' '<<s[id+1]<<' '<<s[id+2];
					id++;
					id++;
					id++;
					continue;
				}
			}
		}
	}
}
void introduction(){
	system("cls");
	printf("使用方法:\n1.将原代码复制入剪切板\n2.打开本程序\n3.按f进入压行界面，粘贴原代码，并以“!!!”单行成段为结束\n4.手动粘贴走代码\n\n");
	printf("使用方法（适用于2.2.0以后，版本敬请期待）:\n1.将原代码复制入剪切板\n2.打开本程序\n3.按f自动开始压行，并会自动保存入剪贴板\n4.关闭本程序并回到ide用ctrl+v粘贴代码安心食用");
	for(int i=0;i<19;i++){
		cout<<endl;
	}
	cout<<"按任意键返回主界面";
	char c=getch();
	return;
}
void display1(){
	while(1){
		system("cls");
		printf("自动压行机\n作者：周浩宇\n版本：2.0.0\n按[u]查看更新内容\n按[i]查看使用说明\n按[f]进入自动压行\n按其他键位关闭\n");
		char c=getch();
		
		if(c=='i'){
			introduction();	
		}
		if(c=='u'){
			update();	
		}if(c=='f'){
			break;
			
		}
	}

	return ;
}
void update(){
	system("cls");
	printf("2024.10.??  1.0.0  第一代自动压行机问世，手动输入代码进行压行（但是代码不见了QAQ）\n");
	printf("2024.10.23  2.0.0  修复了头文件不加空格无法识别的问题\n");
	printf("                   修复了引号头文件无法识别的问题\n");
	printf("                   修复了引号头文件无法识别的问题\n");
	printf("                   新增#define的识别\n");
	for(int i=0;i<24;i++){
		cout<<endl;
	}
	cout<<"按任意键返回主界面";
	char c=getch();
	return;
}
void close(){
	system("cls");
	cout<<"感谢使用，祝您AKIOI";
	Sleep(1500);
	exit(0);
}
void make(){
	//局部变量
	system("type nul > example.txt");
	//freopen("example.txt","r",stdin);
	freopen("example.txt","w",stdout);
	char *pbuf=NULL;
	int i,count=0;//count 表示单词的数量
	char word[30];//字符数组，保存单词
 
	HANDLE hclip;//剪切板句柄
 
	
	//打开剪切板，获取里面的数据
	if(OpenClipboard(NULL)==0)
	{
		printf("打开剪切板失败！\n");
		exit(-1);
	}
	//剪切板当中的数据是不是文本类型的
	if(!IsClipboardFormatAvailable(CF_TEXT))
	{
		printf("剪切板当中的数据类型不匹配!\n");
		CloseClipboard();//关闭剪切板，不然其他程序无法正常0使用剪切板
		exit(-1);
	}
	//获取剪切板里面的数据
    hclip=GetClipboardData(CF_TEXT);
	pbuf=(char *)GlobalLock(hclip);//加锁，返回一个VOID类型的指针
	GlobalUnlock(hclip);//解锁
	//测试剪切板是否能使用
	//printf("%s\n",pbuf);
	//找出所有文件的单词
	while(1)
	{
		
		//如果到了字符串末尾就退出循环
		if(*pbuf==0)
			break;
		
		i=0;
		do{
			word[i]=*pbuf;//将读取到的字母或数字字符赋给word
			++pbuf;//将指针指向下一个字符处
			++i;
		}while(*pbuf&&isalnum(*pbuf));
		word[i]='\0';//添加字符串结束
		printf("%s",word);//在屏幕上打印出该单词
		++count;
	}
	
	CloseClipboard();//关闭剪切板，不然其他程序无法正常0使用剪切板
	cout<<endl<<"!!!";
	freopen( "CON", "w", stdout ); 
	//fclose(stdout);
}
