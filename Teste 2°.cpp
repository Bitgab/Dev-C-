# include <stdio.h>

int main(){
	// Declaração de variável.
	char nome[200];      // Cadeia
	char sexo;          //  Caracter
	int idade;         //   Inteiro
	float peso;     //    Real
	
	// Solicitando dados ao usuário.
	
	printf("Digite seu nome: ");
	scanf ("%s",&nome);
	
	fflush(stdin); // Limpa o cache de input.
	
	printf("Digite seu sexo - M ou F: ");
	scanf ("%c",&sexo);
	
	printf("Digite sua idade: ");
	scanf ("%i",&idade);
	
	printf("Digite seu peso: ");
	scanf ("%f",&peso);

	
	
	// Exibindo resultados.
	
	printf("\n=== EXIBINDO RESULTADO ===\N");
	printf("Nome: %s \n", nome);      // %s  --> string --> cadeia
	printf("Sexo: %c \n", sexo);     //  %c  --> char   --> cararter
	printf("Idade: %d \n", idade);  //   %i  --> int    --> inteiro
	printf("Peso: %f \n", peso);     //  %f --> foalt   --> real
}
