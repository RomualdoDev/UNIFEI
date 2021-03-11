#include "l5e05.h"
#include <iostream>

Livro::Livro(){
	num_tombo = 0;
	estado_emprestimo = 0;
}

void Livro::emprestimo(int est){
	estado_emprestimo = est;
}

void Livro::reserva(){
	estado_emprestimo = 1;
}