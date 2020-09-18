#include <iostream>
#include <string>

using namespace std;

    string productos[5][3] = {
        {"001", "Mouse Gamer", "4"},
        {"002", "Monitor Samsung", "10"},
        {"003", "Teclado RGB", "3"},
        {"004", "Headsets", "4"},
        {"005", "Xiaomi Redmi Note 9 Pro", "6"},
    } ;

    void listarProductos() {
        system ("cls");
        cout << endl;
        cout << "Listado de Productos";
        cout << "*********************";
        cout << "Codigo, Descripcion y Existencia" << endl;

        for (int i = 0; i < 5; i++ )
        {
            cout << productos[i][0] << " | " << productos [i][1] << " | " << productos [i][2] << endl;
        }
    }
    
    void movimientoInventarios(string codigo, int cantidad, string tipoMovimiento) {
        for (int i = 0; i < 5; i++)
        {        
            if (productos [i][0] == codigo) {
                if(tipoMovimiento == "+") {
                productos[i][2] = to_string(stoi(productos[i][2]) + cantidad);
            } else {
                productos[i][2] = to_string(stoi(productos[i][2]) - cantidad);
            }
        }
    }
}

void ingresoInventario(){
    string codigo = "";
    int cantidad = 0;

    system ("cls");
    cout << endl;
    cout << "Ingreso de Productos al Inventario" << endl;
    cout << "**********************************" << endl;
    cout << "Ingrese el codigo del producto: ";
    cin >> codigo;
    cout << endl;
    cout << "Ingrese la cantidad del producto: ";
    cin >> cantidad;
    cout << endl;

    movimientoInventarios(codigo, cantidad, "+");
}

void salidaInventario(){
    string codigo = "";
    int cantidad = 0;

    system("cls");
    cout << endl;
    cout << "Salida de productos del inventario" << endl;
    cout << "**************************************" << endl;
    cout << "Ingrese el codigo del producto: ";
    cin >> codigo;
    cout << endl;
    cout << "Ingrese la cantidad de retiro: ";
    cin >> cantidad;
    cout << endl;

    movimientoInventarios(codigo, cantidad, "-");
}

void ajustePositivoInventario(){
    string codigo = "";
    int cantidad = 0;

    system ("cls");
    cout << endl;
    cout << "Ajuste Positivo al Inventario" << endl;
    cout << "**********************************" << endl;
    cout << "Ingrese el codigo del producto: ";
    cin >> codigo;
    cout << endl;
    cout << "Ingrese la cantidad del producto: ";
    cin >> cantidad;
    cout << endl;

    movimientoInventarios(codigo, cantidad, "+");
}

void ajusteNegativoInventario(){
    string codigo = "";
    int cantidad = 0;

    system("cls");
    cout << endl;
    cout << "Ajuste negativo del inventario" << endl;
    cout << "**************************************" << endl;
    cout << "Ingrese el codigo del producto: ";
    cin >> codigo;
    cout << endl;
    cout << "Ingrese la cantidad de retiro: ";
    cin >> cantidad;
    cout << endl;

    movimientoInventarios(codigo, cantidad, "-");
}

int main(int argc, char const *argv[])
{
    int opcion=0;

    while(true){
        system("cls");

        cout << "Sistema de Inventario";
        cout << endl;
        cout << "*********************";
        cout << endl;
        cout << endl;
        cout << "1 - Productos" << endl;
        cout << "2 - Ingreso de Inventario" << endl;
        cout << "3 - Salida de Inventario" << endl;
        cout << "4 - Ajuste Positivo de Inventario" << endl;
        cout << "5 - Ajuste Negativo de Inventario" << endl;
        cout << "0 - Salir" << endl;
        cout << "Ingrese una opcion del menu: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
        listarProductos();
            break;
        case 2:
        ingresoInventario();
            break;
        case 3:
        salidaInventario();
            break;
        case 4:
        ajustePositivoInventario();
            break;
        case 5:
        ajusteNegativoInventario();
            break;        

        default:
            break;
        }

        system("pause");
        cout << endl;

        if (opcion == 0) {
            break;
        }
    }

    return 0;
}
