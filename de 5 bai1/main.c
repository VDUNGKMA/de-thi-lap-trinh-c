#include <stdio.h>
#include <stdlib.h>
#include<math.h>
/*void check(int a,int b,int c)
{
	if(a>0&&b>0&&c>0)
	{
		if(a+b>c||b+c>a||a+c>b)
		{
			printf("3 canh a,b,c tao thanh tam giac\n");
			if((a*a+b*b==c*c&&a==b)||(b*b+c*c==a*a&&b==c)||(a*a+c*c==b*b&&a==c))
			{
				printf("tam giac vuong can\n");
			}
			else if(a==b&&b==c)
			{
				printf("tam giac deu\n");
			}
			else if((a==b&&a!=c)||(a==c&&a!=b)||(b==c&&b!=a))
			{
				printf("tam giac can\n");
			}
			else if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b)
					{
						printf("tam giac vuong \n");
					}
			else
				printf("tam giac thuong\n");
		}
		else
			printf("3 canh ko tao thanh tam giac\n");
	}
	else printf("3 canh ko tao thanh tam giac\n");

}
int main()
{
	float a,b,c;
	printf("nhap vao 3 so s,b,c\n");
	scanf("%f%f%f",&a,&b,&c);
	check(a,b,c);

    return 0;
}*/
void nhapmatran(int arr[][100],int m,int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("nhap arr[%d][%d]\n",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
}
void xuatmatran(int arr[][100],int m,int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{

			printf("%6d",arr[i][j]);
		}
		printf("\n");
	}
}
void nhanmatran(int arr[][100],int brr[][100],int crr[][100],int m,int n,int p)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<p;j++)
		{
			for(int k=0;k<n;k++)
			{
				crr[i][j]+=arr[i][k]*brr[k][j];

			}
				printf("%6d",crr[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[100][100],brr[100][100],crr[100][100],m,n,p;
	printf("nhap vao m ,n, p\n");
	scanf("%d%d%d",&m,&n,&p);
	nhapmatran(arr,m,n);
	system("cls");
	printf("\n");
	nhapmatran(brr,n,p);
	system("cls");
	printf("\n");
	printf("MA TRAN A\n");
	xuatmatran(arr,m,n);
	printf("\nMA TRAN B\n");
	xuatmatran(brr,n,p);
	printf("\nMA TRAN C\n");
	nhanmatran(arr,brr,crr,m,n,p);

	return 0;
}
