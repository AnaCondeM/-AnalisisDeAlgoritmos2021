#include <stdio.h>  
#include <stdlib.h>
#include <conio.h>
#include <time.h>


int numeros[10000];//cantidad máxima de numeros
int num;
 
void crearNumAleatorios(void);
void ordenNumAleatorios(void);

void main(void){

     printf("Introdusca la cantidad de números aleatorios a ordenar: ");
     scanf("%d", &num);
     printf("\n\n");

crearNumAleatorios();
ordenNumAleatorios();
}

void crearNumAleatorios(void){
int k=0,i,j;

srand((unsigned)time(NULL));
     printf("Números aleatorios creados:\n");
     for(i=0; i<num; i++){
         k++;
         numeros[i] = rand()/327;
         printf("%d\n", numeros[i]);
 }
}

void ordenNumAleatorios(void){

int i,j,m,l,k=0;

for(j=1; j<num; j++)
     for(m=0; m<num-1; m++){
         if(numeros[m+1]<numeros[m]){
             l = numeros[m];
             numeros[m] = numeros[m+1];
             numeros[m+1] = l;
            }
    }

printf("\n\nNúmeros ordenados:\n");

for(i=0; i<num; i++){
    k++;
    printf("%d\n", numeros[i]);
}
}