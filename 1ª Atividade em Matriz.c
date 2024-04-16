#include<stdio.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

//  Declaração matriz

int numero [2][2];

// atribuido valores da matriz

numeros  [0][0] = 1;	
numeros  [0][1] = 2;	
numeros  [1][0] = 3;	
numeros  [1][1] = 4;	
	
//  Exibindo Resultado.

printf("Elemento 1: %d\n",numero[0][0]);
printf("Elemento 2: %d\n",numero[0][1]);	
printf("Elemento 3: %d\n",numero[1][0]);	
printf("Elemento 4: %d\n",numero[1][1]);	
	
	
return 0;	
}
