//字符串

/*
	字符数组：  数组是一组 同类型的元素
*/
#include<stdio.h>
#include<string.h>

int main()
{
	char arr1[] = "abc";// 字符串在结尾的位置
	//隐藏了一个\0 的字符，\0是字符串的结束标志
	char arr2[] = { 'a','b','c' }; //单引号 引起来的是一个字符
							//双引号引起的是一组字符
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	//如果字符串的末尾不放 \0 ， 则打印的时候 abc后面会打印乱码， 
	//当遇到\0时， 则会停止。 arr1和arr2的结果就会一样。

	//1.	char arr2[] = ('a','b','c'); ---->	abc╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠╠öÉ⌂┌ⁿ⌂
	//2.	char arr2[] = ('a','b','c','\0'); ---> abc


	//求一下字符串的长度
	//strlen()

	int len = strlen("abc"); // string length
	printf("%d\n", len);
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));

	//strlen()仅仅计算字符串的长度， 不包含\0

	/*
	1>OCT29.C
1>C:\Users\Eddie He\source\repos\Project3\OCT29.C(26,12): warning C4013: “strlen”未定义；假设外部返回 int
1>Project3.vcxproj -> C:\Users\Eddie He\source\repos\Project3\x64\Debug\Project3.exe
1>已完成生成项目“Project3.vcxproj”的操作。
	
	这里有个警告， strlen未定义， 则可以通过添加头文件 #include<string.h>即可
	


	ctrl+D 可以快速复制上一行代码到下一行
	*/

	return 0;
}