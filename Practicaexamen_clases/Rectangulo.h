#include<iostream>

#ifndef RECTANGULO_H
#define RECTANGULO_H

class Rectangulo
{
private:
	double largo, ancho;
	static int contador;
public:
	Rectangulo();
	Rectangulo(double, double);
	~Rectangulo();
	double get_largo();
	double get_ancho();
	void set_largo(double);
	void set_ancho(double);
	double area();
	double perimetro();
	void mostrarRectangulo();
	void actualizarRectangulo(float, float);
	static int obtenerContador();
};

#endif