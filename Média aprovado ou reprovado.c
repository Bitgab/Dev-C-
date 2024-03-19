# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

   int main(){
   	
   setlocale(LC_ALL,"portuguese");
   setlocale(LC_ALL,"");
   
   
     // Declaração de variável.
     
     char nome[100];
     int idade;
     float notaUm, notaDois, notaTres;
     float media;
     
     
     // Solicitação de dados ao usuário.
     
     printf("Digite seu nome: ");
     scanf ("%s",&nome);
     
     printf("Digite sua idade: ");
     scanf ("%i",&idade);
     
     printf("Informe a nota da I unidade: ");
     scanf ("%f",&notaUm);
     
     printf("Informe a nota da II unidade: ");
     scanf ("%f",&notaDois);
     
     printf("Informe a nota da III unidade:  ");
     scanf ("%f",&notaTres);
     
     
      // Calculo da média.
      
     media = (notaUm + notaDois + notaTres) / 3;


      // Exibindo resultado

      printf("\n=== EXIBINDO RESULTADO ===\n")
      printf("Nome do aluno: %s
	      
     
     
   	  // Condicional if e else.
   	  
   	  if (media >= 7.0){ 
   	  	printf("Aluno Aprovado!\n");
		 } else{ 
		 	printf("Aluno reprovado!");
		 }
		 
   	return 0;
   }
