# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# define Vetor 100


int main (){
setlocale(LC_ALL,"");

// Declaração de variável.

int i;
int pares = 0, impares = 0, positivo = 0 , negativo = 0;
int numero[Vetor];	

// Solicitando dados ao usuário.

 while (numero [i] != 0 ){
 
 printf("Digite o %dº número: ", i + 1);
 scanf("%i",&numero[i]);

 
 if (numero[i] %2 == 0){
 			pares;
	 		}
	 	
		else{
	   	  	impares++;
	   		}
	 	if (numero[i] > 0){
	 	  positivo++;	
	 	}
	 	
	 	else if (numero[i] < 0) {
	 	  negativo++;
	 	}
	 	
	  if (numero [i] != 0){
 		i++;
 		}	
}

// Exibindo Resultado.

printf("A quantidade de números pares: %i\n", pares);
printf("A quantidade de números ímpares: %i\n", impares);
printf("A quantidade de números positivo: %i\n",positivo);
printf("A quantidade de números negativo: %i\n",negativo);
printf("A quantidade de números inseridos: %i\n", i);	
}
