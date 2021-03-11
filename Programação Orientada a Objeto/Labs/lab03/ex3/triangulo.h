#ifndef TRIANGULO_H
#define TRIANGULO_H

class Triangulo{
    private:
        int lado1, lado2, lado3;
    public:
        Triangulo();
        Triangulo(int, int, int);
        ~Triangulo(){}
    void set_lados(int, int, int);
    void imprime_triangulo();
    void conta();
};

#endif // TRIANGULO_H
