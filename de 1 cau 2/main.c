#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct SV
{
	char hoten[50];
	int tuoi;
	float diemtb;
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
	l->head=l->tail=NULL;
}
NODE *getnode(SV *x)
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
		p->data=*x;
		p->next=NULL;
	}
	return p;
}
void themvaocuoi(NODE *p,LIST *l)
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
void nhap1sv(SV *x)
{
	printf("nhap ho ten \n");
	fflush(stdin);
	gets(x->hoten);
	printf("nhap tuoi \n");
	fflush(stdin);
	scanf("%d",&x->tuoi);
	printf("nhap diem trung binh\n");
	fflush(stdin);
	scanf("%f",&x->diemtb);
}
void nhap1list(SV *x,LIST *l)
{
	int n;
	printf("nhap so luong sinh vien \n");
	scanf("%d",&n);
	init(l);
	for(int i=0;i<n;i++)
	{
		nhap1sv(x);
		NODE *p=getnode(x);
		themvaocuoi(p,l);
	}
}
void in1sv(SV x)
{
	int i=1;
	printf("%5d%15s%10d%10f\n",i,x.hoten,x.tuoi,x.diemtb);
}
void in1list(LIST l)
{
	NODE *k;
	int i=1;
	printf("%5s%15s%10s%10s\n","STT","HO TEN","TUOI","DIEMTB");
	for(k=l.head,i=1;k!=NULL;k=k->next,i++)
	{
		printf("%5d%15s%10d%10f\n",i,k->data.hoten,k->data.tuoi,k->data.diemtb);
	}
}
void themsv(LIST l)
{
	char HT[50];
	NODE *p;
	SV x;
	printf("ban muon them sau cai ten \n");
	fflush(stdin);
	gets(HT);
	nhap1sv(&x);
	p=getnode(&x);
	for(NODE *k=l.head;k!=NULL;k=k->next)
	{
		if(strcmp(HT,k->data.hoten)==0)
		{

			NODE *m=k->next;
			k->next=p;
			p->next=m;
			break;
		}
	}
	in1list(l);
}
int main()
{
	LIST l;
	SV x;
	nhap1list(&x,&l);
	in1list(l);
	themsv(l);

    return 0;
}
