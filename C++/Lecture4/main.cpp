#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>


// struct data{
//     int a;
//     int b;
// };

// enum Traffic{
//     RED,
//     YELLOW,
//     BLUE
// };
// enum class Traffic1: unsigned char{
//     RED,
//     YELLOW,
//     BLUE
// };

// int main(){
    /* ~~~~~~~~~~~~~~~~~~~~~~ Initialization ~~~~~~~~~~~~~~~~~~~~~~ */
    // Userdefine data types (struct, enum, union, class)
    // trival data types (int, float, double, bool, char)

    // 1) Default Values
    // int x; // copy Init (Garbage Value)
    // int x1{}; // Value Init == Uniform Init (Zero)
    // // int x2(); // Direct Init, vexing parse, form an error
    // std::cout << x << " " << x1 << std::endl; 

    // data d; // copy Init (Garbage Value)
    // data d1{}; // Value Init == Uniform Init (Zero)
    // std:: cout << d.a << " " << d.b <<std::endl;
    // std:: cout << d1.a << " " << d1.b <<std::endl;

    // 2) Effect will make a difference in userdefine types vector
    // std::vector<int> v(12,3);
    // std::for_each(std::begin(v), std::end(v), [](int &value){
    //     std:: cout << value << " ";
    // });
    // std:: cout << std::endl;

    // std::vector<int> v1{12,3};
    // std::for_each(std::begin(v1), std::end(v1), [](int &value){
    //     std:: cout << value << " ";
    // });
    // std:: cout << std::endl;

    // 3) Narrow Conversion
    // float dec = 3.14;
    // int num = dec; // this make implicit casting
    // std:: cout << num << std::endl;
    // int num1{dec}; // this can't be narrowed to int
    // std:: cout << num1 << std::endl;
    // int num2{static_cast<int>(dec)};
    // std:: cout << num2 << std::endl;

    /* ~~~~~~~~~~~~~~~~~~~~~~ Enumerator ~~~~~~~~~~~~~~~~~~~~~~ */
    // Traffic obj{};
    // std:: cout << obj << std::endl;
    // std:: cout << Traffic::BLUE << std::endl;

    // int num = RED; // I need this to form a compilation error as change from data type to another data type

    /* ~~~~~~~~~~~~~~~~~~~ Class / Structure ~~~~~~~~~~~~~~~~~~~ */

// }

// #include <bits/stdc++.h>
// #include <string.h>

//  struct MyData{
//     int ID;
//     std::string Name;
//     // char name[10]; 
//     // void Setter(int num, const char* n){
//     //     ID = num;
//     //     strcpy(name, n);
//     // }
//     void Setter(int num, std::string  n){
//         ID = num;
//         Name = n;
//     }

//     MyData(){
//         ID = 0;
//         Name = "Default";
//     }
//  };

// int main(){
//     MyData d;
//     d.Setter(100, "Matarawy");
// }


