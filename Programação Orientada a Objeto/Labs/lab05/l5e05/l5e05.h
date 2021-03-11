#ifndef LIVRO_H
#define LIVRO_H

class Livro
{
	public:
		Livro();
		~Livro();
		void emprestimo(int);//recebe 1 para emprestar o livro e 0 para devolução
		void reserva();//chamar esta função para impedir que o livro seja emprestado

	private:
		char autor1[50], autor2[50], 
		titulo[100],subtitulo[100],
		editora[15], genero[10];
		int volume, edicao,
		num_tombo, faixa_etaria, 
		estado_emprestimo;
};

#endif