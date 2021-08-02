#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
/*
void check(char str[])
{
		int dem =0;
	for(int i=0;i<=strlen(str);i++)
	{
		if(str[i]==';')
		{
			dem++;
		}
		else if(str[i]==',')
		{
			dem++;
		}
		else if(str[i]=='.')
		{
			dem++;
		}
		else if(str[i]=='!')
		{
			dem++;
		}
		else if(str[i]=='?')
		{
			dem++;
		}
		else if(str[i]==' ')
		{
			dem++;
		}
	}
	printf("%d",dem);
}
int main()
{
	char str[]="",c[50];
	int dem=0;
	fflush(stdin);
	printf("nhap vao 1 sau \n");
	gets(str);
	puts(str);
	check(str);
	return 0;
}*/
//BAI 3
/*
typedef struct sp
{
	float thuc,ao;
}SP;
void taosophuc(SP *sp)
{
	printf("nhap phan thuc\n");
	scanf("%f",&sp->thuc);
	printf("nhap phan ao\n");
	scanf("%f",&sp->ao);
}
void insophuc(SP sp)
{
	printf("%6.2f+%6.2f*i\n",sp.thuc,sp.ao);
}
void tong2sophuc(SP sp1,SP sp2)
{
	float a=sp1.thuc+sp2.thuc;
	float b=sp1.ao+sp2.ao;
	printf("%4.2f+%4.2f*i\n",a,b);
}
int main()
{
	SP sp1,sp2;
	taosophuc(&sp1);
	taosophuc(&sp2);
	insophuc(sp1);
	insophuc(sp2);
	tong2sophuc(sp1,sp2);
	return 0;
}*/
typedef struct tamgiac
{
	float a,b,c;
	float chuvi,dientich;
}TG;
void nhap(TG tg,FILE *f)
{
	f=fopen("TAMGIAC.txt","wb");
	printf("nhap vao 3 canh tam giac\n");
	scanf("%f%f%f",&tg.a,&tg.b,&tg.c);
	while(tg.a+tg.b<=tg.c||tg.a+tg.c<=tg.b||tg.c+tg.b<=tg.a)
	{
		printf("nhap lai 3 canh tam giac\n");
		scanf("%f%f%f",&tg.a,&tg.b,&tg.c);
	}
	tg.chuvi=tg.a+tg.b+tg.c;
	float p=tg.chuvi/2;
	tg.dientich=sqrt(p*(p-tg.a)*(p-tg.b)*(p-tg.c));//CONG THUC HE - RONG
	fwrite(&tg,sizeof(TG),1,f);
	fclose(f);
}
void read(TG tg,FILE *f)
{
	f=fopen("TAMGIAC.txt","rb");
	printf("\n%10s  %10s  %10s  %10s  %10s \n","a","b","c","chu vi","dien tich");
	while(fread(&tg,sizeof(TG),1,f)!=NULL)
	{
		printf("%10.2f %10.2f %10.2f %10.2f %10.2f\n",tg.a,tg.b,tg.c,tg.chuvi,tg.dientich);
	}
	fclose(f);
}
void them(TG tg,FILE *f)
{
	f=fopen("TAMGIAC.txt","ab");
	printf("nhap vao 3 canh tam giac\n");
	scanf("%f%f%f",&tg.a,&tg.b,&tg.c);
	while((tg.a+tg.b<=tg.c)||(tg.a+tg.c<=tg.b)||(tg.b+tg.c<=tg.a))
	{
		printf("nhap lai 3 canh tam giac\n");
		scanf("%f%f%f",&tg.a,&tg.b,&tg.c);
	}
	tg.chuvi=tg.a+tg.b+tg.c;
	float p=tg.chuvi/2;
	tg.dientich=sqrt(p*(p-tg.a)*(p-tg.b)*(p-tg.c));
	fwrite(&tg,sizeof(TG),1,f);
	fclose(f);
}
void menu()
{
	printf("\n1.nhap tam giac\n");
	printf("2.them tam giac\n");
	printf("3.hien thi \n");
	printf("4.thoat\n");
}
int main()
{
	TG tg;
	FILE *f;
	int luachon=5;
	while(luachon!=0)
	{
		menu();
		printf("\nnhap lua chon cua ban\n");
		scanf("%d",&luachon);
		if(luachon==1)
		{
			nhap(tg,f);
		}
		else if(luachon==2)
		{
			them(tg,f);
		}
		else if(luachon==3)
		{
			read(tg,f);
		}
		else
		{
			break;
		}

	}
	return 0;
}
