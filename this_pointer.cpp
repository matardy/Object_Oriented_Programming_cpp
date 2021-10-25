#include<iostream>
#include<string>
using namespace std; 

class Persona {
    private: 
        string nombre; // De esta forma los datos son privados y no puedo editarlos
        int edad; 
    public: 
        
        /* Inicializacion inline
        Persona(string n, int e): nombre(n),  edad(e) {} // De esta forma tambien puedo crear constructuores
        */

       Persona(string nombre, int edad){
           this->nombre = nombre; 
           this->edad = edad; 
       }

        ~Persona(){
            cout << "Destructor!" <<endl; 

        }

        /* Forma normal de hacerlo
        void setEdad(int edad){
            this->edad = edad; 
        }
        */

       // Si yo quisiera concatenar los metodos. Es decir que me devuelvan el objeto.
        //Devuelve un puntero del tipo Persona. 
        Persona &setNombre(string nombre){
            this->nombre = nombre; 
            return *this; 
        }

        Persona &setEdad(int edad){
            this->edad = edad; 
            return *this; 
        }
        


        void saludar(){
            cout << nombre << ": Saludando"<<endl; 
            cout << edad << ": Edad" <<endl; 
        }
};

int main(){
    Persona *p = new Persona("Diana", 25); 
    int edad; 
    string nombre; 
    p->saludar(); 
    delete p; 
    cout << "Ingrese la nueva edad: " <<endl; 
    cin>>edad; 
    cout<< "Ingrese el nuevo nombre: " <<endl; 
    cin>>nombre; 
    p->setEdad(edad).setNombre(nombre);
    cout<< "Los nuevos datos de Diana son: " <<endl; 

    p->saludar(); 


    return 0; 
}