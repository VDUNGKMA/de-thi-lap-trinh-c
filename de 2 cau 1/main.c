#include <stdio.h>
#include <stdlib.h>
#include<math.h>
void cacth(float a,float b,float c)
{
	if (a==0)
	 {
	 	if(b==0)
		{
			if(c==0)
				printf("phuong trinh vo so nghiem\n");
			else
				printf("phuong trinh vo nghiem\n");
		}else
		printf("phuong trinh co 1 nghiem x=%f\n",-c/b);
	 }
	 else
	 {
	 	float delta=b*b-4*a*c;
	 	if(delta<0)
		{
			printf("phuong trinh vo nghiem\n");
		}
		else if(delta==0)
		{
			printf("phuong trinh co nghiem kep x1=x2=%f\n ",(-b/(2*a)));
		}
		else
			printf("phuong trinh co 2 nghiem p biet x1=%f,x2=%f",(-b+sqrt(delta))/(2*a),(-b-sqrt(delta))/(2*a));
	 }
}
int main()
{
   float a,b,c;
   printf("nhap va he so a,b,v\n");
   scanf("%f%f%f",&a,&b,&c);
   cacth(a,b,c);

    return 0;
}
