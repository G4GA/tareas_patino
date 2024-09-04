// Angel Damian Raul Garcia Guevara
#include <iostream>
#include <fstream>
#include <vector>
int main()
{
    std::ifstream fichero("prueba.txt");
    if (!fichero.is_open())
    {
        std::cerr << "No se pudo abrir el archivo." << std::endl;
        return 1;
    }

    int MT[3][2] = {{1, 0}, {-1, 2}, {-1, 3}};
    char simbolo;
    int estado = 0;

    while (estado != 3 && fichero.get(simbolo))
    {
        std::cout << "La nueva entrada: " << simbolo << std::endl;
        int simboloIndex = simbolo - 'a';
        estado = MT[estado][simboloIndex];
        std::cout << estado << std::endl;
    }

    fichero.close();
    return 0;
}