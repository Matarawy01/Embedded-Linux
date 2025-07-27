#include <iostream>

class MyData{
public:
    MyData(){ // Default Constructor
        std::cout << "This is Default Constructor" << std::endl;
    }
    MyData(int a, int b){ // Parametrized Constructor
        std::cout <<"This is Parametrized Constructor" << std::endl;
        this-> a = a;
        this-> b = b;
    }
private:
    int a;
    int b;    
};

int main(){
    MyData my(2, 3); // this Init Parametrized Constructor
    MyData my1; // this init Default constructor 
    MyData my2{}; // this init Default constructor 
    MyData my3 = MyData(); // this init Default Constructor
    MyData my4 = MyData(4,2); // this init Parametrized Constructor
    MyData my5 {2,3}; // This Aggregate Init


    return 0;
}

