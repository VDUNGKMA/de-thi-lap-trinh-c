#include <stdio.h>
#include <stdlib.h>
/*
void BCCN(int a,int b)
{
	int p=a*b;
	if(a==b)
		{
			printf("BCNN cua a va b la %d\n",a);
		}
	else if(a==0||b==0)
	{
		printf("BCNN cua a va b la 0\n");
	}
	else
	{
		while(a!=b)
		{

			 if(a>b)
			{
				a=a-b;
			}
			else if(a<b)
			{
				b=b-a;
			}
		}
		printf("BCNN=%d\n",p/a);
	}
}
int main()
{
  int a=0,b=0;

	printf("nhap vao 2 so ngyen duong  a va b\n");
	scanf("%d%d",&a,&b);
  while (a<0||b<0)
  {
  	 printf("ban da nhap sai 2 so a va b vui long nhap lai!\n");
	 scanf("%d%d",&a,&b);
  }
	BCCN(a,b);
    return 0;
}*/
void nhapmang(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("nhap vao phan tu thu %d\n",i+1);
		scanf("%d",&arr[i]);
	}
}
void xuatmang(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%6d",arr[i]);
	}
}
void ghepkhongsapxep(int arr[],int brr[],int crr[],int m,int n)
{
	int k=0,i=0,j=0;
	while(1)
	{
		if(arr[i]>brr[j])
		{
			crr[k]=brr[j];
			j++;
		}
		else
		{
			crr[k]=arr[i];
			i++;
		}
		k++;
		if(i>=n||j>=m)
		{
			break;
		}
	}
	if(i>=n)
	{
		while(j<m)
		{
			crr[k]=brr[j];
			j++;
			k++;
		}

	}
	if(j>=m)
	{
		while(i<n)
		{
			crr[k]=arr[i];
			i++;
			k++;
		}
	}
	xuatmang(crr,k);
}
int main()
{
	int arr[100],brr[100],crr[200],n,m;
	printf("nhap vao so luong phan tu cau day A\n");
	scanf("%d",&n);
	nhapmang(arr,n);
	xuatmang(arr,n);
	printf("\nnhap vao so luong phan tu cau day B\n");
	scanf("%d",&m);
	nhapmang(brr,m);
	xuatmang(brr,m);
	printf("\n");
	ghepkhongsapxep(arr,brr,crr,m,n);

	return 0;
}
