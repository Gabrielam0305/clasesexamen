
#include <iostream>
#include "Rectangulo.h"
#include <vector>
using namespace std;

int main()
{
vector<Rectangulo*> rectangulos;

int opcion=0;
float l, a;

do {
    int contador = Rectangulo::obtenerContador();
    cout << "Se han creado " << contador << " rectángulos." <<endl;
    // Mostrar el menú
    cout << "\n--- MENU ---" << endl;
    cout << "1. Crear Rectangulo" << endl;
    cout << "2. Mostrar Rectangulos" << endl;
    cout << "3. Actualizar Rectangulo" << endl;
    cout << "4. Eliminar Rectangulo" << endl;
    cout << "5. Salir" << endl;
    cout << "Ingrese una opcion: ";
    cin >> opcion;

    switch (opcion) {
    case 1:
        // Crear un nuevo rectángulo
        cout << "Ingrese el largo: ";
        cin >> l;
        cout << "Ingrese el ancho: ";
        cin >> a;
        rectangulos.push_back(new Rectangulo(l, a));
        cout << "Rectangulo creado exitosamente." << endl;
        break;
    case 2:
        // Mostrar todos los rectángulos
        cout << "\n--- Rectangulos ---" << endl;
        for (auto rectangulo : rectangulos) {
            rectangulo->mostrarRectangulo();
            cout << endl;
        }
        break;
    case 3:
        // Actualizar un rectángulo existente
        if (!rectangulos.empty()) {
            int index;
            cout << "Ingrese el indice del rectangulo a actualizar (0-" << rectangulos.size() - 1 << "): ";
            cin >> index;

            if (index >= 0 && index < rectangulos.size()) {
                cout << "Ingrese el nuevo largo: ";
                cin >> l;
                cout << "Ingrese el nuevo ancho: ";
                cin >> a;
                rectangulos[index]->actualizarRectangulo(l, a);
                cout << "Rectangulo actualizado exitosamente." << endl;
            }
            else {
                cout << "Indice invalido." << endl;
            }
        }
        else {
            cout << "No hay rectangulos creados." << endl;
        }
        break;
    case 4:
        // Eliminar un rectángulo existente
        if (!rectangulos.empty()) {
            int index;
            cout << "Ingrese el indice del rectangulo a eliminar (0-" << rectangulos.size() - 1 << "): ";
            cin >> index;

            if (index >= 0 && index < rectangulos.size()) {
                rectangulos.erase(rectangulos.begin() + index);
                cout << "Rectangulo eliminado exitosamente." << endl;
            }
            else {cout << "Indice invalido." << endl;
            }
        }
        break;
    default:
        cout << "Salida" << endl;
        break;
    }
} while (opcion != 5);
for (auto rectangulo : rectangulos) {
    delete rectangulo;
}
rectangulos.clear();
return 0;
}
//Rectangulo rectangulo1(5, 3);
//Rectangulo rectangulo2(7.5, 4.2);
//float area1 = rectangulo1.area();
//float perimetro1 = rectangulo1.perimetro();

// Calcular el área y perímetro del segundo rectángulo
//float area2 = rectangulo2.area();
//float perimetro2 = rectangulo2.perimetro();

// Mostrar los resultados
///*cout << "Rectangulo 1:" << endl;
//cout << "Area: " << area1 << endl;
//cout << "Perimetro: " << perimetro1 << endl;

//cout << "Rectangulo 2:" << endl;
//cout << "Area: " << area2 << endl;
//cout << "Perimetro: " << perimetro2 << endl;*/

//int sumarArreglo(int arreglo[], int tamaño) {
//    if (tamaño == 0) {
//        return 0;
//    }
//    else {
//        return arreglo[0] + sumarArreglo(arreglo + 1, tamaño - 1);
//    }
//}
