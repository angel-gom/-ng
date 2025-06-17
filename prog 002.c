#include <stdio.h>

int main() {
 int x;
printf("Ingrese el tamaño del arreglo: ");
scanf("%d", &x);

    
int arreglo[x];
for (int i = 0; i < x; i++) {
printf("Ingrese el elemento %d: ", i + 1);
scanf("%d", &arreglo[i]);
    }

printf("Los valores del arreglo son:\n");
for (int i = 0; i < x; i++) {
printf("%d ", arreglo[i]);
    }
    
printf("\n");
    
return 0;
}