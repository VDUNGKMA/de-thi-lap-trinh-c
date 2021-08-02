#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
void nhapmang(int arr[],int n)// Thêm x vào trong mảng tăng nhưng vẫn giữ nguyên tính tăng của mảng
{
	int i=0;
	for(int i=0;i<n;i++)
	{
		printf("nhap phan tu thu %d\n",i+1);
		scanf("%d",&arr[i]);
	}

}
void themvaovitri(int arr[],int n,int *vt,int x)
{
	for(int i=n;i>=*vt;i--)
	{
		arr[i]=arr[i-1];
	}
		arr[*vt]=x;
}
void themkhongsapxep(int arr[],int n,int x)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]>x)
		{
			themvaovitri(arr,n,&i,x);
			break;
		}
		if(arr[n-1]<=x)
		{
			themvaovitri(arr,n,&n,x);
			break;
		}

	}

	for(int i=0;i<n+1;i++)
	{
		printf("%8d",arr[i]);
	}
}
void xoaphantu(int arr[],int n,int *vt)
{
	for(int i=*vt;i<n;i++)
	{
		arr[i]=arr[i+1];
	}
}
void xoakhongcansapxep(int arr[],int n,int x)
{
	for(int i=0;i<n+1;i++)
	{
		if(arr[i]==x)
		{
			continue;
		}
			printf("%8d",arr[i]);
	}
}
bool sochinhphuong(int arr[],int n,int *k)
{
	int can=sqrt(*k);
	if(can*can==*k)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void xoasochinhphuong(int arr[],int n)
{
	int dem=0;
		for(int i=0;i<n;i++)
		{
			if(sochinhphuong(arr,n,&arr[i])==true)
			{
				xoaphantu(arr,n,&i);
				dem++;
			}
		}
		for(int i=0;i<n-dem;i++)
		{
			printf("%8d",arr[i]);
		}
}
int main()
{
	int arr[100],n,x;
	printf("nhap vao n\n");
	scanf("%d",&n);
	printf("nhap gia tri x muon them\n");
	scanf("%d",&x);
	nhapmang(arr,n);
	//themkhongsapxep(arr,n,x);
	printf("\n\t\t");
	//xoakhongcansapxep(arr,n,x);
	xoasochinhphuong(arr,n);
    return 0;
}
