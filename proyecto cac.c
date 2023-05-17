#include <stdio.h>
#include <stdlib.h>


int main()
{
    int numero = 0;
    int start = 1;
    char departamento;
    
   printf("usuario sea usted bienvenido a nuestro programa.\n este esta diseñado con el proposito de dar a conocer las cifras \n de contaminacion atmosferica por departamento a nivel nacional actualmente\n");
  
   
   while(start) {
    printf("[1] digite el departamento a consultar:");
    printf("[2] cerrar programa:");
    scanf("%d",&numero);
    start = 0;
   }
   
    
   if(numero == 1 ){
    printf("por favor digite el departamento");
    scanf("%c",departamento);
   }

    //system ("pause");
    return 0;
}
