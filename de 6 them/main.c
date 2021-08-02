#include <stdio.h>
#include <stdlib.h>
void nhapmang(float arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("nhap vao arr[%d]\n",i);
		scanf("%f",&arr[i]);
	}
}
void xuatmang(float arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%6.2f",arr[i]);
	}
}
void hoandoi(float *a,float *b)
{
	float c=*a;
		  *a=*b;
		  *b=c;
}
void sapxep(float arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
				{
					hoandoi(&arr[i],&arr[j]);
				}
		}
	}
	printf("\nMANG SAU KHI DA SAP XEP TANG DAN\n");
	xuatmang(arr,n);
}

int main()
{
	int arr[100],n;
	printf("nhap vao so luong phan tu \n");
	scanf("%d",&n);
	nhapmang(arr,n);
	xuatmang(arr,n);
	sapxep(arr,n);

    return 0;
}
