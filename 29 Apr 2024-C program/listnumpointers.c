#include<stdio.h>
int main()
{
	int arr[1000];
	int *ptr=arr;
	int N,i;
	
	printf("Enter the size of array::");
	scanf("%d",&N);
	
	printf("Enter the numbers::");
	for(i=0;i<N;i++)
	{
		scanf("%d",ptr);
		ptr++;
	}
	
	ptr=arr;
	
	for(i=0;i<N;i++)
	{
		printf("%d ",*ptr);
		ptr++;
	}
}
