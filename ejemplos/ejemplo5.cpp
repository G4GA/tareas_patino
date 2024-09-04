// Angel Damian Raul Garcia Guevara
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
// Definición de tokens
enum Token
{
    TOKEN_LETRA_A,
    TOKEN_LETRA_B,
    TOKEN_FINAL,
    TOKEN_DESCONOCIDO
};
int main(int argc, char **argv)
{
    FILE *fichero;
    fichero = fopen("prueba.txt", "rt");
    if (!fichero)
    {
        std::cerr << "No se pudo abrir el archivo." << std::endl;
        return 1;
    }
    int MT[3][2] = {{1, 0}, {-1, 2}, {-1, 3}};
    char simbolo;
    int estado = 0;
    while (estado != 3 && fscanf(fichero, "%c", &simbolo) != EOF)
    {
        std::cout << "La nueva entrada: " << simbolo << std::endl;
        Token token;
        if (simbolo == 'a')
        {
            token = TOKEN_LETRA_A;
        }
        else if (simbolo == 'b')
        {
            token = TOKEN_LETRA_B;
        }
        else if (simbolo == '\n' || simbolo == '\r' || simbolo == EOF)
        {
            token = TOKEN_FINAL;
        }
        else
        {
            token = TOKEN_DESCONOCIDO;
        }
        estado = MT[estado][token];
        std::cout << "Token: " << token << ", Estado: " << estado << std::endl;
    }

    fclose(fichero);
    return 0;
}