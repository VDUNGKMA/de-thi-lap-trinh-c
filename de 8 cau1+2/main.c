#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void hephuongtrinh(float a,float  b,float  c,float  d,float  e,float  f)
{
	float A,A1,A2;
		A=a*e-b*d;
		A1=c*e-b*f;
		A2=a*f-c*d;
	if(a/d==b/e&&a/d==c/f)
	{
		printf("he phuong trinh vo so nghiem\n");
	}
	else if(a/b==b/d&&a/b!=c/d)
	{
		printf("he vo nghiem\n");
	}
	else if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0)
	{
		printf("he phuong trinh vo so nghiem\n");
	}
	else if (A==0)
	{
		printf("HE VO NGHIEM\n");
	}
	else
	{
		float x=A1/A;
		float y=A2/A;
		printf("x=%f va y=%f\n",x,y);
	}
}
int main()
{
	float a,b,c,d,e,f;
	printf("nhap vao a,b,c,d,e,f\n");
	scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
	hephuongtrinh(a,b,c,d,e,f);
    return 0;
}
/*
typedef struct sv
{
	char hoten[50];
	char que[50];
	float diem;
}SV;
void writefile(FILE *f,SV sv)
{
	int n;
	f=fopen("B_DIEM.C","wb");
	printf("nhap vao so luong sinh vien\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("nhap vao ho ten\n");
		fflush(stdin);
		gets(sv.hoten);
		printf("nhap vao que\n");
		fflush(stdin);
		gets(sv.que);
		printf("nhap vao diem trung binh\n");
		fflush(stdin);
		scanf("%f",&sv.diem);
		fwrite(&sv,sizeof(SV),1,f);
	}
	fclose(f);
}
void readfile(FILE *f,SV sv)
{
	f=fopen("B_DIEM.C","rb");
	int i=1;
	printf("%10s%16s%18s%18s\n","STT","HO TEN","QUE","DIEM_TB");
	while(fread(&sv,sizeof(SV),1,f)!=NULL)
	{
		printf("%10d%16s%18s%18f\n",i++,sv.hoten,sv.que,sv.diem);
	}
	fclose(f);
}
void suadanhsach(FILE *f,SV sv)
{
	f=fopen("B_DIEM.C","rb");
	char HT[50];
	printf("nhap vao ho ten\n");
	fflush(stdin);
	gets(HT);
	float change;
	int j=1;
	printf("nhap so thay doi \n");
	scanf("%f",&change);
	while(fread(&sv,sizeof(SV),1,f)!=NULL)
	{
		if(strcmp(HT,sv.hoten)==0)
		{
			sv.diem=change;
		}
		printf("%10d%16s%18s%18f\n",j++,sv.hoten,sv.que,sv.diem);
	}
}
int main()
{
	FILE *f;
	SV sv;
	writefile(f,sv);
	readfile(f,sv);
	suadanhsach(f,sv);
	return 0;
}*/
