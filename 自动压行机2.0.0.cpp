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
	cout<<"�븴�ƺ�ʳ��"<<endl<<endl;
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
	printf("ʹ�÷���:\n1.��ԭ���븴������а�\n2.�򿪱�����\n3.��f����ѹ�н��棬ճ��ԭ���룬���ԡ�!!!�����гɶ�Ϊ����\n4.�ֶ�ճ���ߴ���\n\n");
	printf("ʹ�÷�����������2.2.0�Ժ󣬰汾�����ڴ���:\n1.��ԭ���븴������а�\n2.�򿪱�����\n3.��f�Զ���ʼѹ�У������Զ������������\n4.�رձ����򲢻ص�ide��ctrl+vճ�����밲��ʳ��");
	for(int i=0;i<19;i++){
		cout<<endl;
	}
	cout<<"�����������������";
	char c=getch();
	return;
}
void display1(){
	while(1){
		system("cls");
		printf("�Զ�ѹ�л�\n���ߣ��ܺ���\n�汾��2.0.0\n��[u]�鿴��������\n��[i]�鿴ʹ��˵��\n��[f]�����Զ�ѹ��\n��������λ�ر�\n");
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
	printf("2024.10.??  1.0.0  ��һ���Զ�ѹ�л��������ֶ�����������ѹ�У����Ǵ��벻����QAQ��\n");
	printf("2024.10.23  2.0.0  �޸���ͷ�ļ����ӿո��޷�ʶ�������\n");
	printf("                   �޸�������ͷ�ļ��޷�ʶ�������\n");
	printf("                   �޸�������ͷ�ļ��޷�ʶ�������\n");
	printf("                   ����#define��ʶ��\n");
	for(int i=0;i<24;i++){
		cout<<endl;
	}
	cout<<"�����������������";
	char c=getch();
	return;
}
void close(){
	system("cls");
	cout<<"��лʹ�ã�ף��AKIOI";
	Sleep(1500);
	exit(0);
}
void make(){
	//�ֲ�����
	system("type nul > example.txt");
	//freopen("example.txt","r",stdin);
	freopen("example.txt","w",stdout);
	char *pbuf=NULL;
	int i,count=0;//count ��ʾ���ʵ�����
	char word[30];//�ַ����飬���浥��
 
	HANDLE hclip;//���а���
 
	
	//�򿪼��а壬��ȡ���������
	if(OpenClipboard(NULL)==0)
	{
		printf("�򿪼��а�ʧ�ܣ�\n");
		exit(-1);
	}
	//���а嵱�е������ǲ����ı����͵�
	if(!IsClipboardFormatAvailable(CF_TEXT))
	{
		printf("���а嵱�е��������Ͳ�ƥ��!\n");
		CloseClipboard();//�رռ��а壬��Ȼ���������޷�����0ʹ�ü��а�
		exit(-1);
	}
	//��ȡ���а����������
    hclip=GetClipboardData(CF_TEXT);
	pbuf=(char *)GlobalLock(hclip);//����������һ��VOID���͵�ָ��
	GlobalUnlock(hclip);//����
	//���Լ��а��Ƿ���ʹ��
	//printf("%s\n",pbuf);
	//�ҳ������ļ��ĵ���
	while(1)
	{
		
		//��������ַ���ĩβ���˳�ѭ��
		if(*pbuf==0)
			break;
		
		i=0;
		do{
			word[i]=*pbuf;//����ȡ������ĸ�������ַ�����word
			++pbuf;//��ָ��ָ����һ���ַ���
			++i;
		}while(*pbuf&&isalnum(*pbuf));
		word[i]='\0';//����ַ�������
		printf("%s",word);//����Ļ�ϴ�ӡ���õ���
		++count;
	}
	
	CloseClipboard();//�رռ��а壬��Ȼ���������޷�����0ʹ�ü��а�
	cout<<endl<<"!!!";
	freopen( "CON", "w", stdout ); 
	//fclose(stdout);
}
