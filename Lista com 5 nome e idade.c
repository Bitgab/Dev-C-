# include <stdio.h>
# include <locale.h>
# include <ctype.h>
# include <stdlib.h>
# include <time.h>
# define TAM 3

int main (){
setlocale(LC_ALL,"portuguese");
	
// Declarando as variáveis.

char nomes [TAM] [200];
int i, idade[TAM];	

for (i = 0; i < TAM; i++){
	printf("Informe seu nome: ", i + 1,nomes[i]);
	scanf("%s",&nomes[i]);
	printf("Digite sua idade: ",i +1);
	scanf("%i",& idade[i]);	
	printf("\n"); 
	sleep(1);
}

system ("cls || clear");

// Exibindo resultado.

for (i = 0; i < TAM; i++){
	printf("%dº nome informado: %s\n", i + 1,nomes[i]);
	printf("%dº idade informada: %i anos\n",i + 1, idade[i]);
	printf("\n");
}	
return 0;	
}
