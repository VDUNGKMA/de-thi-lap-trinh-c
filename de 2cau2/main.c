#include <stdio.h>
#include <stdlib.h>
typedef struct info
{
	char tenhang[50];
	float don_gia;
	int soluong;
}info;
void writefile(FILE *f,info n)
{
	int m;
	printf("nhap vao so luong don hang\n");
	scanf("%d",&m);
	f=fopen("SOLIEU.C","wb");
	for(int i=0;i<m;i++)
	{
		printf("nhap vao ten hang\n");
		fflush(stdin);
		gets(n.tenhang);
		printf("nhap vao don gia\n");
		scanf("%f",&n.don_gia);
		printf("nhap va so luong\n");
		scanf("%d",&n.soluong);
		fwrite(&n,sizeof(info),1,f);
	}
	fclose(f);
}
void themdanhsach(FILE *f,info n)
{
		f=fopen("SOLIEU.C","ab");
		printf("nhap vao ten hang\n");
		fflush(stdin);
		gets(n.tenhang);
		printf("nhap vao don gia\n");
		scanf("%f",&n.don_gia);
		printf("nhap va so luong\n");
		scanf("%d",&n.soluong);
		fwrite(&n,sizeof(info),1,f);
		fclose(f);
}
void readfile(FILE *f,info n)
{
	f=fopen("SOLIEU.C","rb");
	rewind(f);
	int i=1,sum=0;
	printf("%10s%18s%18s%18s%18s\n","STT","TEN HANG","DON GIA","SO LUONG","THANH TIEN");
	while(fread(&n,sizeof(info),1,f)!=NULL)
	{
		printf("%10d%18s%18f%18d%18f\n",i++,n.tenhang,n.don_gia,n.soluong,n.don_gia*n.soluong);
		sum+=n.don_gia*n.soluong;
	}
	printf("                                       					 TONG=%f\n",(float)sum);
	fclose(f);
}
int main()
{
	FILE *f;
	info n;
	int luachon;
	printf("nhap luachon \n");
	while(luachon!=4)
	{
		printf("1.ghi danh sach\n");
		printf("2.them danh sach\n");
		printf("3.in danh sach\n");
		printf("4.thoat\n");
		printf("nhap luachon\n");
		scanf("%d",&luachon);
		if(luachon==1)
		{
			system("cls");
			writefile(f,n);
		}
		if(luachon==2)
		{
			themdanhsach(f,n);
		}
		if(luachon==3)
		{
			system("cls");
			readfile(f,n);
		}
		if(luachon==4)
		{
			break;
		}
	}

    return 0;
}
