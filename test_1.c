//写代码
//1.写出主函数（main函数）
//100-500 代码
//如何执行？ -c语言是从主函数的第一行开始执行的
//所以
//main  -》函数名
// int 函数返回类型
//{函数体

//}

//写个代码，在屏幕上打印： hugo
//printf - 库函数- 在屏幕上打印信息的
// printf 的使用， 也得打招呼（引用头文件 stdio.h ）


#include <stdio.h>
int main()
{
	printf("hugo\n");

	return 0;
}


//编译+链接+运行代码
//快捷键：ctrl+F5
//程序执行的太快， 没有看到
//为了看到结果， 设置一下vs的属性（general-linker-system-sub: console ）