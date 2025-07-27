#include <iostream>
#include <vector>

class Data{
private:
    int x = 10;

public:
    Data() = default;
    static void Display();
    void HelloWorld();
    int sum (int x, int y){
        return x + y;
    }
};

void Data::HelloWorld(){
    std::cout << "x = " << x << std::endl;
    for(int i = 0; i < 5; i++){
        std::cout << "Hello World\n"
                    << std::endl;
    }
}

void Data::Display(){
    std::cout << "Hi " << std::endl;
}

int sub(int x,  int y){
    return x- y;
}

int main(){
    Data d;
    std::vector<int> v{1,2,3,4,5,6,7,8,9,10,11};
    for (auto &it : v){
        if(!(it % 2)){ std::cout << "Even: " << it << std::endl; }
    }
    return 0;
}