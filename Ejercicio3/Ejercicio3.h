#ifndef EJERCICIO3_H
#define EJERCICIO3_H

namespace geometria {

    class circulo {
    private:
        double radio;
    public:
        circulo(double r) : radio(r) {}
        double calcularArea() const;
        double calcularPerimetro() const;

    };
} // geometria

#endif //EJERCICIO3_H
