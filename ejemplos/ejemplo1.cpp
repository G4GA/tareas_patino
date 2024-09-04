// Angel Damian Raul Garcia Guevara
#include <iostream>

int main(int argc, char **argv)
{
    int MT[3][2] = {{1, 0}, {-1, 2}, {-1, 3}};
    int simbolo;
    int estado = 0;
    while (estado != 3)
    {
        std::cout << "dame la nueva entrada: ";
        std::cin >> simbolo;
        estado = MT[estado][simbolo];
        std::cout << estado << "\n";
    }
    return 0;
}