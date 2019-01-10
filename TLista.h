#ifndef __TLista__h
	#define __TLista__h
	
	//O TLista representa o descritor da lista, 
	//contendo a quantidade de elementos e um 
	//ponteiro para o in�cio da lista
	typedef struct lista Tlista;
	
	//O TElem representa um elemento da lista,
	//contendo a informa��o e um ponteiro para o pr�ximo.
	typedef struct elem  Telem;
	
	
	// a elem � uma estrutura auto-referenciada, pois o campo 
	// next � um ponteiro para uma pr�xima estrutura do mesmo tipo
	
	// uma lista encadeada � representada pelo ponteiro para
	// o seu primeiro elemento, do tipo Telem*
	struct elem{
		int info;// a informa��o armazenada, nesse caso um inteiro
		Telem* next;//um ponteiro para o pr�ximo elemento da lista
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