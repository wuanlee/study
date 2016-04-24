#include <stdio.h>
#include <conio.h>
//#include <malloc.h>
#include <string.h>
void myprint(int m_i);
void mychar(char o_str);
long factnum(int sum );
int main()
{
	/*
	int i = 0;
	int j = 0;
	int map[5][4] = {
		{10,10,10,10},
		{10,0,0,10},
		{10,1,0,10},
		{10,0,0,10},
		{10,10,10,10}
	};
	for(i = 0; i < 5; i++){
		for(j = 0; j < 4; j++){
			if(map[i][j] == 10){
				printf("▇");
			}else if(0 == map[i][j]){
				printf("  ");
			}
			if (map[i][j] == 1)
			{
				printf("⊕");
			}
			//printf("%d\t",map[i][j]);
		}
		printf("\n");
	}
	int box[1][2][3]={0
	};
	*/
	/*
	int n[10]={1,2,3,4,5,6,7,8,9,10};
	int * pn = n;

	//访问数组  方式一 通过下标
	printf("n[2] = %d\n",n[2]);
	//访问数组  方式二 通过指针
	printf("*(pn+2) = %d\n",*(pn+2));
	//访问数组 方式三 通过数组名地址
	printf("*(n+2) = %d\n",*(n+2));
	//访问数组 方式四 通过指针下标
	printf("pn[2] = %d\n",pn[2]);
	*/
	/*
	const int n[10]={1,2,3,4,5,6,7,8,9,0};
	printf("n[2] = %d\n",n[2]);
	//n[2] = 10; const不能对数组进行改变
	const int * pn = n;
	//int * const pn1 = n; //const 修饰的是pn1  不能修改pn1
	int const *  pn2 = n; //const 修饰的是*pn2，修饰的是指向的内容为常量。 
	pn2 = n+2;
	printf("n[2] = %d\n",n[2]);
	*/
	/*
	int map[5][4] = {
		{ 10,10,10,10 },
		{ 10,0,0,10 },
		{ 10,1,0,10 },
		{ 10,0,0,10 },
		{ 10,10,10,10 }
	};
	int (*p)[4] = map;
	*/
	/*
	int i = 100;
	myprint(i);
	myprint(i);
	myprint(i);
	*/
	/*
	long result = 0;
	int initsnum = 4;
	result = factnum(initsnum);
	printf("result:%ld\n", result);
	*/

	//char str[] = "www.microdrink.com";
	/*char *str = "www.microdrink.com";
	int i = 0;
	for (i = 0; str[i] != '\0';i++) {
		printf("str length = %d\n",i+1);
	}
	*/
	/*char *str = NULL;
	int i = 0;
	str = (char *)malloc(sizeof(char) * 100);
	scanf("%s",str);
	for (i = 0; *(str + i) != '\0'; i++)
		printf("str length:%d\n",i);
	free(str);
	*/
	/*char *str = NULL;
	int i = 0;
	str = (char *)malloc(sizeof(char) * 100);
	scanf("%s", str);
	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (*(str + i) >='A' && *(str + i) <='Z') {
			*(str + i) = *(str + i) + ('a' - 'A');
		}
	}
	printf("%s", str);
	free(str);
	*/
	//char str[512] = {0};
	//gets_s(str);
	//printf("%s",str);
/*
	fgets(str,100,stdin);
	printf(str);

	fputs(str,stdout);
	*/
	char str[512] = {0};
	char Dstr2[100] = {0};
	char Sstr2[100] = { 0 };
	gets_s(Sstr2);
	gets_s(Dstr2);

	//strcat(Dstr2, Sstr2);
	//strncat(Dstr2, Sstr2, 4);
	/*int flag = 0;
	flag = strcmp(Dstr2, Sstr2);
	if (flag == 0) {
		printf("%s\n", "相等");
	}
	else {
		printf("%s\n", "不相等");
	}
	printf("%s\n", Dstr2);
	sprintf(Sstr2, "%s=%s", Sstr2, Dstr2);
	printf("%s", Sstr2);
	*/
	FILE *m_file = NULL;
	m_file = fopen("Test.txt", "w");

	if (m_file == NULL) {
		printf("文件打开失败");
		return 0;
	}
	fclose(m_file);

	getch();
	return 0;
}
void mychar(char o_str) {
	if (o_str >= 'a' && o_str <= 'z') {
		o_str -= 'a' - 'A';
	}
	printf("%s",o_str);
}
long factnum(int sum)
{
	long f = 0;
	if (sum > 1) {
		f = factnum(sum - 1)*sum;
	}
	else {
		f = 1;
	}
	return f;
}
void myprint(int m_i) {
	int i = m_i;
	for(i = 0;i < m_i;i++)
	printf("*");
	printf("\n");
}