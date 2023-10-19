#include <stdio.h>

int main(void)
{
	//int i;//initialize is required
	int i = 10;
	printf("함수 호출전 i = % d\n", i);
	i =inc(i);
	printf("함수 호출후 i = % d\n", i);
	return 0;
}
int inc(int counter)
{
	counter++;
	return counter;
}