# include <stdio.h>
# include <locale.h>

int  main (){
	setlocale(LC_ALL, "");
	
	int i, numero, soma = 0; // soma tem que ter o = 0 para inicializar sem o lixo exemplo: 0 x 10.
//	.se n�o colocar =0 na soma ela vai com lixo e vai alterar o resultado.
	
	// Solicitando dados para o usu�rio.
	
	for (i = 1; i <= 5; i++){
		printf(" Digite o %i� n�mero: ", i);
		scanf("%i",&numero);
		
		soma = soma + numero;
	}
	
	printf("Soma: %i \n", soma );
	
return 0;	
}
