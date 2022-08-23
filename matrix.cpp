#include<stdio.h>

int main()
{
       int matrix[2]={0,1};
       int matrix2[2]={0,1};
       int matrix3[2]={0,1};
       int matrix4[2]={0,1};
       inicio:
              for(int i=0;i<2;i++)
              {
                     printf("%i\t\t\t\t\t%i\t\t\t\t\t\t\t\t\t%i\t\t\t\t\t\t\t\t\t\t%i\t\t\t\t\t",matrix[i],matrix2[i],matrix3[i],matrix4[i]);
              }
              goto inicio;

return 0;
}
