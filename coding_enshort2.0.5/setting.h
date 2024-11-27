void st() {
	while(1){
		system("cls");
		printf("功能设置：\n");
		printf("压行：           %d\n", ifyahang);
		printf("去掉注释：       %d\n", ifquzhushi);
		for (int i = 0; i < 24; i++) {
			cout << endl;
		}
		cout<<"按y调整[压行]参数"<<endl;
		cout<<"按q调整[去掉注释]参数"<<endl;
		cout << "按其他任意键确定并返回主界面";
		char c = getch();
		if(c == 'y'){
			ifyahang = !ifyahang;
		}else if(c == 'q'){
			ifquzhushi = !ifquzhushi;
		}else{
			break;
		}
	}
	data_up();
	return;
}