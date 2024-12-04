#include <iostream>
#include "Ejercicio1/Ejercicio1.h"
#include "Ejercicio2/geometria.h"
#include "Ejercicio3/Ejercicio3.h"


int main() {
    /*Parte de ejercicio1 */
    std::cout << "Parte Ejercicio 1" << std::endl;
    std::cout << "Suma: " << Matematicas::suma(5, 3) << std::endl;
    std::cout << "Resta: " << Matematicas::resta(5, 3) << std::endl;
    /*Parte de ejercicio2*/
    std::cout << "Parte Ejercicio 2" << std::endl;
    std::cout << "Area del triangulo: " << Geometria::calcularAreaTriangulo(5, 3) << std::endl;
    std::cout << "Area del circulo: " << Geometria::calcularAreaCirculo(3) << std::endl;
    /*Parte ejercicio 3*/
    std::cout << "Parte Ejercicio 3" << std::endl;
    geometria::circulo c(5);
    std::cout << "Area: " << c.calcularArea() << std::endl;
    std::cout << "Perimetro: " << c.calcularPerimetro() << std::endl;

    return 0;
}