#include<iostream>
#include<string>
using namespace std; 

class Persona {
    private: 
        string nombre; // De esta forma los datos son privados y no puedo editarlos
        int edad; 
    public: 
        
        Persona(string n, int e): nombre(n),  edad(e) {} // De esta forma tambien puedo crear constructuores

        ~Persona(){
            cout << "Destructor!" <<endl; 

        }
        void saludar(){
            cout << nombre <<endl; 
        }
};

int main(){
    Persona *p = new Persona("Diana", 25); 
    p->saludar(); 


    return 0; 
}