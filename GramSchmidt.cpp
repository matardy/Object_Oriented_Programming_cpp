#include<iostream>
#include<cstdlib>
#include<vector> 
#include<time.h> 

using namespace std ;
    class Vector{
        private:
            int size; 
            double escalar; 
            vector <int> v;
            vector <int> w;  
        public:
            Vector(int size);
            void generate(); 
            void show(); 
            void calculate_escalar(); 
            bool is_ortogonal();
            double getEscalar(); 
            vector <double> restar()
            
            

    };
Vector::Vector(int size){
    this->size = size; 
};
void Vector::generate(){
    srand(time(NULL)); 
    for(int i=0; i<this->size; i++){
        this->v.push_back(rand()%40);
        this->w.push_back(rand()%89); 
    }

};
void Vector::show(){
    cout<< "First vector v: " <<endl; 
    for(int i=0; i<this->size ; i++){
        cout << this->v[i] <<" ";
    }
    cout<<endl; 
    cout<< "Second vector w: " <<endl; 
    for(int i=0; i<this->size ; i++){
        cout << this->w[i] <<" ";
    }
}

void Vector::calculate_escalar(){
    double escalar_product = 0; 
    for(int i=0; i<this->size; i++){
        escalar_product += (this->v[i]*this->w[i]); 
    }
    this->escalar = escalar_product; 
}

bool Vector::is_ortogonal(){
    bool flag = true; 
    if(this->escalar != 0){
       flag = false; 
    }
    return flag; 
}

double Vector::getEscalar(){
    return this->escalar; 
}



int main(){
    Vector *my_vec = new Vector(8);
    my_vec->generate();
    my_vec->show();
    my_vec->calculate_escalar();
    cout<<endl; 
    cout<<"The scalar dot is: " <<my_vec->getEscalar()<<endl;
    if(my_vec->is_ortogonal()){

        cout<< "Los vectores son ortogonales." <<endl; 
    }else{
        cout<< "Los vectores no son ortogonales!" <<endl; 
    }
    
    cout<< endl; 
    return 0; 
}