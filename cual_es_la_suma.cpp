#include <stdio.h>

int main()
{ 
	int n1, n2, resultado, suma;

    printf( "Introduzca un numero entero:\n\n");
    scanf( "%d", &n1 );
    printf( "Introduzca otro numero entero:\n\n");
    scanf( "%d", &n2 );
    printf( "Cuanto suman?:\n\n");
    scanf( "%d", &suma );

    resultado = n1 + n2;

    if ( suma == resultado )
        printf( "corecto\n\n" );
    else
        printf( "incorecto: La suma es %d", resultado );


return 0;
}
