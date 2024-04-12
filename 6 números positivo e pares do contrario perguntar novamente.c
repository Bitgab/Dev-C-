# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

# define Vetor 6

int main (){
setlocale(LC_ALL,"");

// Declarando variável.

int i;
int numero[Vetor];

// Solicitando dados ao usuário.

for(i = 0; i < Vetor; i++){
	do{
	printf("Digite o %dº número: ", i + 1);
	scanf("%i",&numero[i]);

	 
			
	}while (numero[i] < 0 || numero[i]  % 2 != 0) ;	
}
 	
//system("cls || clear");	
	
 for (i = Vetor -1; i > 0; i--){
 	printf(" %iº número: %i\n", i + 1, numero[i]);
 }	
return 0;	
}
