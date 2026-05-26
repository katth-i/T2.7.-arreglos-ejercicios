#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int MAX = 100;


void registrar(string nombres[], float notas[], int &n) {
    cout << "\n¿Cuantos estudiantes desea registrar? ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        cout << "\n--- Estudiante " << i + 1 << " ---\n";
        cout << "Nombre: ";
        getline(cin, nombres[i]);

        do {
            cout << "Nota (0 - 10): ";
            cin >> notas[i];
            if (notas[i] < 0 || notas[i] > 10)
                cout << "  [!] Nota invalida. Ingrese entre 0 y 10.\n";
        } while (notas[i] < 0 || notas[i] > 10);
        cin.ignore();
    }
    cout << "\n  [OK] " << n << " estudiantes registrados correctamente.\n";
}


void reporte(string nombres[], float notas[], int n) {
    float suma = 0;
    int aprobados = 0, reprobados = 0;

    for (int i = 0; i < n; i++) {
        suma += notas[i];
        if (notas[i] >= 7)
            aprobados++;
        else
            reprobados++;
    }

    float promedio = suma / n;

    cout << "\n--------------------------------------\n";
    cout << "        REPORTE ESTADISTICO DEL CURSO\n";
    cout << "========================================\n";
    cout << fixed << setprecision(2);
    cout << "  Total de estudiantes : " << n          << "\n";
    cout << "  Promedio general     : " << promedio   << "\n";
    cout << "  Aprobados (>= 7)     : " << aprobados  << "\n";
    cout << "  Reprobados (< 7)     : " << reprobados << "\n";
    cout << "========================================\n";
}


void buscar(string nombres[], float notas[], int n) {
    string busqueda;
    cin.ignore();
    cout << "\nIngrese el nombre del estudiante a buscar: ";
    getline(cin, busqueda);

    bool encontrado = false;
    for (int i = 0; i < n; i++) {
        if (nombres[i] == busqueda) {
            cout << "\n  Nombre : " << nombres[i] << "\n";
            cout << "  Nota   : " << fixed << setprecision(2) << notas[i] << "\n";
            cout << "  Estado : " << (notas[i] >= 7 ? "Aprobado ✓" : "Reprobado ✗") << "\n";
            encontrado = true;
            break;
        }
    }

    if (!encontrado)
        cout << "\n  [!] El estudiante \"" << busqueda << "\" no se encuentra registrado.\n";
}


int main() {
    string nombres[MAX];
    float notas[MAX];
    int n = 0;
    bool registrado = false;
    int opcion;

    cout << "================================================\n";
    cout << "  SISTEMA DE GESTION Y ANALISIS DE CALIFICACIONES\n";
    cout << "================================================\n";

    do {
        cout <<"===================================\n";
        cout <<"           MENU PRINCIPAL          \n";
        cout <<"===================================\n";
        cout << "    1. Registrar calificaciones  \n";
        cout << "    2. Reporte estadístico        \n";
        cout << "    3. Buscar estudiante          \n";
        cout << "    4. Salir                      \n";
        cout <<"===================================\n";
        cout << "  Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                registrar(nombres, notas, n);
                registrado = true;
                break;
            case 2:
                if (!registrado)
                    cout << "\n  [!] Primero debe registrar los estudiantes (opcion 1).\n";
                else
                    reporte(nombres, notas, n);
                break;
            case 3:
                if (!registrado)
                    cout << "\n  [!] Primero debe registrar los estudiantes (opcion 1).\n";
                else
                    buscar(nombres, notas, n);
                break;
            case 4:
                cout << "\n  ¡Hasta luego!\n";
                break;
            default:
                cout << "\n  [!] Opcion invalida. Ingrese 1, 2, 3 o 4.\n";
        }
    } while (opcion != 4);

    return 0;
}
