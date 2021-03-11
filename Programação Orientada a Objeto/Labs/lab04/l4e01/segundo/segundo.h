#ifndef SEGUNDO_H_INCLUDED
#define SEGUNDO_H_INCLUDED

class Segundo{
    private:
        int xq,x,c = 0;
        float delta;
    public:
        Segundo();
        Segundo(int, int , int);
        ~Segundo(){}
        void set_valores(int, int , int);
        void calcula_delta();
};

#endif // SEGUNDO_H_INCLUDED
