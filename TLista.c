#include "TLista.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// fun��o de cria��o, retorna uma lista vazia
Telem* criar_lst(){
	// criar uma lista vazia, representada pelo ponteiro NULL
	return NULL;
}

// insere no in�cio, retona a lista atualizada
Telem* insereInicio_lst(Telem* lst, int val)
{
	//alocando memoria para armazenar o novo elemento
	Telem* novo = (Telem*) malloc(sizeof(Telem));
	//encadeia o elemento na lista existente
	novo->info = val;
	novo->next = lst;
	
	return novo;
}
//fun��o imprime valores dos elementos
void exibe_lst(Telem* lst)
{
	Telem* i;
	
	for(i = lst ;i != NULL ;i = i->info )
	{
		printf("informacao: %d\n", i->info);
	}
}