#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct sv
{
	char hoten[50];
	int tuoi;
	float diem;
}sv;
typedef struct node
{
	sv data;
	struct node *next;
}node;
typedef struct list
{
	node *head,*tail;
}list;
void init(list *l)
{
	l->head=l->tail=NULL;
}
node *getnode(sv *x)
{
	node *p;
	p=(node*)malloc(sizeof(node));
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
void themvaocuoi(node *p,list *l)
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
void tao1sv(sv *x)
{
	printf("nhap ho ten \n");
	fflush(stdin);
	gets(x->hoten);
	printf("nhap tuoi\n");
	fflush(stdin);
	scanf("%d",&x->tuoi);
	printf("nhap diem trung binh\n");
	fflush(stdin);
	scanf("%f",&x->diem);
}
void taolist(sv *x,list *l)
{
	int n;
	printf("nhap so luong sinh vien\n");
	scanf("%d",&n);
	init(l);
	for(int i=0;i<n;i++)
	{
		tao1sv(x);
		node*p=getnode(x);
		themvaocuoi(p,l);
	}
}
void inlist(list l)
{
	node *k;
	int i=1;
	printf("%5s%15s%10s%10s\n","STT","HO TEN","TUOI","DIEM");
	for( k=l.head,i=1;k!=NULL;i++,k=k->next)
	{
		printf("%5d%15s%10d%10f\n",i,k->data.hoten,k->data.tuoi,k->data.diem);
	}
}
void them1sv(list l)
{
	char HT[50];
	printf("ban muon chen sau cai ten\n");
	fflush(stdin);
	gets(HT);
	sv x;
	tao1sv(&x);
	node *p=getnode(&x);
	for(node *k=l.head;k!=NULL;k=k->next)
	{
		if(strcmp(HT,k->data.hoten)==0)
		{
			node *m=k->next;
			k->next=p;
			p->next=m;
			break;
		}
	}
	inlist(l);
}
void xoa1sv(list l)
{
	char HT[50];
	printf("ban can xoa sau cai ten \n");
	fflush(stdin);
	gets(HT);
	for(node *k=l.head;k!=NULL;k=k->next)
	{
		if(strcmp(HT,k->data.hoten)==0)
		{
			node *m=k->next;
			k->next=m->next;
			free(m);
			m->next=NULL;
			break;
		}
	}
	inlist(l);
}
void xoadungtaivitri(list l)
{
	char HT[50];
	printf("ban can xoa sau cai ten \n");
	fflush(stdin);
	gets(HT);
	node *q;
	if(strcmp(HT,l.head->data.hoten)==0)
	{
		q=l.head;
		l.head=l.head->next;
		free(q);
		q->next=NULL;
	}
	else
	{
		for(node *k=l.head;k!=NULL;k=k->next)
		{
			if(strcmp(HT,k->data.hoten)==0)
			{
				q->next=k->next;
				free(k);
				k->next=NULL;
				break;
			}
			q=k;
		}
	}
	inlist(l);
}
int main()
{
	sv x;
	list l;
	taolist(&x,&l);
	inlist(l);
	//them1sv(l);
	//xoa1sv(l);
	xoadungtaivitri(l);

    return 0;
}
