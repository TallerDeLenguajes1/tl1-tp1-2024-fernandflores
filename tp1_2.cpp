#include <iostream>
using namespace std;

int cuadrado(int num);
void cuadrado2 (int num);
void invertir (int a, int b);
void orden (int a, int b);
int main(){
    int num, resultado, a, b;
    cout<<"ingrese numero"<<endl;
    cin >> num;
    resultado= cuadrado(num);
    cout <<"el cuadrado del numero con funcion es: "<<resultado<<endl;
    cuadrado2(num);
    cout<< "la direccion de memoria de la variable es: "<<&num<<endl;
    cout <<"el contenido de la variable es: "<<num<<endl;
    cout<< "ingrese los valores para ser invertidos (a, b)"<<endl;
    cin>>a;
    cin>>b;
    invertir(a,b);
    orden (a,b); 
    return 0;
}

int cuadrado(int num){
    int aux;
    aux= num*num;
    return aux;
}
void cuadrado2(int num){
    int aux;
    aux= num *num;
    cout <<"el cuadrado con void es: "<<aux<<endl;
}
void invertir (int a, int b){
    int aux;
    aux=a;
    a=b;
    b=aux;
    cout<< "el valor ya invertido de a es: "<<a<<" de b: "<<b<<endl;
}
void orden (int a, int b){
    int aux;
    if (a>=b){
        cout<<"el valor mayor es a por lo tanto a= "<<a<< " y b= "<<b<<endl;
    }
    else{
        aux=a;
        a=b;
        b=aux;
        cout<<"el valor mayor es b por lo tanto ahora a= "<<a<<" y b= "<<b<<endl;
    }
}