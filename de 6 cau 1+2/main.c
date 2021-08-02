#include <stdio.h>
#include <stdlib.h>
/*void nhapday(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("nhap phan tu thu %d\n",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\n");
	for(int i=0;i<n;i++)
	{
		printf("%6d",arr[i]);
	}
}
void hoandoi(int *a,int *b)
{
	int c=*a;
		*a=*b;
		*b=c;
}
void sapxepday(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				hoandoi(&arr[i],&arr[j]);
			}
		}
	}
	printf("\nDAY SAU KHI SAP XEP\n");
	for(int i=0;i<n;i++)
	{
		printf("%6d",arr[i]);
	}
}
int main()
{
	int arr[100],n;
	printf("nhap vao so p tu \n");
	scanf("%d",&n);
	nhapday(arr,n);
	sapxepday(arr,n);

    return 0;
}*/
void matranc(FILE *f,int arr[][100],int brr[][100],int dong ,int cot)
{
	f=fopen("MA_TRAN.C","w");
	fprintf(f,"%5d%5d",dong,cot);
	fprintf(f,"\nMA TRAN A\n");
	for(int i=0;i<dong;i++)
	{
		for(int j=0;j<cot;j++)
		{
			printf("nhap vao arr[%d][%d]\n",i,j);
			scanf("%d",&arr[i][j]);
			fprintf(f,"%6d",arr[i][j]);
		}
		fprintf(f,"\n");
	}
	printf("\nMA TRAN B\n");
	fprintf(f,"\nMA TRAN B\n");
	for(int i=0;i<dong;i++)
	{
		for(int j=0;j<cot;j++)
		{
			printf("nhap vao brr[%d][%d]\n",i,j);
			scanf("%d",&brr[i][j]);
			fprintf(f,"%6d",brr[i][j]);
		}
		fprintf(f,"\n");
	}
	fclose(f);
}
void matranbosung(FILE *f,int arr[][100],int brr[][100],int dong,int cot)
{
	int crr[100][100];
	f=fopen("MA_TRAN.C","a");
	fprintf(f,"\nMA TRAN C\n");
	for(int i=0;i<dong;i++)
	{
		for(int j=0;j<cot;j++)
		{
			crr[i][j]=arr[i][j]+brr[i][j];
			fprintf(f,"%6d",crr[i][j]);
		}
		printf("\n");
		fprintf(f,"\n");
	}
	fclose(f);
}
int main()
{
	FILE *f;
	int dong,cot;
	printf("nhap so dong va cot\n");
	scanf("%d%d",&dong,&cot);
	int arr[100][100],brr[100][100];
	matranc(f,arr,brr,dong,cot);
	matranbosung(f,arr,brr,dong,cot);
	return 0;
}
