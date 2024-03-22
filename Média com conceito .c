# include <stdio.h>
# include <string.h>
#include <locale.h>

 int main(){
 setlocale(LC_ALL,""); 	
 	
   char nome[200], resultado [200];
   char conceito;
   float notaUm, notaDois, media;
   
   
  // SOLICITANDO DADOS AO USUÁRIO.
    
    printf("Digite seu nome: ");
    scanf("%s",&nome);
   
   	printf("Informe sua nota da I unidade: ");
   	scanf("%f",&notaUm);
   	
   	printf("Informe sua nota da II unidade: ");
   	scanf("%f",&notaDois);
   	
   	
  // CALCULO.
  
    media = (notaUm + notaDois) / (float) 2;
   	
   	
 // IF & ELSE.
 
     if (media >= 9){   
 	conceito = 'A';
 } else if (media >= 7.5){
 	conceito = 'B';
 }else if (media >= 6){
 	conceito = 'C';
 }else if (media >= 4){
 	conceito = 'D';
 } else {
 	conceito= 'E';
 }
 
 if (conceito == 'A' || conceito == 'B' || conceito == 'C'){ 
 
 	strcpy(resultado, "Aprovado");
 } else {
 strcpy(resultado, "Reprovado");
 }
  
		
	
	system ("cls || clear");
	
	// EXIBINDO RESULTADO.
	
	printf("Nome: %s \n",nome);
	printf("Nota da I unidade: %.1f \n",notaUm);
	printf("Nota da II unidade: %.1f \n",notaDois);
	printf("Média: %.1f \n", media);
	printf("Conteito: %c \n",conceito);
	printf("Resultado: %s \n",resultado);
    
	getchar(); //Pausa antes de terminar a execução de código.
 	return 0;
 }
 
 
  
