

void introduction() {
	system("cls");
	printf("使用方法:\n1.将原代码复制入剪切板\n2.打开本程序\n3.按f进入压行界面，粘贴原代码，并以“!!!”单行成段为结束\n4.手动粘贴走代码\n\n");
	printf("使用方法（适用于2.2.0以后，版本敬请期待）:\n1.将原代码复制入剪切板\n2.打开本程序\n3.按f自动开始压行，并会自动保存入剪贴板\n4.关闭本程序并回到ide用ctrl+v粘贴代码安心食用");
	for (int i = 0; i < 19; i++) {
		cout << endl;
	}
	cout << "按任意键返回主界面";
	char c = getch();
	return;
}

