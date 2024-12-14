#ifndef VARIANT_H
#define VARIANT_H

#include <string>
#include <vector>

class Variant {
public:
    enum class TipoVariante { Simbolo, Numero, Lista };

    // Constructor
    explicit Variant(TipoVariante tipo, std::string valor = "")
        : tipo(tipo), valor(std::move(valor)) {}

    // Método para obtener la representación en formato JSON
    [[nodiscard]] std::string a_cadena_json() const {
        switch (tipo) {
        case TipoVariante::Simbolo:
            return "\"" + valor + "\"";  // Representación como cadena
        case TipoVariante::Numero:
            return valor;  // El valor numérico se muestra tal cual
        case TipoVariante::Lista:
            return "[ ]";  // Aún no implementado para listas, pero se puede extender
        default:
            return "";
        }
    }

    // Miembros de la clase
    TipoVariante tipo;
    std::string valor;
    std::vector<Variant> lista;  // Solo necesario para el tipo Lista
};

#endif // VARIANT_H