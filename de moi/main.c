#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
int  checktamgiac(float a,float b,float c) //bai1
{
	if(a+b<=c||a+c<=b||b+c<=a)
	{
		printf("3 canh ko la tam giac\n");
		return 0;
	}
	else if(a+b>c||a+c>b||b+c>a)
	{
		if(sqrt(a*a+b*b)==c||sqrt(a*a+c*c)==b||sqrt(c*c+b*b)==a)
		{
			printf("3 canh tao thanh tam giac vuong\n");
			return 1;
		}
		else if(a==b&&b==c)
		{
			printf("3 canh tao thanh tam giac deu\n");
			return 1;
		}
		else if(a==b&&c==sqrt(a*a+b*b)||a==c&&b==sqrt(a*a+c*c)||c==b&&a==sqrt(c*c+b*b))
		{
			printf("3 canh tao thanh tam giac vuong can\nn");
			return 1;
		}
		else if(a==b||b==c||a==c)
		{
			printf("3 canh tao thanh tam giac can\n");
			return 1;
		}
		else
		{
			printf("3 canh tao thanh 1 tam giac thuong\n");
			return 1;
		}
	}
}
void tinhs(float a,float b,float c)
{
	float  s=0;
	if(checktamgiac(a,b,c)==1)
	{

		s=(a+b+c)*(b+c-a)*(a+b-c)*(a-b+c)/8;
	}
	else
	{
		exit(0);
	}
	printf("%6.6f",s);
}
int  main()
{
	float a,b,c;
	printf("nhap vao 3 canh a,b,c\n");
	scanf("%f%f%f",&a,&b,&c);
	while(a<=0||b<=0||c<=0)
	{
		printf("nhap vao 3 canh a,b,c\n");
		scanf("%f%f%f",&a,&b,&c);
	}
	tinhs(a,b,c);
    return 0;
}*/
/*
void uocson(int arr[], int n) //bai 2
{
	int dem=0,s=0;
	for(int i=1;i<n	;i++)
	{
		if(n%i==0)
		{
			arr[dem]=i;
			dem++;
		}
	}
	for(int i=0;i<dem;i++)
	{
		s+=arr[i];
	}
	if(s==n)
	{
		printf("day la so hoan hao\n");
	}
	else
	{
		printf("day khong la so hoan hao\n");
	}
}
int main()
{
	int n,arr[100];
	printf("nhap vao so n\n");
	scanf("%d",&n);
	uocson(arr,n);

	return 0;
}*/
/*
int main() //bai 3
{	int n,s=0;
	printf("nhap vao so n\n");
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
		s+=i;
	}
	printf("tong cac so nguyen nho hon hoac bang %d la %d\n",n,s);
	return 0;
}*/
void nhapmang(int arr[],int n) //bai4
{
	for(int i=0;i<n;i++)
	{
		printf("nhap arr[%d]\n",i);
		scanf("%d",&arr[i]);
	}
}
void xuatmang(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%8d",arr[i]);
	}
}
int  max(int arr[],int n)
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
void vitri_max(int arr[],int n)
{
	printf("\n max =%d\n",max(arr,n));
	for(int i=0;i<n;i++)
	{
		if(arr[i]==max(arr,n))
		{
			printf("%8d",i);
		}
	}
}
int main()
{
	int arr[100],n;
	printf("nhap vao so luong phan tu\n");
	scanf("%d",&n);
	nhapmang(arr,n);
	xuatmang(arr,n);
	vitri_max(arr,n);
	return 0;
}
