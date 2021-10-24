#include<iostream>
#include<string>
using namespace std; 

class Persona{
    public:
        string name; 
        int age; 

        Persona(string n){
            name = n ; 
        }

        ~Persona(){
            cout<< "Destructor!" <<endl; 
        }

        void saludar(){
            cout << name << " : " << " saludando!" <<endl; 
        }
}; 

int main(){
    //Memoria dinamica
    Persona *p = new Persona("Diana"); 
    Persona *p2 = new Persona("Ximena"); 

    delete p2; // Elimina lo que hay en p2

    p->saludar(); 
    p2->saludar(); 

    return 0; 
}