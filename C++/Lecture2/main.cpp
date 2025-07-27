#include <cstddef>
#include <iostream>
#include <type_traits>

/************************** Function ******************************/
// Case1: Passing Default parameter to function argument (okay)
// void PrintMessage(std::string message = "Hello matarawy"){
//     std::cout << message << std::endl;
// }

/* Case2: Passing Default value to first parameter in function, 
 * this gives an error because if you init a value to argument,
 * you must give value to any argument before it (Error)*/  
// void PrintMessage(std::string message = "Hello matarawy", std::string country){
//     std::cout << message << std::endl;
// }

// Case3: Passing Default value to both function parameters (okay)
// void PrintMessage(std::string message = "Hello matarawy", 
//                   std::string country = "Egypt"){
//     std::cout << message << std::endl;
//     std::cout << country << std::endl;
// }

// Case4: Passing Default value to second function parameter only (okay) 
// void PrintMessage(std::string message, 
//                   std::string country = "Egypt"){
//     std::cout << message << std::endl;
//     std::cout << country << std::endl;
// }

// int main(){
//     PrintMessage("Hello Matarawy");    
//     PrintMessage("Welcome", "Germany");
//     return 0;
// }

/* In this case we use function substr which takes 2 argument, first one is the position 
 * of starting and second one the size of steps */
// void PrintMessage(std::string message){
//     std::cout << message.substr(5,message.length()) <<std::endl;
// }
// int main(){
//     PrintMessage("Welcome Back");
// }

/************************** Function Overloaded ******************************/
// int multiply(int i, int j){
//     std::cout << "int multiply(int i, int j)" <<std::endl;
//     std::cout << __FUNCTION__ <<std::endl;
//     return i * j;

// }int multiply(float a, float b){
//     std::cout << "int multiply(float a, float b)" <<std::endl;
//     return a * b;
// }

// int main(){
//     multiply(2,3);
//     multiply(2.5f, 3.5f);
/* ambiguos mean that he didn't know this float or double or int 
* so you should set at least one of them with 2.5f */ 
//     //multiply(2.5,3.5);
//     return 0;
// }

// int main(){
//     std::string v{"Hello"};
//     std::string v2{" World"};
//     v.insert(v.end(), v2.begin(), v2.end());
//     v.insert(v.begin(),4,'#');
//     std::cout<<v<<std::endl;
// }


/************************** Pointer ******************************/
// int main(){
//     int *ptr = new int(5);
//     std::cout<< *ptr <<std::endl;
//     std::cout<< ptr <<std::endl;
//     delete ptr;
//     ptr = nullptr;
//     std::cout<< ptr <<std::endl;
// }

/************************** Refrences ******************************/
// int main(){
//     int x = 10;
//     int &ref = x;
//     int *ptr = &x;
//     std:: cout << x << std::endl;       // 10
//     std:: cout << ref << std::endl;     // 10
//     std:: cout << *ptr << std::endl;    // 10
//     std:: cout << &x << std::endl;      // 0x7ffd26f7a0e4
//     std:: cout << &ref << std::endl;    // 0x7ffd26f7a0e4
//     std:: cout << ptr << std::endl;     // 0x7ffd26f7a0e4
//     std:: cout << &ptr << std::endl;    // 0x7ffd26f7a0e8
//     ref = 12;
//     std:: cout << x << std::endl;       // 12
//     std:: cout << ref << std::endl;     // 12
//     std:: cout << *ptr << std::endl;    // 12
//     std:: cout << &x << std::endl;      // 0x7ffd26f7a0e4
//     std:: cout << &ref << std::endl;    // 0x7ffd26f7a0e4
//     std:: cout << ptr << std::endl;     // 0x7ffd26f7a0e4
//     std:: cout << &ptr << std::endl;    // 0x7ffd26f7a0e8
//     }
    
/************************** Auto ******************************/
// auto in c++ it sense the type of variable 

// int main(){
//     auto x = 5;
//     std::cout<< x <<std::endl;
// }

/************************** Static_cast ******************************/
// int main(){
//     int a = 10;
//     char c = 'a';

//     /* this will pass at compiler time but may fail at runtime 
//     * because it may acces 3 bytes from read only. */
//     int *q = (int*)c; 

//     int *p = static_cast<iny*>(&c); // this gives an error.
// }

/************************** const_cast ******************************/
// int main(){
//     const int val = 100;
//     const int *ptr = &val;
//     //int * ptr2 = ptr; // this gives an error
//     int *ptr2 = const_cast<int *>(ptr); // this mean i know what i do remove const
//     *ptr2 = 100;
// }

/************************** reinterpret_cast ******************************/
/* reinterpret_cast should be used with extreme caution. It allows casting between any types of pointers, but it
 * does not check the compatibility of the types, leading to potential errors and undefined behavior. Always
 * ensure that the types are compatible and the casting is safe when using reinterpret_cast.*/
// int main(){
//     char x = 'a';
//     //int *ptr = reinterpret_cast<int *>(&x); // gives an error
//     char *ptr = reinterpret_cast<char *>(&x);
//     std::cout << *ptr <<std::endl;
// }
