#include <stdio.h>
 int main()
{
  /*Gutierrez Cardenas Carlos Gael 
    12 MAY 21 burros dorados del 17
    programa
    */
float peso, altura, IMC;
printf("\n\n programa 7");
printf("\n\n Calcular el indice de masa corporal");
printf("\n\n Dame el peso");
scanf("%f",&peso);
printf("\n\n Dame la altura");
scanf("%f",&altura);
IMC = peso /(altura*altura);
printf("\n La masa muscular es %f", IMC);
return 0;
}