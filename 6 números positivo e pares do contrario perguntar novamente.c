# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

# define Vetor 6

int main (){
setlocale(LC_ALL,"");

// Declarando vari�vel.

int i;
int numero[Vetor];

// Solicitando dados ao usu�rio.

for(i = 0; i < Vetor; i++){
	do{
	printf("Digite o %d� n�mero: ", i + 1);
	scanf("%i",&numero[i]);

	 
			
	}while (numero[i] < 0 || numero[i]  % 2 != 0) ;	
}
 	
//system("cls || clear");	
	
 for (i = Vetor -1; i > 0; i--){
 	printf(" %i� n�mero: %i\n", i + 1, numero[i]);
 }	
return 0;	
}
