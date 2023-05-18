#include "Rectangulo.h"
using namespace std;
int Rectangulo::contador = 0;

Rectangulo::Rectangulo() {

}
Rectangulo::Rectangulo(double largo, double ancho) {
	this->largo = largo;
	this->ancho = ancho;
	contador++;
}
//Destructor
Rectangulo::~Rectangulo() {
}
double Rectangulo::get_ancho() {
	return this->ancho;
}

double Rectangulo::get_largo() {
	return this->largo;
}
void Rectangulo::set_ancho(double newancho) {
	this->ancho=newancho;
}
void Rectangulo::set_largo(double newlargo) {
	this->largo = newlargo;
}

double Rectangulo::area() {
	return this->largo * this->ancho;
}
double Rectangulo::perimetro() {
	return (2* this->largo)+(2* this->ancho);
}
void Rectangulo::mostrarRectangulo() {
	cout << "Largo: " << largo << endl;
	cout << "Ancho: " << ancho << endl;
}

void Rectangulo::actualizarRectangulo(float l, float a) {
	largo = l;
	ancho = a;
}
int Rectangulo::obtenerContador() {
	return contador; // Obtener el valor del contador
}