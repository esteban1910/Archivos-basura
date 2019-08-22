#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

int main(){
    ifstream archivo;
    string nombreArchivo, texto;
    cout<<"Nombre: ";
    getline(cin, nombreArchivo);
    archivo.open(nombreArchivo.c_str(), ios::in);

    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }

    while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;
    }
    archivo.close();

}
