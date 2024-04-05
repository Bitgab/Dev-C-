# include <stdio.h>
# include <stdlib.h>
# include <locale.h>
# include <string.h>
# include <ctype.h>
# include <limits.h>


int main (){
setlocale(LC_ALL,"");

// Solicitando dados ao usuário 01.

int idade, contador = 1 , maiorIdade = INT_MIN, menorIdade = INT_MAX;
char sexo, continua;
float salario, quantidade, salario_5000, soma, media;
	
	
// Solicitando dados ao usuário 02.



	

do {
 

 printf("Digite sua idade: ");
 scanf("%i",&idade);
// obs:  
 	if (idade > maiorIdade){
			maiorIdade = idade;
		 }
		if (idade < menorIdade){
			menorIdade = idade;
		 }
 
 printf("Informe seu sexo usando [M / F ]\n");
 printf("sexo: ");
 scanf("%s",&sexo);
 sexo = toupper(sexo);
 printf("Informe seu salário: ");
 scanf("%f",&salario);
 system("cls || clear");
 
 	
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
 system("cls || clear");
 


// Cálculo.

   	soma += salario;	    
 	media = soma / contador;
 	if (sexo == 'F' && salario >= 5000){
 		salario_5000++; 
		}
		
		
		 
		 
// Condicional Switch Case 03.

  switch (continua){
  	
  		case '1':	
  		 contador++;
		break;
		
		case '2': 
		
				 
		printf("Média de salário: %.2f \n", media);
		printf("Maior idade: %i \n", maiorIdade);
		printf("Menor idade: %i \n", menorIdade);
		printf("Quantidade de mulheres com salário a partir de R$ 5.000,00: %.1f", salario_5000); 	
       	break;
       	
       	default: 
       		printf("Opção inválida!");
       		system("cls || clear");
       	
 		}      	
       	
}while (continua == '1');
	     
return 0;	

}
