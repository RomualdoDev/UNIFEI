#ifndef RETANGULO_H
#define RETANGULO_H

class Retangulo{
    private :
        float comp,larg;
    public:

        Retangulo(float = 1, float = 1);
        ~Retangulo(){}

        float area();
        float perimetro();
        void desenha();
        void verifica();
        void set_comp(float);
        void set_larg(float);
        void atribui(float,float);
        void imprime();
};


#endif // RETANGULO_H
