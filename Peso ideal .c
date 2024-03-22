# include <stdio.h>
# include <locale.h>

int main (){
	
	setlocale(LC_ALL,"");
	
	// Declaração de variável.
	
	float pesoIdeal, altura;
	char sexo;
	
	// Solicitando dados.
	
	printf("\nInforme seu sexo usando 'M' ou 'F' ");
	printf("Informe seu sexo: ");
	scanf("%s",&sexo);
	printf("Informe sua altura: ");
	scanf("%f",&altura);
	
	// Switch Case.
	
	sexo = toupper(sexo); // Converte em Maiúsculo.
	switch (sexo){ 
	
	
	case 'M' : 
	pesoIdeal = (72.7 * altura) - 58;
	break;
	
	case 'F':
	pesoIdeal = (62.1 * altura)	- 44.7;
	break;

    default: 
    printf("Opção inválida!");
}

  // Exibindo resultado.
  
    printf("Seu peso ideal é:   %.2f" " kgs",pesoIdeal);

	return 0;
}
