#include <stdio.h>

int maximo10(int n)
{
	if (n>0&&n<=10)
	{
		return n;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int longuitud_array;
	
	printf("elige la longuitud del array del 1 al 10:");
	scanf("%i",&longuitud_array);
	
	if(maximo10(longuitud_array)!=0)
	{
		int numeros[longuitud_array];
		for(int i=0;i<longuitud_array;i++)
		{
			numeros[i]=i+1;
			printf("\nla longuituid del array es:%i\n\n",i+1,numeros[i]);
		}		
	}
	else
	{ printf("\nla longuitud del array debe ser entre 1 y 10:\n\n");
	}

return 0;
}