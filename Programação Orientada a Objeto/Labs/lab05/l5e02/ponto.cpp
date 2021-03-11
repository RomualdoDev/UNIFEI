#include "ponto.h"

ponto& ponto::operator++() {
    ++x;
    ++y;
    return *this;
}

ponto ponto::operator++(int) {
    ponto temp = *this;
    x++;
    y++;
    return temp;
}

ostream& operator<< (ostream& out, const ponto& a) {
    out << "(" << a.x << "," << a.y << ")";
    return out;
}

istream& operator>> (istream& in, ponto& a) {
    in >> a.x >> a.y;
    return in;
}

ponto& ponto::operator-- () {
    --x;
    --y;
    return *this;
}


ponto ponto::operator-- (int) {
    ponto temp = *this;
    x--;
    y--;
    return *this;
}
