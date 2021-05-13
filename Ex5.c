#include <stdio.h>
int main () 
{
     /*Gutierrez Cardenas Carlos Gael 
    12 MAY 21 burros dorados del 17
    programa
    */
   float numerodepersonas, numerodealimentos, porciones;
   printf ("\n\n Programa 1");
   printf ("\n\n Dame el numero de personas");
   scanf ("%f",&numerodepersonas);
   printf ("\n\n Dame el numero de alimentos disponibles");
   scanf ("%f",&numerodealimentos);
   porciones=numerodealimentos/numerodepersonas;
   printf ("\n\n La porcion para dividir equitativamente a cada persona es %f",porciones);

    return 0;
}

   
