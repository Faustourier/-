#include "data.h"
#include "debug.h"
#include "update_content.h"
#include "setting.h"
#include "introduction_content.h"
#include "control.h"
#include "solve.h"

//主函数
int main() {
	chushi();
	
	while(1){
		system("cls");
		printf("自动压行机\n作者：周浩宇\n版本：2.0.5\n按[u]查看更新内容\n按[i]查看使用说明\n按[f]进入自动压行\n按[s]进入设置\n按其他键位关闭\n");
		char c = getch();
		if (c == 'i') {
			introduction();
		}else if (c == 'u') {
			update_content();
		}else if (c == 's') {
			st();
		}else if (c == 'f') {
			if(ifyahang== 0&&ifquzhushi==0){
				system("cls");
				printf("请先在设置中开启功能\n");
				Sleep(1000);
			}else{
				system("cls");
				init();
				system("cls");
				if(ifquzhushi == 1&&ifyahang==0){
					quzhushi();
					easy_display();
				}else if(ifquzhushi == 0&&ifyahang==1){
					yahang();
				}else if(ifquzhushi == 1&&ifyahang==1){
					quzhushi();
					yahang();
				}
			}
			
			
			
		}else {
			close();
		}
	}
	

	return 0;
}
