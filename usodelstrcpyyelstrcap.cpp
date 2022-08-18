#include <stdio.h>
#include<string.h>

int main()
{
	char nombre[20]="abigail";
	char apellido[20]="cortes";
	
	//strcpy(nombre, apellido);
	printf("cadena copiada:%s\n",nombre);
	
	strcat(nombre," ");
	strcat(nombre, apellido);
	printf("cadena concadenada:%s",nombre);
	
return 0;
}