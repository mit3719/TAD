#include "TLista.h"

int main()
{
	Telem* lst;// declara um lista n�o inicializada
	
	lst = criar_lst();//cria e inicializa a lista como vazia
	
	lst = insereInicio_lst(lst, 23);
	lst = insereInicio_lst(lst, 45);
	
	void exibe_lst();

	/**
	 * deve-se atualizar a vari�vel que representa a lista
	 * a cada inser��o de um novo elemento
	 */
	
	return 0;
}