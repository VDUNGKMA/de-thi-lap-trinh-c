#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
void nhapmang(int arr[],int n) //bai1
{
	for(int i=0;i<n;i++)
	{
		printf("nhap arr[%d]\n",i);
		scanf("%d",&arr[i]);
	}
	printf("%d",&arr[0]);
}
int main()
{
	int arr[100],n;
	printf("nhap vao n\n");
	scanf("%d",&n);
	nhapmang(arr,n);

    return 0;
}*/
/*
typedef struct hoten //BAI 2
{
	char hoten[50];
}HT;
typedef struct node
{
	HT data;
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
NODE *getnode(HT *ht)
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
		p->data=*ht;
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
void nhap1hoten(HT *ht)
{
	printf("nhap ho va ten\n");
	fflush(stdin);
	gets(ht->hoten);
}
void nhaplist(LIST *l)
{
	int n;
	HT *ht;
	printf("nhap so luong ho ten can nhap\n");
	scanf("%d",&n);
	init(l);
	for(int i=0;i<n;i++)
	{
		nhap1hoten(ht);
		NODE *p=getnode(ht);
		themvaocuoi(l,p);
	}
}
void inlist(LIST l)
{
	for(NODE *k=l.head;k!=NULL;k=k->next)
	{
		printf("%s\n",k->data.hoten);
	}
}
void hoandoi(char *hoten1,char *hoten2 )
{
	char c=*hoten1;
		*hoten1=*hoten2;
		*hoten2=c;
}
void sapxep(LIST l)
{
	for(NODE *k=l.head;k!=NULL;k=k->next)
	{
		for(NODE *m=l.head->next;m!=NULL;m=m->next)
		{
			if(strcmp(k->data.hoten,m->data.hoten)>0)
			{
				hoandoi(&k->data,&m->data);
			}
		}
	}
	inlist(l);
}
int main()
{
	LIST l;
	 nhaplist(&l);
	 inlist(l);
	 printf("\nsau khi sap xep \n");
	 sapxep(l);
	return 0;
}*/

typedef struct born //bai3
{
	int ngay,thang,nam;
}born;
typedef struct node
{
	born data;
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
NODE *getnode(born*hs)
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
		p->data=*hs;
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
void  nhap1born(born *hs)
{
	scanf("%d%d%d",&hs->ngay,&hs->thang,&hs->nam);
}
void nhaplist (LIST *l)
{
	int n;
	born *hs;
	printf("nhap so luong born \n");
	scanf("%d",&n);
	init(l);
	for(int i=0;i<n;i++)
	{
		nhap1born(hs);
		NODE *p=getnode(hs);
		themvaocuoi(l,p);
	}
}
void inlist(LIST l)
{
	for(NODE *k=l.head;k!=NULL;k=k->next)
	{
		printf("%15d%15d%15d\n",k->data.ngay,k->data.thang,k->data.nam);
	}
}
void xoa1node(LIST l)
{
	int x;
	printf("nhap vao ngay can xoa\n");
	scanf("%d",&x);
	NODE *q;
	for(NODE *k=l.head;k!=NULL;k=k->next)
	{
		if(k->data.ngay==x)
		{
			q->next=k->next;
			free(k);
			k->next=NULL;
		}
		q=k;
	}
	inlist(l);
}
void them1node(LIST l)
{
	born hs;
	NODE *p;
	int x;
	printf("\nban muon them sau ngay sinnh\n");
	scanf("%d",&x);
	nhap1born(&hs);
	p=getnode(&hs);


	for(NODE *k=l.head;k!=NULL;k=k->next)
	{
		if(k->data.ngay==x)
		{
			NODE *m=k->next;
			k->next=p;
			p->next=m;
			break;
		}
	}
	inlist(l);

}
int main()
{
	LIST l;
	nhaplist(&l);
	inlist(l);
	//printf("\nxoa 1 node\n");
	//xoa1node(l);
	printf("\nthem1 node\n");
	them1node(l);
	return 0;
}

