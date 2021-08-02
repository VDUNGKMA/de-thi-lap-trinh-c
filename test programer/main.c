#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int tachso(int *n)
{
	int p=*n,i=0;
	int arr[100];
	while(p>10)
	{
		arr[i]=p%10;
		p/=10;
		i++;
	}
	int s=0;
	for(int j=0;j<i;j++)
	{
		s+=pow(arr[j],3);
	}
	int sumlap =s+pow(*n/100,3);
	return sumlap;
}
void nhapmang(int arr[][100],int dong,int cot)
{
	for(int i=0;i<dong;i++)
	{
		for(int j=0;j<cot;j++)
			{
				printf("nhap vao p tu thu arr[%d][%d]\n",i,j);
				scanf("%d",&arr[i][j]);
			}
	}
}
void xuatmang(int arr[][100],int dong,int cot)
{
	for(int i=0;i<dong;i++)
	{
		for(int j=0;j<cot;j++)
			{

				printf("%6d",arr[i][j]);
			}
			printf("\n");
	}
}
int check_chinhphuong(int *k)
{
	if(*k==0)
	{
		return 0;
	}
	int can=sqrt(*k);
	if(can*can==*k)
	{

		return 1;
	}
	else
	{
		return 0;
	}
}
void ptu_chinhphuong(int arr[][100],int dong,int cot)
{
	for(int i=0;i<dong;i++)
	{
		for(int j=0;j<cot;j++)
			{
				if(check_chinhphuong(&arr[i][j])==1)
				{
					printf("%6d",arr[i][j]);
				}
			}
	}
}
int checknguyento(int *k)
{
	int dem=0;
	if(*k<2)
	{
		return 0;
	}
	else if(*k==2)
	{
		return 1;
	}
	else
	{
		for(int i=2;i<*k;i++)
		{
			if(*k%i==0)
			{
				dem++;
			}
		}
		if(dem==0)
		{
			return 1;
		}
		else
		{
			return 0;
		}

	}
}
void in_songuyento(int arr[][100],int dong,int cot)
{
	for(int i=0;i<dong;i++)
	{
		for(int j=0;j<cot;j++)
			{
				if(checknguyento(&arr[i][j])==1)
				{
					printf("%6d",arr[i][j]);
				}
			}
	}
}
void tongphantu(int arr[][100],int dong,int cot)
{
	int s=0;
	for(int i=0;i<dong;i++)
	{
		for(int j=0;j<cot;j++)
			{
				s+=arr[i][j];
			}
	}
	printf("\ntong cac phan tu trong ma tran la %d\n",s);
}
int main()
{
	/*for(int i=100;i<1000;i++)
	{
		if(i==tachso(&i))
			{
				printf("%6d",i);
			}
	}*/

	/*int dong,cot,arr[100][100];
	printf("nhap dong,cot\n");
	scanf("%d%d",&dong,&cot);
	printf("size=%d",sizeof(x));
	nhapmang(arr,dong,cot);
	xuatmang(arr,dong,cot);
	printf("cac p tu chinh phuong la\n");
	ptu_chinhphuong(arr,dong,cot);
	printf("\ncap phan tu la so nguyen to trong ma tran la\n");
	in_songuyento(arr,dong,cot);
	tongphantu(arr,dong,cot);*/
    return 0;
}
