# include <stdio.h>
# include <locale.h>
# include <string.h>

int main (){
setlocale(LC_ALL,"");

// Declaração de variáveis.

float media, soma = 0, notas;
int i;
char resultado[200], continuar;

do {

// Solicitando dados ao usuário.

for (i = 1; i <= 3; i++){
	do{ 
	printf("Informe sua nota da %iª: ",i);
	scanf("%f",&notas);
	} while (notas < 0 || notas > 10);
	
// Calculo 1º.

 soma += notas;	
}

// Calculo 2ª.

media = soma / 3;

// Condicional If e Else.

if (media >= 7){
  strcpy (resultado,"Aprovado!");	
} else if (media >= 5 || media <= 6.9){
  strcpy (resultado,"Recuperação!");	
} else{
strcpy (resultado,"Reprovado!");	
}


printf("\n=== EXIBINDO RESULTADO ===\n");
printf("Média: %.1f\n",media);
printf("Situação do aluno: %s\n",resultado);


// Metodo paracontinuar com a operação.

printf("\nDeseja continuar?");
printf("\n[s ou n]: ");
scanf("%s",&continuar);
}while(continuar == 's');

return 0;	
}
