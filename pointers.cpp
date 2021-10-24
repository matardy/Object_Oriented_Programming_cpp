#include<iostream> 
using namespace std; 

    

int main(){
    char letra  = 'A'; 
    char *puntero = &letra; 
    cout << (int *)&letra; //Convierte en un puntero entero
    cout<<endl; 
    cout<< (int *) puntero <<endl;
    //Accediendo desde el puntero 
    cout << *puntero <<endl; 
    cout<<"Hola!"; 



    return 0; 
}