# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

    // Declaração de variáveis 

 float main(){
 	   setlocale(LC_ALL, "portuguese");
       setlocale(LC_ALL, "");
 	
 	   char nome[100];
 	   int idade;
 	   float primeiraNota, segundaNota, terceiraNota, quartaNota;
 	   float soma, media;
  	 
	 // Solicitando dados ao usuário.
	 
	 printf ("Digite seu nome: ");
	 scanf  ("%s",&nome);
	 
	 printf ("Informe sua idade: ");
	 scanf  ("%i",&idade);
	 
	 printf ("Digite sua nota da I unidade: ");
	 scanf  ("%f",&primeiraNota); 
	 
	 printf ("Digite sua nota da II unidade: ");
	 scanf  ("%f",&segundaNota);
	 
	 printf ("Digite sua nota da III unidade: ");
	 scanf  ("%f",&terceiraNota);
	 
	 printf ("Digite sua nota da IV unidade: ");
	 scanf  ("%f",&quartaNota);
	 
	 
	 //Calculo.
	 
	 soma = primeiraNota + segundaNota + terceiraNota + quartaNota;
	 media = soma / 4;
	 
	 system ("cls || clear"); // Limpa o terminal no Windows e Linux.
	 
	 
	 //  Exibindo Resultado.
	 
	 printf("Nome do aluno: %s", nome);
	 printf("Idade: %i \n", idade);
	 printf("Nota da I unidade: %.1f \n", primeiraNota);
	 printf("Nota da II unidade: %.1f \n", segundaNota);
	 printf("Nota da III unidade: %.1f \n", terceiraNota);
	 printf("Nota da Iv unidade: %.1f \n", quartaNota);
	 printf("Média: %.1f \n", media);
 	return 0;
 }
