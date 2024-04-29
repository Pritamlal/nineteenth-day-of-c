#include<stdio.h>
int main()
{
	int num1,num2;
	int *ptr1,*ptr2;
	
	ptr1=&num1;
	ptr2=&num2;
	
	printf("Enter the numbers::\n");
	scanf("%d%d",ptr1,ptr2);
	
	printf("Sum is %d",*ptr1+ *ptr2);
}
