#include<stdio.h> // C语言的输入输出靠标准库

/*
注释多行
*/
void main()
{
	/*
	printf("hello world!");
	
	printf("你好，世界！");
	*/

	/*
	#和include之间可以有多个空格。告诉编译器在编译之前要做预先处理。
	#include<file>编译程序会先到标准函数库中找文件。
	#include"file"编译程序会先从当前目录中找文件。
	*/
	#include"helloworld.h"
	#include"helloworld.wsc"
	getchar(); // 等待输入一个字符，获取字符后退出
}