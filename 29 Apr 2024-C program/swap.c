#include<stdio.h>
int main()
{
	int num1,num2,temp;
	int *ptr1,*ptr2;
	
	ptr1=&num1;
	ptr2=&num2;
	
	printf("Enter the numbers::");
	scanf("%d%d",ptr1,ptr2);
	
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
	
	printf("Swapped numbers are %d %d",*ptr1,*ptr2);
}
