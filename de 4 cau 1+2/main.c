#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/*void nhapmatran(int arr[][100],int m,int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("nhap vao arr[%d][%d]\n",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%6d",arr[i][j]);
		}
		printf("\n");
	}
}
void maxmin(int arr[][100],int m,int n)
{
	int max=arr[0][0],min=arr[0][0];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(max<arr[i][j])
			{
				max=arr[i][j];
			}
			if(min>arr[i][j])
			{
				min=arr[i][j];
			}
		}
	}
	printf("\nmax=%d,min=%d",max,min);
}
int main()
{
	int arr[100][100],m,n;
	printf("nhap vao m va n \n");
	scanf("%d%d",&m,&n);
	nhapmatran(arr,m,n);
	maxmin(arr,m,n);

    return 0;
}*/
//bai2 de4
typedef struct sinhvien
{
	char hoten[50];
	int tuoi ;
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
		printf("day bo nho!");
		return NULL;
	}
	else
	{
		p->data=*x;
		p->next=NULL;
	}
	return p;
}
void addtail(NODE *p,LIST *l)
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
	printf("nhap ho ten\n");
	fflush(stdin);
	gets(x->hoten);
	printf("nhap tuoi\n");
	scanf("%d",&x->tuoi);
	printf("nhap diem trung binh \n");
	scanf("%f",&x->diemtb);
}
void nhaplist(LIST *l)
{
	int n;
	SV *x;
	printf("nhap vao so luong sinh vien\n");
	scanf("%d",&n);
	init(l);
	for(int i=0;i<n;i++)
	{
		nhap1sv(x);
		NODE *p=getnode(x);
		addtail(p,l);
	}
}
void inlist(LIST l)
{
	printf("%10s%15s%15s%15s\n","STT","HO TEN","TUOI","DIEMTB");
	int i=0;
	NODE *k;
	for(k=l.head,i=0;k!=NULL;i++,k=k->next)
	{
		printf("%10d%15s%15d%15f\n",i,k->data.hoten,k->data.tuoi,k->data.diemtb);
	}
}
void xoa1sv(LIST l)
{
	char HT[50];
	printf("nhap vao cai ten can xoa\n");
	fflush(stdin);
	gets(HT);
	NODE *inf;
	if(strcmp(HT,l.head->data.hoten)==0)
	{
		inf=l.head;
		l.head=l.head->next;
		free(inf);
		inf->next=NULL;
	}
	for(NODE *k=l.head;k!=NULL;k=k->next)
	{
		if(strcmp(HT,k->data.hoten)==0)
		{
			inf->next=k->next;
			free(k);
			k->next=NULL;
		}
		inf=k;
	}
	inlist(l);
}
int main()
{
	LIST l;
	nhaplist(&l);
	inlist(l);
	xoa1sv(l);
	return 0;
}

