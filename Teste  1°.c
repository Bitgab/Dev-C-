 #include <stdio.h>
 
 int main(){
 	char nome[200] = "Marta";
 	char sexo  =  'F';
 	int idade  =  20;
 	float peso =  58.400;
 	
 	// Exibindo resultados.
 	printf("\n=== EXIBINDO RESULTADO ===\n");
 	printf ("Nome: %s  \n", nome);             // %s --> string  --> cadeia
 	printf ("Sexo: %c  \n", sexo);            // %c  --> char    --> cararter
 	printf ("Idade: %i \n", idade);          //  %i  --> int     --> inteiro
 	printf ("Peso: %f  \n", peso);          //   %f  --> foalt   --> real
 	
 	return 0;
 }
