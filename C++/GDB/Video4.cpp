#include <iostream>
#include <stdio.h>
#include <vector>

class Data{
    public:
        Data() = default;
        void HalloWorld(){
            for(int i = 0; i < 5; i++){
                std::cout<<"Hello Matarawy\n"
                         <<std::endl;
            }
        }
};

int main(){
    Data d;
    printf("\nWelcome in C programming\n");
    d.HalloWorld();
    std::vector<int>v{1,2,3,4,5,6,7,8,9,10};
    for(auto &it:v){
        if(!(it % 2))
            std::cout << "Even:"<< it <<std::endl;
    }
    return 0;
}

