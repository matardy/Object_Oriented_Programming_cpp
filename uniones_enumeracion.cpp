#include<iostream>
#include<string> 

using namespace std; 

int main(){
    //Union
    union numero_letra{
        int numero; 
        char letra;
    };

    numero_letra x = {'A'};

    cout << "x como un numero: " << (char)x.numero<<endl; 
    cout << "x como una letra: " << x.letra<<endl; 

    // Si no hago un casteo, el compilar me da el valor en ascci

    //Enumeraciones
    enum dias_semanales { lunes = 'l', martes = 'm', miercoles = 'x' }; 
    dias_semanales dia = martes; 
    
    cout <<(char)dia<<endl;



    return 0; 
}