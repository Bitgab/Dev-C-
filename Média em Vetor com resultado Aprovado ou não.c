# include <stdio.h>
# include <locale.h>
# define TAM 4


int main (){
setlocale(LC_ALL,"");
	
// Declarando as vari�veis 01�.

int i;
float media, soma = 0;
float v[TAM];
char resultado[200];

// Solicitando dados usu�rio 02�.

for (i = 0; i < TAM; i++){
		printf("Informe sua nota da %d� unidade: ", i + 1);
		scanf("%f",&v[i]);
		soma += v[i];
}

// Calculo da m�dia.	
media = soma / (float) TAM;

// IF e ELSE.

if (media >= 7){
	strcpy (resultado,"Aprovado!");	
} else if (media >= 5){
 	strcpy (resultado,"Recupera��o!");	
} else {
	strcpy (resultado,"REprovado!");	
}
system ("cls || clear");

// EXIBINDO o RESULTADo 04�.

printf("\n=== EXiBINDO RESULTADO ===\n");

 for(i = 0; i < TAM; i++){
   	printf("Nota %d�: %.1f\n",i + 1, v[i]);
	}
	printf("M�dia do aluno: %.2f\n", media);
	printf("Situa��o do aluno: %s\n", resultado);	
return 0;	
}
