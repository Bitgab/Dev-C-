# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

   
  int main(){
 	   setlocale(LC_ALL, "portuguese");
       setlocale(LC_ALL, "");
       
     // Declarando as variáveis.
     
       char nome[100];
       int idade;
       float notaUm, notaDois, notaTres;
       float media;
       
     // Solicitando dados ao usuário.
	 
	  printf("Digite seu nome: ");
	  scanf ("%s",&nome); 
	  
	  printf("Informe sua idade: ");
	  scanf("%f",&idade);
	  
	  printf("Informe sua nota da I unidade: ");
	  scanf("%f",&notaUm);
	  
	  printf("Informe sua nota da II unidade: ");
	  scanf("%f",&notaDois);
	  
	  printf("Informe sua nota da III unidade: ");
	  scanf("%f",&notaTres);
	  
	  
	  // Calculo.
	  
	  
	  media = (notaUm + notaDois + notaTres) / 3;
	  
	  if (media  == 7){
	  	printf("Aluno aprovado!");
	  } else {
	  	printf("Aluno reprovado!");
	  }
	  
      return 0;
  }
