#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a=4;//int variable
	float b=6.78;//float variable

	void *ptr;//void pointer

	ptr=&a;//assign int to void ptr

	printf("%d ",*(int *)ptr);//typecast  void to int and print

	ptr=&b;//assigning the float to void ptr

	printf("%f ",*(float *)ptr);//typecast void to float and print

	return 0;
}
