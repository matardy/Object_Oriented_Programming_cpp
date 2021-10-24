#include<iostream>
#include<string> 

using namespace std; 

struct Persona{
    string nombre; 
    int edad; 
};

int main(){
    Persona *miPersona = new Persona(); // De esta forma creo un puntero durante la ejecucion 
    // Con esto es memoria dinamica, mas eficiencia.
    miPersona->edad = 12; // Para punteros utilizo la notacion de flecha, sin puntero utilizo el punto
    miPersona->nombre = "Diana"; 
    cout<<miPersona->nombre<<endl; 
    cout<<miPersona->edad<<endl; 
    


return 0; 
}