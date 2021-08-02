#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
//BAI1
/*
void nhapmang(int  arr[],int n)
{
	for(int i=0;i<=n;i++)
	{
		printf("nhap phan tu thu %d\n",i+1);
		scanf("%d",&arr[i]);
	}
}
void tinhgt(int arr[],int n)
{
	int x,s=0;
	printf("nhap vao gia tri x\n");
	scanf("%d",&x);
	for(int i=0;i<=n;i++)
	{
		s+=arr[i]*(pow(x,i));
	}
	printf("\ngia tri cua da thuc la = %d",s);
}
int main()
{
	int n,arr[100];
	printf("nhap vao so phan tu \n");
	scanf("%d",&n);
	nhapmang(arr,n);
	tinhgt(arr,n);

    return 0;
}*/
//BAI 2
/*
void nhapxau(char str[])
{
	fflush(stdin);
	printf("nhap xau :");
	gets(str);
}
void copyxau(char str[],char c[])
{
	strcpy(c,str);
}
void daonguocxau(char c[])
{
	strrev(c);
	printf("\nxau sau dao nguoc : ");
	puts(c);
}
void checkdoixung(char str[],char c[])
{
	int dem=0;
	for(int i=0;i<strlen(str);i++)
	{
		if(str[i]==c[i])
		{
			dem++;
		}
	}
	if(dem==strlen(str))
	{
		printf("\nxau doi xung\n");
	}
	else
	{
		printf("xau ko doi xung\n");
	}
}
int  main()
{
	char str[50],c[50];
	nhapxau(str);
	copyxau(str,c);
	daonguocxau(c);
	checkdoixung(str,c);

	return 0;
}*/
//BAI 3
/*
typedef struct PS
{
	int a,b;
}PS;
int UCLN(int  a,int b)
{
	while(a!=b)
	{
		if(a>b)
		{
			a=a-b;
		}
		else
		{
			b=b-a;
		}
	}
	return b;
}
void nhapps(PS *ps)
{

	printf("nhap vao tu so \n");
	scanf("%d",&ps->a);
	printf("nhap vao mau so \n");
	scanf("%d",&ps->b);
	while(ps->b==0)
	{
		printf("nhap lai b khac 0\n");
		scanf("%d",&ps->b);
	}
	int p=UCLN(ps->a,ps->b);
		printf("\nUCLL cua tu va mau la %d\n",p);
		printf("phan so  %d/%d\n",ps->a,ps->b);
	printf("\nphan so sau rut gon la %d/%d\n",ps->a/p,ps->b/p);
}
void tonghieu2ps(PS ps1,PS ps2)
{
	int m,n;
	m=ps1.a*ps2.b+ps2.a*ps1.b;
	n=ps1.b*ps2.b;
	int p=UCLN(m,n);
	printf("tong 2 phan so sau khi toi gian la %d/%d\n ",m/p,n/p);
	int r,t;
	r=ps1.a*ps2.b-ps2.a*ps1.b;
	t=ps1.b*ps2.b;
	int k=UCLN(p,k);
	printf("\nhieu 2 phan so sau khi toi gian la %d/%d\n ",r/k,t/k);
}

int main()
{
	PS ps1,ps2;
	nhapps(&ps1);
	nhapps(&ps2);
	tonghieu2ps(ps1,ps2);
	return 0;
}*/
//BAI 4
bool checknguyento(int n)
{
	int dem=0;
	if(n<2)
	{
		return false;
	}
	else if(n==2)
	{
		return true;
	}
	else
	{
		for(int i=2;i<n;i++)
		{
			if(n%2==0)
			{
				dem++;
			}
		}
		if(dem!=0)
		{
			return false;
		}
	}
	return true;
}
void ghisonguyento(FILE *f)
{
	f=fopen("100songuyentodau.txt","w");
	int  dem=0;
	for(int i=0;i<200;i++)
	{
		if(checknguyento(i)==true)
			{
				printf("%6d",i);
				fprintf(f,"%6d",i);
				dem++;
				if(dem % 10==0)
				{
					fprintf(f,"\n");
				}
			}
	}
	fclose(f);
}
int main()
{
	FILE *f;
	ghisonguyento(f);


	return 0;
}
