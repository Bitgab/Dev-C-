# include <stdio.h>
# include <locale.h>

int  main (){
	setlocale(LC_ALL, "");
	
	int i, numero, soma = 0; // soma tem que ter o = 0 para inicializar sem o lixo exemplo: 0 x 10.
//	.se não colocar =0 na soma ela vai com lixo e vai alterar o resultado.
	
	// Solicitando dados para o usuário.
	
	for (i = 1; i <= 5; i++){
		printf(" Digite o %i° número: ", i);
		scanf("%i",&numero);
		
		soma = soma + numero;
	}
	
	printf("Soma: %i \n", soma );
	
return 0;	
}
