

void init() {
	cout<<"请输入需要处理的代码，以!!!结束";
	cout<<endl;
	while (1) {
		freopen("con","r",stdin);
		string l;
		getline(cin, l);
		//cin>>l;
		if (l == "!!!") {
			break;
		}
		s.push_back(l);
	}
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

void yahang() {
	

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
			if (s[i][s[i].length() - 1] == ';' || s[i][s[i].length() - 1] == '{' || s[i][s[i].length() - 1] == '}') {
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
}



void quzhushi(){
	for(int i=0;i<s.size();i++){
		if(s[i].find("//")!=-1){
			s[i].erase(s[i].find("//"),s[i].length()-s[i].find("//"));
		}
	}
	return;
}

void easy_display() {
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<endl;
    }
	for (int i = 0; i <= 3; i++) {
		cout << endl;
	}
	system("pause");
	return;
}