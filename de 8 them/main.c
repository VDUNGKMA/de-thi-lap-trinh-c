#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
typedef struct sinhvien //BAI 3
{
	char hoten[50];
	int date;
	char lop[30];
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
	printf("nhap vao ho ten\n");
	fflush(stdin);
	gets(sv->hoten);
	printf("\nnhap vao ngay sinh\n");
	scanf("%d",&sv->date);
	fflush(stdin);
	printf("nhap vao lop\n");
	gets(sv->lop);
}
void nhap1list(LIST *l)
{
	int n;
	SV *sv;
	printf("nhap so luong sinh vien\n");
	scanf("%d",&n);
	init(l);
	for(int i=0;i<n;i++)
	{
		nhap1sv(sv);
		NODE *p=getnode(sv);
		themvaocuoi(l,p);
	}
}
void inlist(LIST l)
{
	printf("%15s%15s%15s\n","HO TEN","NGAY SINH","LOP");
	for(NODE *k=l.head;k!=NULL;k=k->next)
	{
		printf("%15s%15d%15s\n",k->data.hoten,k->data.date,k->data.lop);
	}
}
void hoandoi(SV *sv1,SV *sv2)
{
		SV c=*sv1;
		*sv1=*sv2;
		*sv2=c;
}
void sapxep_alphaB(LIST l)
{
	printf("\nDANH SACH SAU KHI SAP XEP THEO ALPHAB la \n");
	for(NODE *k=l.head;k!=NULL;k=k->next)
	{
		for(NODE *j=l.head->next;j!=NULL;j=j->next)
		{
			if(strcmp(k->data.hoten,j->data.hoten)>0)
				{
					hoandoi(&k->data,&j->data);
				}
		}
	}
	inlist(l);
}
int main()
{
	LIST l;
	nhap1list(&l);
	inlist(l);
	printf("\n\n");
	sapxep_alphaB(l);
    return 0;
}*/
void doiraxau(int n)
{
	int arr[100],str[100];
	int i=0;
	while(n!=0)
	{
		arr[i]=n%2;
		n/=2;
		i++;
	}
}
int main()
{
	int arr[100],n;
	printf("nhap vao n\n");
	scanf("%d",&n);
	doiraxau(n);
	return 0;
}
