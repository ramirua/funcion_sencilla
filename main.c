#include <stdio.h>
#include <stdlib.h>

 int suma (int b,int c)
  {
  int s;
  s=b+c;
  return s;
  }
  
  int multiplicar(int d,int p)
  {
  	int m;
  	m=d*p;
  	return m;
  }


int main()
{
	int a,b,sum,mul,d,p;
	
	printf("ingrese el 1er valor a sumar: ");
	scanf("%d",&a);
	printf("ingrese el 2do valor a sumar: ");
	scanf("%d",&b);
	
	sum=suma(a,b);
	printf("\n el valor de la suma es: %d",sum);
	
	printf("\ningrese el 1er valor a multiplicar: ");
	scanf("%d",&d);
	printf("ingrese el 2do valor a multiplicar: ");
	scanf("%d",&p);
	
	mul=multiplicar(d,p);
	printf("\n el valor de la suma es: %d",mul);
	return 0;
}
