# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string.h>
# include <limits.h>
# include <ctype.h>


int main (){
setlocale(LC_ALL,"");

// Declarando as vari�veis.

int idade, contador = 1;
char sexo, pessoa, continua;
float salario;


	do{
		
		printf("Digite seu nome: ");
		scanf("%s",&pessoa);
		printf("Informe sua idade:");
		scanf("%i",&idade);
		printf("Informe seu sexo usando [M / F]: ");
		scanf("%s",&sexo);
	
		printf("\n");
		printf("\n=== MENU ===\n");
		printf("\n");
		printf("C�digo |   Descri��o \n");
		printf("  1�   | Adicionar pessoa \n");
		printf("  2�   | Esxibir resultados e sair \n");
		printf("Resposta do usu�rio: ");
		scanf("%s",&continua);
		continua = toupper(continua);
		printf("\n");
		
		
// Switch Case para continmuar com as op��o do menu.

	switch (continua){
		
		case '1':
			
			printf("Digite seu nome: ");
			 scanf("%s",&pessoa);
			printf("Informe sua idade:");
			 scanf("%i",&idade);
			printf("Informe seu sexo usando [M / F]: ");
			 scanf("%s",&sexo);
			soma += pessoas;
			contador++;
		break;
		
		case '2':
		
			soma / contador	
	}			
	} while (continua == '1');
	


// Solicitando dados ao usu�rio.

 

	
return 0;	
}
