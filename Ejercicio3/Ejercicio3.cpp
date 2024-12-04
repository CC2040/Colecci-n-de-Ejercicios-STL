#include "Ejercicio3.h"


namespace geometria {

    double circulo::calcularArea() const{

        return 3.14 * radio * radio;
    }
    double circulo::calcularPerimetro() const {
        return 2 * 3.14 * radio;
    }
} // geometria