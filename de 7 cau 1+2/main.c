#include<stdio.h>
#include <stdlib.h>
#include <math.h>
/*
int main()
{
  float gdp2010;
  float gdps=0;
  int nam=2010;
  float tocdotang;
  printf("nhap vao gdp2010,tocdotang \n");
  scanf("%f%f",&gdp2010,&tocdotang);
  printf("%10s%10s\n","NAM","GDP");
  printf("%10d%16.2f\n",2010,gdp2010);
  float gdpt=gdp2010;
  while(gdps<(2*gdp2010))
  {
    gdps=gdpt*(1+(tocdotang/100));
    nam++;
    printf("%10d%18.2f\n",nam,gdps);
    gdpt=gdps;
  }
    return 0;
}*/
void matranxoay(int arr[][100],int n)
{
  //y tuong lam ma tranxoay la cho chay vong lap xong nem no vao mang 2 chieu
  int hang=n-1,cot=n-1,gt=1,dem=0;
  printf("MA TRAN XOAY\n");
  while(gt<=n*n)
  {
    for(int i=dem;i<=cot;i++)
    {
      arr[dem][i]=gt++;
    }
    for(int i=dem+1;i<=hang;i++)
    {
      arr[i][cot]=gt++;
    }
    for(int i=cot-1;i>=dem;i--)
    {
      arr[hang][i]=gt++;
    }
    for(int i=hang-1;i>=dem+1;i--)
    {
      arr[i][dem]=gt++;
    }
    dem++;
    cot--;
    hang--;
  }
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      printf("%6d",arr[i][j]);
    }
    printf("\n");
  }
}
int main()
{
  int arr[100][100],n;
  printf("nhap vao so n\n");
  scanf("%d",&n);
  matranxoay(arr,n);

  return 0;
}