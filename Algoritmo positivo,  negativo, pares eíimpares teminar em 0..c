# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# define Vetor 100


int main (){
setlocale(LC_ALL,"");

// Declara��o de vari�vel.

int i;
int pares = 0, impares = 0, positivo = 0 , negativo = 0;
int numero[Vetor];	

// Solicitando dados ao usu�rio.

 while (numero [i] != 0 ){
 
 printf("Digite o %d� n�mero: ", i + 1);
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

printf("A quantidade de n�meros pares: %i\n", pares);
printf("A quantidade de n�meros �mpares: %i\n", impares);
printf("A quantidade de n�meros positivo: %i\n",positivo);
printf("A quantidade de n�meros negativo: %i\n",negativo);
printf("A quantidade de n�meros inseridos: %i\n", i);	
}
