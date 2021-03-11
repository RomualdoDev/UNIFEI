#ifndef POLIGONO_H_INCLUDED
#define POLIGONO_H_INCLUDED

class Poligono{
    private:
        int lados;
        float comprimento;

    public:
        Poligono(int = 3, float = 1);
        ~Poligono(){}

        float area();
        float perimetro();
        void nome();
        void set_lado(int);
        void set_comp(float);
};

#endif // POLIGONO_H_INCLUDED
