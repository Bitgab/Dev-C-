# include <stdio.h>
# include <locale.h>
# include <string.h>

int main (){
setlocale(LC_ALL,"");

// Declara��o de vari�veis.

float media, soma = 0, notas;
int i;
char resultado[200], continuar;

do {

// Solicitando dados ao usu�rio.

for (i = 1; i <= 3; i++){
	do{ 
	printf("Informe sua nota da %i�: ",i);
	scanf("%f",&notas);
	} while (notas < 0 || notas > 10);
	
// Calculo 1�.

 soma += notas;	
}

// Calculo 2�.

media = soma / 3;

// Condicional If e Else.

if (media >= 7){
  strcpy (resultado,"Aprovado!");	
} else if (media >= 5 || media <= 6.9){
  strcpy (resultado,"Recupera��o!");	
} else{
strcpy (resultado,"Reprovado!");	
}


printf("\n=== EXIBINDO RESULTADO ===\n");
printf("M�dia: %.1f\n",media);
printf("Situa��o do aluno: %s\n",resultado);


// Metodo paracontinuar com a opera��o.

printf("\nDeseja continuar?");
printf("\n[s ou n]: ");
scanf("%s",&continuar);
}while(continuar == 's');

return 0;	
}
