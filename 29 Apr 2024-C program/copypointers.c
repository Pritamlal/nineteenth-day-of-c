#include<stdio.h>
int printArray(int *arr,int size);
int main()
{
	int source_arr[1000],dest_arr[1000];
	int size,i;
	int *source_ptr=source_arr;
	int *dest_ptr=dest_arr;
	
	int *end_ptr;
	
	printf("Enter the size::");
	scanf("%d",&size);
	printf("Enter the elements in Array::");
	for(i=0;i<size;i++)
	{
		scanf("%d",&source_ptr[i]);
	}
	
	end_ptr=&source_ptr[size-1];
	
	while(source_ptr<=end_ptr)
	{
		*dest_ptr=*source_ptr;
		
		source_ptr++;
		dest_ptr++;
	}
	
	printf("Source array after copying::");
	printArray(source_arr,size);
	
	printf("\nSource array after copying::");
	printArray(dest_arr,size);
	
}
int printArray(int *arr,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf(" %d ",*(arr+i));
	}
}
