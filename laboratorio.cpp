#include "Laboratorio.h"

Laboratorio::Laboratorio()
{
    cont = 0;
}

void Laboratorio::agregarComputadora(const Computadora &c )
{
    if (cont < 5){
        arreglo [cont] = c;
        cont ++;
    }
    else {
        cout << "El arreglo esta lleno! "<< endl;
    }
}

void Laboratorio::mostrar()
{
    cout << left;
    cout << setw(10) << "Sistema";
    cout << setw(10) << "RAM";
    cout << setw(8) << "Nombre";
    cout << setw(6) << "ROM";
    cout << endl;

    for (size_t i=0; i< cont; i++){
        Computadora &p = arreglo [i];

        cout << p;
        //cout << "Sistema: "<< p.getSistema() << endl; 
        //cout << "Ram: "<< p.getRam() << endl; 
        //cout << "Nombre: "<< p.getNombre() << endl; 
        //cout << "Rom: "<< p.getRom() << endl; 
        //cout << endl;
    }
}