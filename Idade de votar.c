# include <stdio.h>
# include <stdlib.h>
# include <locale.h>


 int main(){
 	setlocale(LC_ALL, "");
 	
 	 // Declara��o de vari�vel.
 	 
 	 int idade;
	 char nome [200];
	 
	  
	 // Solicitando dados ao usu�rio.
	 
	 printf("Informe seu nome: ");
	 scanf("%s",&nome);
	 
	 printf("Informe sua idade: ");
	 scanf("%i",&idade);
	 
	 
	 // Limpar.
	 
	  system("cls || clear"); 
	  
	  
	 //Exibindo dados.
	 
	 printf("\nNome: %s\n", nome);
 	  printf("Idade: %i anos\n",idade);
	 
	
	 // Condicional. 
	 
	 if (idade >= 18 && idade <= 65){
	 	printf("Cidad�o � obrigado a votar!");
	 } else{
	 	printf("Cidad�o n�o � obrigado a votar!");
	 }
	 
 	  
 	return 0;
 }
