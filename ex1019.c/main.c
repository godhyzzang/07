#include <stdio.h>
void f(void);
int i;
int main(void)
{
	for (i = 0; i < 5; i++)
	{
		f();
	}
	return 0;
}
void f(void)
{
	for (int i = 0; i < 10; i++)//f함수 블록 안에서만 쓰이는 i 변수. 전역변수 i와 다름. 
		printf("#");
}