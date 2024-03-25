# include <stdio.h>
# include <locale.h>


int main (){
setlocale(LC_ALL, "");

// Declaração de Variável.

int i, numero; 
int pares = 0, impares = 0;


// Solicitando dados ao usuário.

for (i = 1; i <= 5; i++){
		printf(" Digite o %i° número: ", i);
		scanf("%i",&numero);
		
	if  (numero % 2 == 0){
		pares = pares ++;
	} else{
		impares++;
	}
} 

printf("\n=== EXIBINDO RESULTADO ===\n");
printf("Pares: %i \n", pares);
printf("Ímpares: %i \n",impares);


	
return 0;	
}
