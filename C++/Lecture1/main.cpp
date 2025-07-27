// #include <iostream>

// int main(){
//     std::cout << "Hello Matarawy" << std:: endl;
// }


// #include <iostream>
// #include <vector>

// int main()
// {
//     std::vector<int> numbers = {1,2,3,4,5};
//     for(int i:numbers){
//         std::cout << "Number: " << i <<std::endl;
//     }
// }


/***************** Tasks *****************/
/*Task1*/
// #include <iostream>

// int main()
// {
//     char num;
//     std::cout <<"+--------+-------+" <<std::endl;
//     std::cout <<"|  Char  | ASCII |" << std::endl;
//     std::cout <<"+--------+-------+" <<std::endl;
//     for(int i = '0'; i < 'z' + 1; i++)
//     {
//         std::cout <<"  "<<char(i) << "\t   " <<std::dec << i <<std::endl;
//     }
// }

/*Task2*/
// #include <iostream> 
// #include <iomanip>
// int main(){
//     int num1;
//     int num2;
//     std:: cin >> num1;
//     std:: cin >> num2;
//     std:: cout << "Your first number is " << num1 
//                << " your second number is "<< num2 << std:: endl;
//     if (num1 > num2){
//         std::cout << num1 << " is greater than " << num2 << std::endl;
//     }
//     else if (num1 < num2){
//         std::cout << num1 << " is less than " << num2 << std::endl;
//     }
//     else{
//         std::cout << num1 << " is equal to " << num2 << std::endl;
//     }
//     return 0;
// }

/*Task3*/
// #include <iostream>
// #include <cmath>
// int main(){
//     int a,b,c;
//     int num1, num2;
//     std::cin >> a;
//     std::cin >> b;
//     std::cin >> c;
//     num1 = pow(a,2) + pow(b,2);
//     num2 = pow(c,2);
//     if(num1 == num2){
//         std::cout <<"This is Right angle triangle" << std::endl;
//     }
//     else{
//         std::cout <<"This is not Right angle triangle" << std::endl;
//     }
// }


/*Task4*/
// #include <iostream>

// int main(){
//     char num;
//     std::cout << "Enter the character to test it please: ";
//     std::cin >> num;
//     if(num == 'a' || num == 'o' || num == 'u' || num == 'i' || num == 'e'){
//         std::cout <<"The character you Entered is a vowel: " << num <<std::endl;
//     }
//     else{
//         std::cout <<"The character you Entered is not a vowel: " << num << std::endl;
//     }
// }


/*Task5*/
// #include <iostream>

// int main(){
//     int num;
//     int sum = 0;
//     std::cout << "Enter an Integer: ";
//     std::cin >> num;

//     // Convert the integer to string
//     std::string numStr = std::to_string(num);

//     // Calculate the sum of digits using string manipulation
//     for(char digitChar : numStr){
//         int digit = digitChar;
//         sum += digit - '0';
//     }

//     // Output the result
//     std::cout << "Sum of digits of " << num << " is: " << sum << std::endl;
// }


/*Task6*/
// #include <iostream>
// #include <bitset>

// int main() {
//     int bnum = 18;
//     // Default Initialization
//     std::bitset<5> bnum1(bnum);
//     std::cout << bnum1 << std::endl;
//     return 0;
// }