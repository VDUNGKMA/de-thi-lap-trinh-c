#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Câu 1:
Viết chương trình nhập số nguyên dương n và tính số hạng thứ n của dãy số {u_n} được định nghĩa như sau:
u_1 = 1;
u_2 = 2;
u_n = u_(n-1) + u_(n-2) với n>2.
Yêu cầu trong chương trình có hàm tính số hạng thứ n của dãy số.

Câu 2 :
Viết chương trình nhập số thực x và số dương r, rồi tính tổng số
S=1 + x + x^2 / 2 + ... + x^n / (n ! )
trong đó n là số nguyên dương được chọn sao cho
abs( x^n / ( n ! ) ) < r.
Câu 3:
Xét các đa thức một biến có bậc tối đa là 200.
a) Viết các thuật toán thực hiện các xử lý sau đây trên đa thức:
- Tính giá trị của đa thức.
-Tìm đạo hàm của đa thức.
-Tìm nguyên hàm của đa thức.
b)Hãy cho một định nghĩa hay khai báo kiểu dữ liệu cho đa thức, và viết các hàm thực hiện các xử lý được yêu cầu trong câu (a).
*/
/*
int main()
{
	int n,dem=0,u=0,u1=1,u2=2;
	printf("nhap vao so n\n");
	scanf("%d",&n);
	while(n<=2)
	{
		printf("nhap lai n>2\n");
		scanf("%d",&n);
	}
	while(dem<n-2)
	{
		u=u1+u2;
		u1=u2;
		u2=u;
		dem++;
	}
	printf("gia tri u(%d)=%d\n",n,u);

    return 0;
}*/
/*
int tinh_giaithua(int *k)
{
	int p=1;
	if(*k==0)
	{
		p=1;
	}
	else
	{
		for(int i=1;i<=*k;i++)
		{
			p*=i;
		}
	}
		return p;
}
void tinhs(int n,float x)
{
	float s;
	for(int i=0;i<=n;i++)
	{
		s+=(float)pow(x,i)/(tinh_giaithua(&i));
	}
	printf("%f",s);
}
int main()
{
	int n;
	float x,r;
	printf("nhap vao x va r\n");
	scanf("%f%f",&x,&r);
	printf("\nnhap vao n\n");
	scanf("%d",&n);
	while(fabs(pow(x,n)/tinh_giaithua(&n))>=r)
		{
			printf("\nnhap lai n thoa man |x^n/n!<r|\n");
			scanf("%d",&n);
		}
	tinhs(n,x);
	return 0;
}*/
void nhapheso(float arr[],int n)
{
	for(int i=0;i<=n;i++)
	{
		printf("nhap he so thu %d\n",i+1);
		scanf("%f",&arr[i]);
	}
}
void xuatheso(float arr[],int n)
{
	printf("\nBIEU THUC A=\n");
	for(int i=0;i<=n;i++)
	{
		printf("%f*x^(%d) + ",arr[i],n-i);
	}
}
void tinh_GTBT(float arr[],int n,float x)
{
	float s=0;
	for(int i=0;i<=n;i++)
	{
		s+=arr[i]*pow(x,n-i);
	}
	printf("\nGTBT =%f\n",s);
}
void tinh_daoham(float arr[],int n,float x)
{
	float s=0;
	for(int i=0;i<n;i++)
	{
		s+=arr[i]*pow(x,n-i-1)*(n-i);
	}
		printf("\ndao ham cua bieu thuc tai x=%f la =%f\n",x,s);
}
float tinh_nguyenham(float arr[],int n,float *x)
{
	float s=0;
	for(int i=0;i<=n;i++)
	{
		s+=arr[i]*pow(*x,n-i+1)/(n-i+1);
	}
		return s;
}
void tinh_tichphan(float arr[],int n)
{
	float a,b;
	printf("\nnhap vao can tren va can duoi\n");
	scanf("%f%f",&a,&b);
	float hieu=tinh_nguyenham(arr,n,&a)-tinh_nguyenham(arr,n,&b);
	printf("\nTICH PHAN CUA DA THUC CO CAN la %4.2f va %4.2f la %4.2f\n",a,b,hieu);
}
int main()
{
	float arr[100];
	int  n;
	float  x;
	printf("nhap bac max n va gt bien x\n");
	scanf("%d%f",&n,&x);
	nhapheso(arr,n);
	system("cls");
	xuatheso(arr,n);
	tinh_GTBT(arr,n,x);
	tinh_daoham(arr,n,x);
	printf("\nNGUYEN HAM TAI GIA TRI %f la %f\n",x,tinh_nguyenham( arr, n, &x));
	tinh_tichphan(arr,n);
	return 0;
}

