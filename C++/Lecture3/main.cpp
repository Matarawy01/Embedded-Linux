#include <algorithm>
#include <iostream>
#include <functional>
#include <vector>

// const int global_variable = 10;

/* Syntax of const/constexpr Expression */
// constexpr int fun(){
//     return 5;
// }

// constexpr int fun(){
//     int z = 2; // this form an error in c++11 but work in c++14
//      return 5;
// }

// constexpr int fun(){
//     int x = rand(); // this form an error as the rand should occur in runtime but constexpr occur in compilation time
//     return 5;
// }
// int main(){
    // const int x = fun();
    // std::cout<<x<<std::endl;
    /* Syntax of Lambda Expression */
    // auto f = [/*Captures*/](/*Parameters*/){
    // // Body    
    // };
    // [/*Captures*/](/*Parameters*/){
    // // Body    
    // }();

    // auto f = [/*Captures*/](/*Parameters*/){
    // std::cout<<"Hello Matarawy Welcome Back" << std::endl;    
    // };
    // f();
    /******************************************************************************/

    /* Adding Explicit to Return Value */
    // auto f = [/*Captures*/](/*Parameters*/)->int{
    // std::cout<<"Hello Matarawy Welcome Back" << std::endl;    
    // return 5;
    // };
    // std::cout<<f()<<std::endl;
    /******************************************************************************/

    /* Sending Parameters to lambda expression */
    // auto sum = [/*Captures*/](int num1, int num2)->int{   
    // return num1 + num2;
    // };
    // std::cout<<sum(4,3)<<std::endl;
    /******************************************************************************/

    /* Sending Capture to lambda expression */
    // int offset = 100;
    // auto sum = [offset](int num1, int num2)->int{   
    // return num1 + num2 + offset;
    // };
    // std::cout<<sum(4,3)<<std::endl;
    /******************************************************************************/

    /* Example of Using Lambda Expression */
    // int offset = 2;
    // std::vector<int> v{12,22,3,4,15,6}; 
    // std::sort(v.begin(), v.end(), 
    //             [offset](int a, int b){return offset + a + b;});

    // std::for_each(v.begin(), v.end(),
    // [](int num) {std::cout<<num<<" ";});
    /******************************************************************************/

    /* Tricks of Lambda Expression */
    // Trick 1
    // int temp = 10;
    // auto f = [](int number){
    //     std::cout<< number + temp; // Scope of Lmabda is standalone scope 
    // };

    // Solution
    // int temp = 10;
    // auto f = [temp](int number){
    //     std::cout<< number + temp; // Scope of Lmabda is standalone scope 
    // };
    /**********************************************************/

    // Trick 2
    // int temp = 10;
    // auto f = [temp](int number){
    //     temp = 100; // the variable is define as const/private member
    // };

    // Solution
    // int temp = 10;
    // auto f = [temp](int number) mutable{
    //     temp = 100; // need to be mutable or referance
    // };

    //example
    // int temp = 10;
    // auto f = [temp](int number) mutable{
    //     temp = 100; // need to be mutable or referance
    //     std::cout<<temp<<std::endl; // 100
    // };
    // f(3);
    // std::cout<<temp<<std::endl; // 10

    //example2
    // int temp = 10;
    // auto f = [&temp](int number) mutable{
    //     temp = 100; // need to be mutable or referance
    //     std::cout<<temp<<std::endl; // 100
    // };
    // f(3);
    // std::cout<<temp<<std::endl; // 100
    /**********************************************************/

    // Trick 3
    // int value = 2;
    // int temp = 1;
    // [&](){
    //     temp = 100;
    //     value = 50;
    // }();
    // std:: cout << temp + value << std::endl; // 150    
    /**********************************************************/

    // Trick 4 
    // int value = 2;
    // int temp = 1;
    // void(*pf)(int x) = [](int number){
    //     std::cout<<"Pointer to Function"<< std::endl;
    // }; 
    // pf(2);

    //Error
    // int value = 2;
    // int temp = 1;
    // void(*pf)(int x) = [temp](int number){
    //     std::cout<<"Pointer to Function"<< std::endl;
    // }; 
    // pf(2);

    //Solution
    // int value = 2;
    // int temp = 1;
    // std::function<void(int x)> pf = [temp](int number){
    //     std::cout<<"Pointer to Function"<< std::endl;
    // }; 
    // pf(2);
    /**********************************************************/

    // Trick 5
    // g++ main.cpp -std=c++11 && ./a.out will form error
    // but it work in // g++ main.cpp -std=c++14 && ./a.out
    // auto f = [](auto x, auto y){}; 
    /**********************************************************/

    // Trick 6
    // int temp = 100;
    // [&var = temp, x = 50](){
    //     std::cout<<var <<std::endl;
    //     std::cout<<x <<std::endl;
    // }();
    /******************************************************************************/

    /* Syntax of const/constexpr Expression */
    // int var = global_variable;
    // int arr[global_variable] = {1,2,3};
    // switch(var){
    //     case global_variable:
    //         std::cout<<"var is 10"<<std::endl;
    //         break;
    // } 
// }

