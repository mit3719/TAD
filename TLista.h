#ifndef __TLista__h
	#define __TLista__h
	
	//O TLista representa o descritor da lista, 
	//contendo a quantidade de elementos e um 
	//ponteiro para o início da lista
	typedef struct lista Tlista;
	
	//O TElem representa um elemento da lista,
	//contendo a informação e um ponteiro para o próximo.
	typedef struct elem  Telem;
	
	
	// a elem é uma estrutura auto-referenciada, pois o campo 
	// next é um ponteiro para uma próxima estrutura do mesmo tipo
	
	// uma lista encadeada é representada pelo ponteiro para
	// o seu primeiro elemento, do tipo Telem*
	struct elem{
		int info;// a informação armazenada, nesse caso um inteiro
		Telem* next;//um ponteiro para o próximo elemento da lista
	};
	
	struct lista{
		Tlista* start;
		Tlista* end;
		int tam;	
	};
	
	
	Telem* criar_lst();
	Telem* insereInicio_lst(Telem* lst, int val);
	void   exibe_lst(Telem* lst);
	
#endif