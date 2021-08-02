#include <stdio.h>
#include <stdlib.h>
void nhapmang(int arr[],int n)
{
	printf("nhap vao day so \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
}
void xuatmang(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%6d",arr[i]);
	}
	printf("\n");
}
int max(int arr[],int n)
{
	int max=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	return max;
}
void vitrimax(int arr[],int n)
{
	printf("\ttai vi tri ");
	int gt=max(arr,n);
	for(int i=0;i<n;i++)
	{
		if(arr[i]==gt)
		{
			printf("%6d",i+1);
		}
	}
}
int min(int arr[],int n)
{
	int min=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	return min;
}
void vitrimin(int arr[],int n)
{
	printf("\ttai vi tri ");
	int gt=min(arr,n);
	for(int i=0;i<n;i++)
	{
		if(arr[i]==gt)
		{
			printf("%6d",i+1);
		}
	}
}
int main()
{
	int arr[100],n;
	printf("nhap vao so luong phan tu \n");
	scanf("%d",&n);
	nhapmang(arr,n);
	xuatmang(arr,n);
	printf("max=%d\t",max(arr,n));
	vitrimax(arr,n);
	printf("\n");
	printf("min=%d\t",min(arr,n));
	vitrimin(arr,n);

    return 0;
}
