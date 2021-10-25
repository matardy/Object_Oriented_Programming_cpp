#include<iostream>
#include<string>
using namespace std; 

class Persona {
    private: 
        string nombre; // De esta forma los datos son privados y no puedo editarlos
        int edad; 
    public: 
        static int numero_personas; 
        
        /* Inicializacion inline
        Persona(string n, int e): nombre(n),  edad(e) {} // De esta forma tambien puedo crear constructuores
        */

       Persona(string nombre, int edad);

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

        void saludar();
};

/*
     Cuando se crean nuevos objetos de una clase, se reserva nuevo espacio dinámicamente,
     por cada cosa dentro de la clase se crea una copia en cada nuevo objeto, en cambio, 
     los elementos estáticos de la clase, solo existen una vez, en la definición de la misma, 
     y cada copia del objeto accede a la misma única copia de la función, 
     que puede acceder a una única copia de la variable estática contador.
*/

//Optimizar memoria
int Persona::numero_personas = 0; // El compilador puede acceder a una atributado si le especificas la clase
// Defino como funciona desde fuera
void Persona::saludar(){
    cout << nombre << ": Saludando"<<endl; 
    cout << edad << ": Edad" <<endl;
}

Persona::Persona(string nombre, int edad){
    this->nombre = nombre; 
    this->edad = edad; 
    numero_personas += 1; 
}

int main(){
    Persona *p = new Persona("Diana", 25); 

    cout << "Numero de personas: " <<  Persona::numero_personas <<endl;   //De esta forma accedo a variables estaticas

    int edad; 
    string nombre; 
    p->saludar(); 
    delete p; 
    cout << "Ingrese la nueva edad: " <<endl; 
    cin>>edad; 
    cout<< "Ingrese el nuevo nombre: " <<endl; 
    cin>>nombre; 
    p->setEdad(edad).setNombre(nombre); //Concateno metodos
    cout<< "Los nuevos datos de Diana son: " <<endl; 

    p->saludar(); 


    return 0; 
}