#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
int main()
{
	int n,p=1;
	 printf("nhap vao so n \n");
	 scanf("%d",&n);
	 while(n<0)
	 {
	 	 printf("nhap lai (n>=0 )\n");
		scanf("%d",&n);
	 }
	 if(n==0)
	 {
	 	printf("O!=0\n");
	 }
	 else
	 {
	 	for(int i=1;i<=n;i++)
		{
			p*=i;
		}
		printf("%d!=%d",n,p);
	 }
    return 0;
}*/
void nhapheso(int arr[],int n)
{

	for(int i=0;i<n;i++)
	{
		printf("nhap vao he so thu %d\n",i+1);
		scanf("%d",&arr[i]);
	}
}
void inheso(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%6d",arr[i]);
	}
}
void hesotong_m_lonhon_n(int arr[],int brr[],int crr[],int n,int m)
{

	for(int k=0;k<m;k++)
	{
		if(k<m-n)
		{
			crr[k]=brr[k];
		}
		else
		{
			crr[k]=arr[k-(m-n)]+brr[k];
		}
	}
	inheso(crr,m);
}
void hesotong_n_lonhon_m(int arr[],int brr[],int crr[],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		if(i>=n-m)
		{
			crr[i]=arr[i]+brr[i-(n-m)];
		}
		else
		{
			crr[i]=arr[i];
		}
	}
	inheso(crr,n);
}
void inhesotong(int arr[],int brr[],int crr[],int n,int m)
{
	printf("\nhe so tong 2 da thuc T=P+Q la\n");
	if(n>m)
	{
		hesotong_n_lonhon_m(arr,brr,crr,n,m);
	}
	else
	{
		hesotong_m_lonhon_n(arr,brr,crr,n,m);
	}
}
void tinhcount_arrva_brr(int arr[],int brr[],int n,int m,int x)
{
	int s1=0,s2=0;
	printf("\nGIA TRI CUA x la %d\n",x);
	for(int i=0;i<n;i++)
	{
		s1+=arr[i]*pow(x,n-1-i);
	}
	printf("\nGIA TRI CUA P LA %d\n",s1);
	for(int i=0;i<m;i++)
	{
		s2+=brr[i]*pow(x,m-1-i);
	}
	printf("\nGIA TRI CUA Q LA %d\n",s2);
	printf("\n GIA TRI CUA T LA %d\n",s1+s2);
}

int main()
{
	int n,m,arr[100],brr[100],crr[100];
	printf("nhap vao so luong he so cua da thuc P \n");
	scanf("%d",&n);
	printf("nhap vao so luong he so cua da thuc Q \n");
	scanf("%d",&m);
	printf("nhap he so cua da thuc P\n");
	nhapheso(arr,n);
	printf("\n");
	printf("nhap he so da thuc Q\n");
	nhapheso(brr,m);
	system("cls");
	inhesotong(arr,brr,crr,n,m);
	printf("\n");
	printf("\nhe so da thuc P\n");
	inheso(arr,n);
	printf("\nhe so da thuc Q\n");
	inheso(brr,m);
	printf("\nhe so da thuc T\n");
	if(n>m)
	{
		inheso(crr,n);
	}
	else
	{
		inheso(crr,m);
	}
	int x;
	printf("\nnhap gia tri cua bien x\n");
	scanf("%d",&x);
	tinhcount_arrva_brr(arr, brr, n, m, x);
	return 0;
}
