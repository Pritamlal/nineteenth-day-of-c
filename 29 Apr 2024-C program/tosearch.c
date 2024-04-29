#include<stdio.h>
int toSearch(int *ptr,int *arr,int size);
int main()
{
	int arr[1000];
	int size,i,num;
	int found=0;
	int *ptr=&num;
	
	printf("Enter the size::");
	scanf("%d",&size);
	
	printf("Enter the array elements:::");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the number to search:::");
	scanf("%d",ptr);
	
	found=toSearch(ptr,arr,size);
	
	if(found== 1)
	{
		printf("This element exists\n");	
	}	
	else
	{
		printf("this element does not exists\n");
	}
	
	printf("The position lies is in is %d",i);
}

int toSearch(int *ptr,int *arr,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(*ptr==arr[i])
		return 1;
	}
}

int toSearchposition(int *ptr,int *arr,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(*ptr==arr[i])
		printf("%d",i);
	}
	return i;
}
