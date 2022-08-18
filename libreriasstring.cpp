#include <stdio.h>
#include<string.h>
int main()
{
	inicio:
	char nombre [20];
	int longuitud_string;
	
	printf("escribe tu nombre:\n");
	gets(nombre);
	
	printf("tu nombre es:%s\n",nombre);
	
	longuitud_string=strlen(nombre);
	printf("tu nombre es:%s\ntiene %i caracteres\n\n",nombre,longuitud_string);
	
	goto inicio;

return 0;
}
