#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*BAI1
void nhapxau(int str[])
{
	printf("nhap xau so nguyen\n");
	gets(str);
	puts(str);
}
void chuyenxauthanhso(int str[])
{
	int x;
	sscanf(str,"%d",&x);
	printf("%d",x);
}
int main()
{
	int str[50],c[50];
	nhapxau(str);
	printf("\nchuyen xau so nguyen thanh so nguyen\n");
	chuyenxauthanhso(str);
	return 0;
}*/
/*
void nhapmatran(int arr[][100],int hang,int cot) //BAI 2
{
	for(int i=0;i<hang;i++)
	{
		for(int j=0;j<cot;j++)
		{
			printf("nhap arr[%d][%d]\n",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
}
void xuatmatran(int arr[][100],int hang,int cot)
{
	for(int i=0;i<hang;i++)
	{
		for(int j=0;j<cot;j++)
		{
			printf("%6d",arr[i][j]);
		}
		printf("\n");
	}
}
void nhan2matran(int arr[][100],int brr[][100],int crr[][100],int hang1,int cot1,int cot2)
{
	for(int i=0;i<hang1;i++)
	{
		for(int j=0;j<cot2;j++)
		{
			for(int k=0;k<cot1;k++)
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
	int arr[100][100],brr[100][100],crr[100][100],hang1,cot1,hang2,cot2;
	printf("nhap vao hang 1 va cot 1\n");
	scanf("%d%d",&hang1,&cot1);
	printf("\nnhap vao hang 2\n");
	scanf("%d",&hang2);
	while(cot1!=hang2)
	{
		printf("\nnhap lai hang 2(luu y hang2 =cot1)\n");
		scanf("%d",&hang2);
	}
	printf("\nnhap vao cot 2\n");
	scanf("%d",&cot2);
	nhapmatran(arr,hang1,cot1);
	xuatmatran(arr,hang1,cot1);
	printf("\n");
	nhapmatran(brr,hang2,cot2);
	xuatmatran(brr,hang2,cot2);
	printf("\n.MA TRAN SAU KHI NHAN\n");
	nhan2matran(arr,brr,crr,hang1,cot1,cot2);
}*/
/*
typedef struct sinhvien //BAI 3
{
	char hoten[50];
	int tuoi;
	float diemlt,diemth;
}SV;
typedef struct node
{
	SV data;
	struct node *next;
}NODE;
typedef struct list
{
	NODE *head,*tail;
}LIST;
void init(LIST *l)
{
	l->head=NULL;
	l->tail=NULL;
}
NODE *getnode(SV *sv)
{
	NODE *p;
	p=(NODE*)malloc(sizeof(NODE));
	if(p==NULL)
	{
		printf("day bo nho ");
		return NULL;
	}
	else
	{
		p->data=*sv;
		p->next=NULL;
	}
	return p;
}
void themvaocuoi(LIST *l,NODE *p)
{
	if(l->head==NULL)
	{
		l->head=l->tail=p;
	}
	else
	{
		l->tail->next=p;
		l->tail=p;
	}
}
void nhap1sv(SV *sv)
{
	fflush(stdin);
	printf("\nnhap vao ho ten\n");
	gets(sv->hoten);
	fflush(stdin);
	printf("\nnhap vao tuoi\n");
	scanf("%d",&sv->tuoi);
	printf("\nnhap vao diem ly thuyet \n");
	scanf("%f",&sv->diemlt);
	printf("\nnhap vao diem thuc hanh\n");
	scanf("%f",&sv->diemth);
}
void nhap1list(SV *sv,LIST *l)
{
	init(l);
	for(int i=0;i<5;i++)
	{
		nhap1sv(sv);
		NODE *p=getnode(sv);
		themvaocuoi(l,p);
	}
}
void inlist(LIST l)
{
	printf("%15s %15s %15s %15s %15s\n","HO TEN","TUOI","DIEM LT","DIEM TH","DIEM TB");
	for(NODE *k=l.head;k!=NULL;k=k->next)
	{
		printf("%15s %15d %15f %15f %15f\n",k->data.hoten,k->data.tuoi,k->data.diemlt,k->data.diemth,(k->data.diemlt+k->data.diemth*2)/3);
	}
}
float timmax(LIST l,float c[])
{
	int i=0;
	for(NODE *k=l.head;k!=NULL;k=k->next)
	{
		c[i]=(k->data.diemlt+k->data.diemth*2)/3;
		i++;
	}
	float max=c[0];
	for(int i=0;i<5;i++)
	{
		if(c[i]>max)
		{
			max=c[i];
		}
	}
	return max;
}
void xuat_ra_inf_max(LIST l,float c[])
{
	printf("\nSINH VIEN CO DIEM TB CAO NHAT LA:\n");
	for(NODE *k=l.head;k!=NULL;k=k->next)
	{
			if((k->data.diemlt+k->data.diemth*2)/3==timmax(l,c))
			{
				printf("%15s %15d %15f %15f %15f\n",k->data.hoten,k->data.tuoi,k->data.diemlt,k->data.diemth,(k->data.diemlt+k->data.diemth*2)/3);
			}
	}
}
int main()
{
	LIST l;
	SV sv;
	float c[200];
	nhap1list(&sv,&l);
	inlist(l);
	printf("\n");
	xuat_ra_inf_max(l,c);
	return 0;
}*/
int UCLN(int a,int b)//BAI4
{

	if(a==0||b==0)
		{
			return a+b;
		}
	else
	{
		while(a!=b)
		{
			if(a>b)
			{
				a=a-b;
			}
			if(a<b)
			{
				b=b-a;
			}
		}
		return a;
	}
}
int BCNN(int a,int b)
{
	int p=a*b;
	int k=p/UCLN(a,b);
	return k;
}
void readfile (FILE *f)
{
	int arr[50][50],hang=0;
	f=fopen("UCLL_BCNN.txt","r");
	if(f==NULL)
	{
		printf("\nKHONG TIM THAY FILE\n");
	}
	else
	{
		while(!feof(f))
		{
			for(int j=0;j<2;j++)
			{
				fscanf(f,"%d",&arr[hang][j]);

			}
			hang++;
		}
	}
	rewind(f);
	while(!feof(f))
	{
		for(int i=0;i<hang;i++)
		{
			for(int j=0;j<2;j++)
			{
				fscanf(f,"%d",&arr[i][j]);
			}
		}
	}
	fclose(f);
	f=fopen("NEW.txt","w");
	int dem=0;
	fprintf(f,"%15s%15s%15s%15s\n","a","b","UCLN","BCNN");
	while(dem<hang-1)
	{
		fprintf(f,"%15d",arr[dem][0]);
		fprintf(f,"%15d",arr[dem][1]);
		fprintf(f,"%15d",UCLN(arr[dem][0],arr[dem][1]));
		fprintf(f,"%15d\n",BCNN(arr[dem][0],arr[dem][1]));
		dem++;
	}
	fclose(f);
}
int main()
{
	FILE *f;
	readfile(f);
}