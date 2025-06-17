#include <stdio.h>

#include <stdlib.h>

define PI 3.14159 // Definimos el valor de PI manualmente

int main() {

float lado, base altura, radio;

float area_cuadrado, area_triangulo, area_circulo

// Cuadrado

printf("Ingrese el lado del cuadrado: ");

scanf("%f", lado):

area_cuadrado = lado * lado;

prinf("Area del cuadrado: %.2f\n\n", area_cuadrado);

// Triángulo

printf("Ingrese la base del triángulo: ");

scanf("%f", base);
printf("Ingrese la altura del triángulo: ");

scanf("%f", &altura);

area_triangulo (base altura)/2;

printf("Área del triángulo: %.2f\n\n", area_triangulo),

// Circulo

printf("Ingrese el radio del circulo: ");

scanf("%f", &radio):

area_circulo = PI* radio radio; // Usamos la

constante PI definida

printf("Área del circulo: %.2f\n\n", area_circulo):

// Finalizar programa

print("¡Cálculos completados!\n");

return 0;

system ("Pause"):

}