#include <iostream>
#include "variante/Variant.h"

int main() {
    // Ejemplo de uso de la clase Variant
    Variant simbolo(Variant::TipoVariante::Simbolo, "Hola");
    Variant numero(Variant::TipoVariante::Numero, "123");
    Variant lista(Variant::TipoVariante::Lista);

    lista.lista.push_back(simbolo);
    lista.lista.push_back(numero);

    std::cout << "Representación JSON: " << lista.a_cadena_json() << std::endl;

    return 0;
}