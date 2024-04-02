#include <iostream>
using namespace std;
int main(){
    int num=5, tam;
    int *puntero;
    puntero=&num;
    tam= sizeof(num);
    cout << "hola mundo" <<endl;
    cout << "contenido del puntero: " << *puntero <<endl;
    cout << "direccion de memoria almacenada por el puntero: " << puntero <<endl;
    cout << "direccion de memoria de la variable: " << &num <<endl;
    cout << "direccion de memoria del puntero: " << &puntero <<endl;
    cout << "tamaño de memoria utulizado por la variable: " << tam <<endl;
        
    return 0;
}