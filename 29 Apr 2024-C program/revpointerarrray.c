#include<stdio.h>
int printArr(int *arr,int size);
int main()
{
	int size,arr[1000];
	int *left=arr;
	int *right;
	int N;
	
	printf("Enter the size:::");
	scanf("%d",&N);
	
	right=&arr[N-1];
	
	printf("Enter the numbers::");
	while(left<=right)
	{
		scanf("%d",left++);
	}
	
	left=arr;
	
	while(left<right)
	{
		*left  ^= *right;
		*right ^= *left;
		*left  ^= *right;
		
		left++;
		right--;
	}
	
	printf("array after reverse::");
	printArr(arr,N);
}

int printArr(int *arr,int N)
{
	int *arrEnd = (arr+N-1);
	
	while(arr<=arrEnd)
	{
		printf("%d ",*arr);
		arr++;
	}
}
