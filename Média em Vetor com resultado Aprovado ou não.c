# include <stdio.h>
# include <locale.h>
# define TAM 4


int main (){
setlocale(LC_ALL,"");
	
// Declarando as variáveis 01ª.

int i;
float media, soma = 0;
float v[TAM];
char resultado[200];

// Solicitando dados usuário 02ª.

for (i = 0; i < TAM; i++){
		printf("Informe sua nota da %dª unidade: ", i + 1);
		scanf("%f",&v[i]);
		soma += v[i];
}

// Calculo da média.	
media = soma / (float) TAM;

// IF e ELSE.

if (media >= 7){
	strcpy (resultado,"Aprovado!");	
} else if (media >= 5){
 	strcpy (resultado,"Recuperação!");	
} else {
	strcpy (resultado,"REprovado!");	
}
system ("cls || clear");

// EXIBINDO o RESULTADo 04ª.

printf("\n=== EXiBINDO RESULTADO ===\n");

 for(i = 0; i < TAM; i++){
   	printf("Nota %dª: %.1f\n",i + 1, v[i]);
	}
	printf("Média do aluno: %.2f\n", media);
	printf("Situação do aluno: %s\n", resultado);	
return 0;	
}
