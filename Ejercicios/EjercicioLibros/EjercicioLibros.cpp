#include <iostream>
#include <algorithm>
#include <time.h>

using namespace std;

string libros[31][3];

void cargalibro() {
     libros[0][0] = "Algoritmos"; libros[0][1] = "Algoritmos y Programacion (Guia para docentes)";
     libros[0][2] = "Bill Gates";
	libros[1][0] = "Algoritmos"; libros[1][1] = "Apuntes de Algoritmos y Estructuras de Datos";
    libros[1][2] = "Mark Zuckemberg";
	libros[2][0] = "Algoritmos"; libros[2][1] = "Breves Notas sobre Analisis de Algoritmos";
    libros[2][2] = "Emilio Ramirez";
	libros[3][0] = "Algoritmos"; libros[3][1] = "Fundamentos de Informatica y Programacion";
    libros[3][2] = "Bill Gates";
	libros[4][0] = "Algoritmos"; libros[4][1] = "Temas selectos de estructuras de datos";
    libros[4][2] = "Bill Gates";
	libros[5][0] = "Algoritmos"; libros[5][1] = "Teoria sintactico-gramatical de objetos";
    libros[5][2]= "Mark Zuckemberg";
	libros[6][0] = "Base de Datos"; libros[6][1] = "Apuntes de Base de Datos 1";
    libros[6][2]= "Emilio Ramirez";
	libros[7][0] = "Base de Datos"; libros[7][1] = "Base de Datos (2005)";
    libros[7][2] = "Alfredo Ramos";
	libros[8][0] = "Base de Datos"; libros[8][1] = "Base de Datos (2011)";
    libros[8][2] = "Alfredo Ramos";
	libros[9][0] = "Base de Datos"; libros[9][1] = "Base de Datos Avanzadas (2013)";
    libros[9][2] = "Bill Gates";
	libros[10][0] = "Base de Datos"; libros[10][1] = "Diseno Conceptual de Bases de Datos";
    libros[10][2] = "Marco Lopez";
    libros[11][0] = "Ciencia Computacional"; libros[11][1] = "Breves Notas sobre Automatas y Lenguajes";
	libros[11][2] = "Bill Gates";
    libros[12][0] = "Ciencia Computacional"; libros[12][1] = "Breves Notas sobre Teoria de la Computacion";
    libros[12][2] = "Mark Zuckemberg";
	libros[13][0] = "Metodologias de desarrollo de software"; libros[13][1] = "Compendio de Ingenieria del Software";
	libros[13][2] = "Mark Zuckemberg";
    libros[14][0] = "Metodologias de desarrollo de software"; libros[14][1] = "Diseno agil con TDD";
	libros[14][2] = "Bill Gates";
    libros[15][0] = "Metodologias de desarrollo de software"; libros[15][1] = "Ingenieria de Software: Una Guia para Crear Sistemas de Informacion";
	libros[15][2] = "Emilio Ramirez";
    libros[16][0] = "Metodologias de desarrollo de software"; libros[16][1] = "Scrum & Extreme Programming (para programadores)";
	libros[16][2] = "Bill Gates";
    libros[17][0] = "Metodologias de desarrollo de software"; libros[17][1] = "Scrum y XP desde las trincheras";
    libros[17][2] = "Bill Gates";
    libros[18][0] = "Miscelaneos"; libros[18][1] = "97 cosas que todo programador deberia saber";
	libros[18][2] = "Emilio Ramirez";
    libros[19][0] = "Miscelaneos"; libros[19][1] = "Docker";
	libros[19][2] = "Bill Gates";
    libros[20][0] = "Miscelaneos"; libros[20][1] = "El camino a un mejor programador";
	libros[20][2] = "Marco Lopez";
    libros[21][0] = "Miscelaneos"; libros[21][1] = "Introduccion a Docker";
	libros[21][2] = "Mark Zuckemberg";
    libros[22][0] = "Miscelaneos"; libros[22][1] = "Programacion de videojuegos SDL";
	libros[22][2] = "Mark Zuckemberg";
    libros[23][0] = "PHP"; libros[23][1] = "Manual de estudio introductorio al lenguaje PHP procedural";
	libros[23][2] = "Emilio Ramirez";
    libros[24][0] = "PHP"; libros[24][1] = "PHP y Programacion orientada a objetos";
	libros[24][2] = "Mark Zuckemberg";
    libros[25][0] = "PHP"; libros[25][1] = "POO y MVC en PHP";
	libros[25][2] = "Emilio Ramirez";
    libros[26][0] = "PHP"; libros[26][1] = "Silex, el manual oficial";
	libros[26][2] = "Marco Lopez";
    libros[27][0] = "PHP"; libros[27][1] = "Symfony 1.4, la guia definitiva";
	libros[27][2] = "Marco Lopez";
    libros[28][0] = "PHP"; libros[28][1] = "Symfony 2.4, el libro oficial";
	libros[28][2] = "Emilio Ramirez";
    libros[29][0] = "Python"; libros[29][1] = "Aprenda a pensar como un programador (con Python)";
	libros[29][2] = "Marco Lopez";
    libros[30][0] = "Python"; libros[30][1] = "Doma de Serpientes para Ninos: Aprendiendo a Programar con Python";
	libros[30][2] = "Marco Lopez";
}

int main(int argc, char const *argv[])
{
    cargalibro();

    srand (time(NULL));

    bool salir = false;

    while (salir == false)
    {
        string buscar = "";
        system("cls");
        cout << "Ingrese el nombre del autor que desea buscar: ";
        cin >> buscar;

        for (int i = 0; i < 11; i++)
        {
            string libro = libros[i][2];
            string libroenminuscula = libro;
            transform(libroenminuscula.begin(), libroenminuscula.end(), libroenminuscula.begin(), ::tolower);
            transform(buscar.begin(), buscar.end(), buscar.begin(), ::tolower);

            if (libroenminuscula.find(buscar) != string::npos) {
                cout << "Libro encontrado: " << libros[i][1] << endl;
                cout << "Tambien te sugerimos estos libros: " << endl;

                int sugerencia1 = rand() % 31 + 1;
                int sugerencia2 = rand() % 31 + 1;
                int sugerencia3 = rand() % 31 + 1;

            cout << " Sugerencia 1: " << libros[sugerencia1][1] << endl;
            cout << " Sugerencia 2: " << libros[sugerencia2][1] << endl;
            cout << " Sugerencia 3: " << libros[sugerencia3][1] << endl;

            system("Pause");
            salir = true;
            break;
        }
    }

    if (salir == false) {
        char continuar = 'n';

        while(true) {
            system("cls");
            cout << "No se encontro su libro\n Desea continuar? S= si / N= no :";
            cin >> continuar;

            if(continuar == 's' || continuar == 'S') {
            break;
            } else if (continuar == 'n' || continuar == 'N' ) {
            salir = true;
            break;
                 }
             }
        }
    }

    return 0;
}