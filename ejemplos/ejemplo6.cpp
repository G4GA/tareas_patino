// Angel Damian Raul Garcia Guevara
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <iostream>

enum Token
{
    TOKEN_IDENTIFICADOR,
    TOKEN_ASIGNACION,
    TOKEN_ENTERO,
    TOKEN_SUMA,
    TOKEN_FIN
};
// Función para obtener el siguiente token
enum Token obtenerToken(char *lexema)
{
    int c = getchar();
    if (c == 'a')
    {
        strcpy(lexema, "a");
        return TOKEN_IDENTIFICADOR;
    }
    else if (c == '=')
    {
        strcpy(lexema, "=");
        return TOKEN_ASIGNACION;
    }
    else if (isdigit(c))
    {
        ungetc(c, stdin);
        scanf("%s", lexema);
        return TOKEN_ENTERO;
    }
    else if (c == '+')
    {
        strcpy(lexema, "+");
        return TOKEN_SUMA;
    }
    else if (c == '\n' || c == EOF)
    {
        return TOKEN_FIN;
    }
    else
    {
        strcpy(lexema, "DESCONOCIDO");
        return TOKEN_FIN;
    }
}
int main()
{
    char lexema[100];
    enum Token token;
    std::cout << "escribe: ";
    do
    {
        token = obtenerToken(lexema);
        printf("Token: %d, Lexema: %s\n", token, lexema);
    } while (token != TOKEN_FIN);

    return 0;
}