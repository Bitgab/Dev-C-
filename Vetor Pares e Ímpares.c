# include <stdio.h>
# include <locale.h>
# define TAM 2

int main (){
setlocale(LC_ALL,"");

// Declarando vari�vel
int i; 
int numero[TAM];
int pares = 0, impares = 0;

// Solicitando dados ao usu�rio.

for (i = 0; i < TAM; i++){
	printf("Digite o %d� n�mero: ",i + 1, numero[i]);
	scanf("%i",&numero[i]);
	
	if(numero[i] % 2 == 0){
		 pares = pares ++;
	} 
	else{
	impares++;
	}
}

// Exibindo Resultado

printf("\n=== EXIBINDO RESULTADO ===\n");
printf("N�meros Pares: %i \n", pares);
printf("N�meros �mpares: %i \n", impares);
return 0;
}
