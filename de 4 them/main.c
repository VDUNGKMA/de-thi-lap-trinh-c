#include <stdio.h>
#include <stdlib.h>
void nhapmatran(int arr[][100],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("nhap arr[%d][%d]\n",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
}
void xuatmatran(int arr[][100],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%6d",arr[i][j]);
		}
			printf("\n");
	}
}
void tongtunghang(int arr[][100],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		int s=0;
		for(int j=0;j<m;j++)
		{
			s=s+arr[i][j];
		}
		printf("TONG HANG THU %d la %d\n",i+1,s);
	}
}
int MAXHANG(int arr[][100],int c[],int n,int m)
{
	int s;
	for(int i=0;i<n;i++)
	{
		s=0;
		for(int j=0;j<m;j++)
		{

			s+=arr[i][j];
		}
		c[i]=s;
	}
	int max=c[0];
	for(int i=0;i<n;i++)
	{
		if(c[i]>max)
		{
			max=c[i];
		}
	}
	return max;
}
void xuat_hang_max(int arr[][100],int c[],int n,int m)
{
	int s,dem=0;
	while (dem<n)
	{
		s=0;
		for(int j=0;j<m;j++)
		{
			s+=arr[dem][j];
		}
			if(s==MAXHANG(arr,c,n,m))
			{
				for(int j=0;j<m;j++)
				{
					printf("%6d",arr[dem][j]);
				}
					break;
			}
			else
			{
				dem++;
			}
	}
}
int main()
{
	int arr[100][100],c[100],change[100],n,m;
	printf("nhap vao hang va cot ma tran\n");
	scanf("%d%d",&n,&m);
	nhapmatran( arr,n ,m);
	xuatmatran(arr,n,m);
	tongtunghang(arr,n,m);
	printf("\n");
	printf("HANG MAX\n");
	xuat_hang_max(arr,c,n,m);

    return 0;
}
