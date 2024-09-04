// Angel Damian Raul Garcia Guevara
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    FILE *fichero;
    fichero = fopen("prueba.txt", "rt");
    int MT[3][2] = {{1, 0}, {-1, 2}, {-1, 3}};
    int simbolo;
    int estado = 0;
    while (estado != 3)
    {
        std::cout << "La nueva entrada: ";
        fscanf(fichero, "%c", &simbolo);
        simbolo = simbolo - '0';
        std::cout << "es: " << simbolo << "\n";
        estado = MT[estado][simbolo];
        std::cout << estado << "\n";
    }
    fclose(fichero);
    return 0;
}