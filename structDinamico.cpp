#include <stdio.h>
#include <stdlib.h>

struct cadastro
{
	char nome[50];
	int idade;
};

main()
{
	struct cadastro *vcad = (struct cadastro*) malloc(10*sizeof(struct cadastro));
	int i, tamanho;
	printf("Informe o numero de registros: \n");
  	scanf("%d", &tamanho);
  	
  	
  	
	for (i = 0; i < tamanho; i++)
  	{
  		fflush(stdin);
    	printf("\nDigite o nome para a posicao %d do vetor: ", i+1);
    	gets(vcad[i].nome);
    	printf("\nDigite um valor inteiro: ");
    	scanf("%d", &vcad[i].idade);
  	}
  	for (i = 0; i < tamanho; i++)
  	{
  		printf("\n%s  ",vcad[i].nome);
		printf("%d", vcad[i].idade)	;
	}
    
  	  
  //liberando o espaço de memória alocado
  free(vcad);
	
}
