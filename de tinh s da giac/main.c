#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
/*Câu 1:
a) Nêu lên khái niệm về con trỏ trong C, cú pháp khai báo biến con trỏ và một số phép toán con trỏ.
B) Viết chương trình nhập 2 ma trận hữu tỉ tuỷ ý rồi tính tích của 2 ma trận.

Câu 2:
a) Định nghĩa kiểu dữ liệu cho một sinh viên gồm một số thuộc tính như mã sinh viên, họ và tên, năm sinh, điểm trung bình. Viết hàm nhập một danh sách sinh viên và ghi thành file "dssv.dat" trên đĩa.
b)Viết hàm tìm kiếm một mẫu sinh viên trên file "dssv.dat" khi biết mã sinh viên.

Câu 3:
a) Định nghĩa kiểu dữ liệu cho một đa giác lồi trong mặt phẳng Oxy dưới dạng một dãy các điểm, mỗi điểm gồm hoành độ và tung độ.
B) Viết các thuật toán và các hàm cho các yêu cầu xử lý sau đây:
- Tính diện tích của đa giác.
- Tính chu vi của đa giác.*/
/*
void nhapmatran(float arr[][100],int n,int m) //bai1
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("nhap arr[%d][%d]\n",i,j);
			scanf("%f",&arr[i][j]);
		}
	}
}
void xuatmatran(float arr[][100],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{

			printf("%8.3f",arr[i][j]);
		}
			printf("\n");
	}
}
void nhan2matran(float arr[][100],float brr[][100],float crr[][100],int n,int m ,int p)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<p;j++)
		{
			for(int k=0;k<m;k++)
			{
				crr[i][j]+=arr[i][k]*brr[k][j];
			}
		}
	}
	xuatmatran(crr,n,p);
}
int main()
{
   int n,m,q,p;
   float arr[100][100],brr[100][100],crr[100][100];
   printf("nhap vao so hang va cot ma tran A\n");
   scanf("%d%d",&n,&m);
   printf("\nnhap vao so hang va cot  ma tran B\n");
   scanf("%d%d",&q,&p);
   while(m!=q)
   {
   	 printf("\nnhap lai vao so hang va cot  ma tran B (so cot ma tran A = so hang ma tran B\n");
	 scanf("%d%d",&q,&p);
   }
   nhapmatran(arr,n,m);
   nhapmatran(brr,q,p);
   system("cls");
   printf("\nMA TRAN A\n");
   xuatmatran(arr,n,m);
   printf("\nMA TRAN B\n");
   xuatmatran(brr,q,p);
   printf("\n MA TRAN C=A*B la:\n");
   nhan2matran(arr,brr,crr,n,m,p);
    return 0;
}*/
/*
typedef struct sinhvien //BAI2
{
	char hoten[50];
	char masv[50];
	int namsinh;
	float diemtb;
}SV;
void writefile(FILE *f,SV sv)
{
	int n;
	printf("\nnhap vao so luong sinh vien \n");
	scanf("%d",&n);
	f=fopen("dssv.dat","wb");
	for(int i=0;i<n;i++)
	{
		printf("\nnhap vao ho ten\n");
		fflush(stdin);
		gets(sv.hoten);
		printf("\nnhap vao ma sinh vien\n");
		fflush(stdin);
		gets(sv.masv);
		printf("\nnhap vao nam sinh \n");
		scanf("%d",&sv.namsinh);
		printf("\nnhap vao diem trung binh\n");
		scanf("%f",&sv.diemtb);
		fwrite(&sv,sizeof(SV),1,f);
	}
	fclose(f);
}
void readfile(FILE *f,SV sv)
{
	char MASV[50];
	printf("\nNHAP VAO MA SV CAN TIM KIEM\n");
	fflush(stdin);
	gets(MASV);
	f=fopen("dssv.dat","rb");
	while(fread(&sv,sizeof(SV),1,f)!=NULL)
	{
		if(strcmp(MASV,sv.masv)==0)
		{
			printf("%15s%15s%10d%15.3f\n",sv.hoten,sv.masv,sv.namsinh,sv.diemtb);
		}
	}
}
int main()
{
	SV sv;
	FILE *f;
	writefile(f,sv);
	readfile(f,sv);
	return 0;
}*/
void nhapmatran(int  a[][100],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("nhap vao toa do diem %d\n",i+1);
			scanf("%d",&a[i][j]);
		}

	}
}
void xuatmatran(int  a[][100],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<2;j++)
		{
			printf("%8d",a[i][j]);
		}
			printf("\n");
	}
}
int   tinhs1(int  a[][100],int n)
{
	int  s1=0;
	int dem=0;
	while (dem<n-1)
	{
		s1+=a[dem][0]*a[dem+1][1];
		dem++;
	}
	return s1;
}
int  tinhs2(int  a[][100],int n)
{
	int  s2=0;
	int dem=0;
	while (dem<n-1)
	{
		s2+=a[dem][1]*a[dem+1][0];
		dem++;
	}
	return s2;
}
void dientich(int  a[][100],int n)
{
	float S=((float) tinhs1(a,n)-tinhs2(a,n))/2;
	if(S<=0)
	{
		printf("\nda giac da nhap khong ton tai\n");
		exit(0);
	}
	else
	{
		printf("\nda giac da cho co dien tich la %f\n",S);
	}

}
void creat_arr_save_canh(int a[][100],float brr[],int n)
{
	float s=0;
	for(int i=0;i<n;i++)
	{
		brr[i]=sqrt(a[i][0]*a[i][0]+a[i][1]*a[i][1]);
	}
	for(int i=0;i<n;i++)
	{
		s+=brr[i];
	}
	printf("\n CHU VI DA GIAC la%f\n",s);
}
int main()
{
	int n;
	int a[100][100];
	float brr[100];
	printf("nhap vao so luong diem\n");
	scanf("%d",&n);
	while(n<=2)
	{
		printf("nhap lai so luong diem(so luong diem cua da giac phai >=3\n");
		scanf("%d",&n);
	}
	nhapmatran(a,n);
	xuatmatran(a,n);
	dientich(a,n);
	creat_arr_save_canh(a,brr,n);
	return 0;
}
