void update_content() {
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
	printf("2024.11.20  2.0.5  新增设置\n");
	printf("                   新增去注释功能\n");
	printf("                   修复了自动退出的bug\n");
	for (int i = 0; i < 16; i++) {
		cout << endl;
	}
	cout << "按任意键返回主界面";
	char c = getch();
	return;
}