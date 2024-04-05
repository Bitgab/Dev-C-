# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string.h>
# include <ctype.h>


int main (){
setlocale(LC_ALL,"");

// Solicitando dados ao usuário 01.

int idade, contador = 1, maiorIdade = INT_MIN, menorIdade = INT_MAX;
char sexo, pessoa, continua;
float salario, mediaDeSalario, quantidade, salario_5000;
	
	
// Solicitando dados ao usuário 02.

 printf("Digite seu nome: ");
 scanf("%s",&pessoa);

 printf("Digite sua idade: ");
 scanf("%i",&idade);
 
 printf("Informe seu sexo usando [M / F ]");
 scanf("%s",&sexo);
 
 printf("Informe seu salário: ");
 scanf("%f",&salario);
 
 
 printf("\n");
 printf("\n=== MENU ===\n");
 printf("\n");
 printf("Código |   Descrição \n");
 printf("  1ª   | Adicionar pessoa \n");
 printf("  2ª   | Esxibir resultados e sair \n");
 printf("Resposta do usuário: ");
 scanf("%s",&continua);
 continua = toupper(continua);
 printf("\n");
 
 
 
// Condicional Switch Case 03.

  switch (continua){
  	
  		case '1':
  			
  		 printf("Digite seu nome: ");
  		 scanf("%s",&pessoa);

		 printf("Digite sua idade: ");
 		 scanf("%i",&idade);
 
 	   	 printf("Informe seu sexo usando [M / F ]");
	     scanf("%s",&sexo);
 
 		 printf("Informe seu salário: ");
 		 scanf("%f",&salario);
		 contador++;
		 system("cls || clear");
		break;
		
		case '2': 
		
		if (idade > maiorIdade){
			maiorIdade = idade;
		}
		if (idade < menorIdade){
			menorIdade = idade;
		}
		  
		 if (salario > 5.000 ){
		 	salario_5000 = salario;
		 } 	
       
	    soma = salario += salario;
	    media = salario / contador;
	    
			 	
  } 
return 0;	
}
