#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
    int juego = 0;
    system("cls");

    cout << "**************\n";
    cout << "MENU DE JUEGOS\n";
    cout << "**************\n\n";

    cout << "Seleccione un Juego\n\n 1 - StartShip\n\n 2 - Snake \n\n 3 - Salir \n\n";
    cout << "Ingrese un numero del menu para seleccionar un juego: ";
    cin >> juego;

    switch(juego){
        case 1:
        system("cls");
        starShip();
        break;

        case 2:
        system("cls");
        snake();
        break;

        case 3:
        break;
    }
    return 0;
}
