#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c;
float s,z,area;
printf("Enter the value of a,b,c: \n");
scanf("%d %d %d",&a,&b,&c);
s=(a+b+c)/2;
z=(s*(s-a)*(s-b)*(s-c));
area=sqrt(z);
printf("s=%f \n",s);
printf("z=%f \n",z);
printf("area=%f \n",area);
}
