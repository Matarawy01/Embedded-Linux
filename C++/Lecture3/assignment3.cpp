#include <algorithm>
#include <iostream>
#include <functional>
#include <string>


/* ~~~~~~~~~~~~~~~~~~~~ Task 1 ~~~~~~~~~~~~~~~~~~~~ */
// First Method
// int FindMax(int *arr, int array_size){
//     int max = arr[0];
//
//     std::for_each_n(arr,array_size,[&max](int value){
//         if (value > max) 
//             max = value;
//         });
//
//     return max;
// }

// Second Method
// int FindMax(int *arr, int array_size){
//     int max = arr[0];
//
//     for(int i = 0; i < array_size; i++){
//         if(arr[i] > max) max = arr[i]; 
//     }
//
//     return max;
// }

// Third Method
// int FindMax(int *arr, int array_size){
//     int *max = std::max_element(arr, arr + array_size);
//     return *max;
// }

// int main(){
//     int array[] = {1,9,7,8,3,2};
//     int arr_size = sizeof(array)/sizeof(array[0]);
//     std::cout<<"The max number in array = "<<FindMax(array, arr_size)<<std::endl;
//     return 0;
// }
/***************************************************************/


/* ~~~~~~~~~~~~~~~~~~~~ Task 2 ~~~~~~~~~~~~~~~~~~~~ */
//Input array elements
// void scanArrayElements(int* arr, int arr_size) {
//     std::cout << "Enter The Values of Array Elements" << std::endl;
//     std::for_each_n(arr, arr_size, [](int& item) {
//         std::cin >> item;
//     });
// }

// Display array elements
// void showArrayElements(const int* arr, int arr_size) {
//     std::cout << "The Values of Array Elements:" << std::endl;
//     std::for_each_n(arr, arr_size, [](const int& item) {
//         std::cout << item << " ";
//     });
//     std::cout << std::endl;
// }

// Search for a number and return its index (-1 if not found)
// int searchNumber(const int* arr, int arr_size, int number) { // const and size instead of end
//     const int* result = std::find(arr, arr + arr_size, number);
//     if (result != arr + arr_size) {
//         return result - arr; // Return index
//     }
//     return -1; // Not found
// }

// int main() {
//     int array[6] = {0};
//     int array_size = sizeof(array) / sizeof(array[0]);
//     int search_number = 0;

//     scanArrayElements(array, array_size);
//     std::cout << "********************************" << std::endl;
//     showArrayElements(array, array_size);
//     std::cout << "********************************" << std::endl;

//     std::cout << "Enter Value to be searched: ";
//     std::cin >> search_number;

//     int index = searchNumber(array, array_size, search_number);
//     if (index != -1) {
//         std::cout << "The number " << search_number << " is found at index " << index << std::endl;
//     } else {
//         std::cout << "The number " << search_number << " was not found" << std::endl;
//     }

//     return 0;
// }
/***************************************************************/


/* ~~~~~~~~~~~~~~~~~~~~ Task 3 ~~~~~~~~~~~~~~~~~~~~ */
// void scanArrayElements(int* arr, int arr_size) {
//     std::cout << "Enter The Values of Array Elements" << std::endl;
//     std::for_each_n(arr, arr_size, [](int& item) {
//         std::cin >> item;
//     });
// }

// void showArrayElements(const int* arr, int arr_size) {
//     std::cout << "The Values of Array Elements:" << std::endl;
//     std::for_each_n(arr, arr_size, [](const int& item) {
//         std::cout << item << " ";
//     });
//     std::cout << std::endl;
// }

// int deleteNumber(int* arr, int& arr_size, int number) {
//     // Find the number
//     int* result = std::find(arr, arr + arr_size, number);
    
//     if (result == arr + arr_size) {
//         std::cout << "Number " << number << " not found in the array" << std::endl;
//         return arr_size; // No change in size
//     }

//     // Shift elements to the left to "delete" the found number
//     for (int* ptr = result; ptr != arr + arr_size - 1; ++ptr) {
//         *ptr = *(ptr + 1);
//     }

//     // Decrease the size
//     --arr_size;
//     std::cout << "Number " << number << " deleted successfully" << std::endl;
//     return arr_size;
// }

// int main() {
//     int array[6] = {0};
//     int array_size = sizeof(array) / sizeof(array[0]);
//     int number_to_delete = 0;

//     // Input array elements
//     scanArrayElements(array, array_size);
//     std::cout << "********************************" << std::endl;

//     // Show initial array
//     showArrayElements(array, array_size);
//     std::cout << "********************************" << std::endl;

//     // Get number to delete
//     std::cout << "Enter a number to delete: ";
//     std::cin >> number_to_delete;

//     // Delete the number and update size
//     array_size = deleteNumber(array, array_size, number_to_delete);

//     // Show updated array
//     std::cout << "********************************" << std::endl;
//     showArrayElements(array, array_size);

//     return 0;
// }
/***************************************************************/


/* ~~~~~~~~~~~~~~~~~~~~ Task 4 ~~~~~~~~~~~~~~~~~~~~ */
// First Method
// void scanArrayElements(int* arr, int arr_size) {
//     std::cout << "Enter The Values of Array Elements" << std::endl;
//     std::for_each_n(arr, arr_size, [](int& item) {
//         std::cin >> item;
//     });
// }

// void showArrayElements(const int* arr, int arr_size) {
//     std::cout << "The Values of Array Elements:" << std::endl;
//     std::for_each_n(arr, arr_size, [](const int& item) {
//         std::cout << item << " ";
//     });
//     std::cout << std::endl;
// }

// void MergeArray(int *arr1, int arr1_size, int *arr2,  int arr2_size, int *merged_array, int merged_size){
//     for(int i = 0; i != arr1_size; i++){
//         merged_array[i] = arr1[i];

//     }
//     for(int i = 0; i != arr2_size; i++){
//         merged_array[i + arr1_size] = arr2[i];
//     }
// }
// int main(){
//     int array1[5] = {0};
//     int array2[6] = {0};
//     int array1_size = sizeof(array1) / sizeof(array1[0]);
//     int array2_size = sizeof(array2) / sizeof(array2[0]);
//     // Input array1 elements
//     scanArrayElements(array1, array1_size);
//     std::cout << "********************************" << std::endl;
//     // Input array2 elements
//     scanArrayElements(array2, array2_size);
//     std::cout << "********************************" << std::endl;
//     int array3_size = array1_size+array2_size;
//     int array3 [array3_size] = {0};
//     MergeArray(array1, array1_size, array2, array2_size, array3,array3_size);
//     showArrayElements(array3, array3_size);
//     return 0;
// }

// Second Method
// void scanArrayElements(int* arr, int arr_size, const std::string& label) {
//     std::cout << "Enter " << arr_size << " values for " << label << ":" << std::endl;
//     std::for_each_n(arr, arr_size, [](int& item) {
//         std::cin >> item;
//     });
// }

// void showArrayElements(const int* arr, int arr_size, const std::string& label) {
//     std::cout << label << ": ";
//     std::for_each_n(arr, arr_size, [](const int& item) {
//         std::cout << item << " ";
//     });
//     std::cout << std::endl;
// }

// void mergeArrays(const int* arr1, int arr1_size, const int* arr2, int arr2_size, int* merged_array, int merged_size) {
//     // Using std::copy for efficiency and readability
//     std::copy(arr1, arr1 + arr1_size, merged_array);
//     std::copy(arr2, arr2 + arr2_size, merged_array + arr1_size);
//     // Note: merged_size is assumed to be arr1_size + arr2_size; could add a check if needed
// }

// int main() {
//     int firstArray[5] = {0};
//     int secondArray[6] = {0};
//     int firstArraySize = sizeof(firstArray) / sizeof(firstArray[0]);
//     int secondArraySize = sizeof(secondArray) / sizeof(secondArray[0]);

//     // Input arrays with labels
//     scanArrayElements(firstArray, firstArraySize, "first array");
//     std::cout << "********************************" << std::endl;
//     scanArrayElements(secondArray, secondArraySize, "second array");
//     std::cout << "********************************" << std::endl;

//     // Show original arrays
//     showArrayElements(firstArray, firstArraySize, "First array");
//     showArrayElements(secondArray, secondArraySize, "Second array");
//     std::cout << "********************************" << std::endl;

//     // Merge arrays
//     int mergedSize = firstArraySize + secondArraySize;
//     int mergedArray[mergedSize] = {0}; // VLA not standard; see note below
//     mergeArrays(firstArray, firstArraySize, secondArray, secondArraySize, mergedArray, mergedSize);

//     // Show merged array
//     showArrayElements(mergedArray, mergedSize, "Merged array");

//     return 0;
// }
/***************************************************************/


/* ~~~~~~~~~~~~~~~~~~~~ Task 5 ~~~~~~~~~~~~~~~~~~~~ */
// int square_num(int number) {
//     auto square = [](int n) { return n * n; }; // Define lambda, no capture needed
//     return square(number);                     // Call lambda and return result
// }

// int main() {
//     int num = 0, result = 0;
//     std::cin >> num;
//     result = square_num(num);
//     std::cout << result << std::endl;
//     return 0;
// }
/***************************************************************/


/* ~~~~~~~~~~~~~~~~~~~~ Task 6 ~~~~~~~~~~~~~~~~~~~~ */
// void Re_arrange_Descending(int *arr, int arr_size){
//     std::sort(arr, arr + arr_size, [](int a, int b){
//         return a > b;
//     });
// }

// void Re_arrange_Ascending(int *arr, int arr_size){
//     std::sort(arr, arr + arr_size, [](int a, int b){
//         return a < b;
//     });
// }

// int main(){
//     int array[] = {5,4,6,3,7};
//     int array_size = sizeof(array) / sizeof(array[0]);
//     Re_arrange_Descending(array, array_size);
//     std::cout << "The array Sorted in Descending"<<std::endl;
//     std::for_each_n(array, array_size, [](int &value){
//         std::cout << value << " ";
//     });
//     std::cout<<std::endl;
//     std::cout << "********************************" << std::endl;
//     std::cout << "The array Sorted in Ascending"<<std::endl;
//     Re_arrange_Ascending(array, array_size);
//     std::for_each_n(array, array_size, [](int &value){
//         std::cout << value << " ";
//     });
//     std::cout<<std::endl;
// }
/***************************************************************/


/* ~~~~~~~~~~~~~~~~~~~~ Task 7 ~~~~~~~~~~~~~~~~~~~~ */
int main(){
    std::string option; 
    int count = 0;
    std::string arr[100];

    std::cout <<"Welcome to your Favorite address Book!"<< std::endl; 

    while(1){
        std::cout <<"What do you want to do?"<< std::endl; 
        std::cout <<"       | List       | Lists all users"<< std::endl;
        std::cout <<"       | Add        | Add an user"<< std::endl;
        std::cout <<"       | Delete     | Deletes an user"<< std::endl;
        std::cout <<"       | Delete all | Removes all users"<< std::endl;
        std::cout <<"       | Search     | Search on a user"<< std::endl;
        std::cout <<"       | Close      | Closes the address book"<< std::endl;

        std::getline(std::cin, option);

        if (option == "List") {
            if(count != 0){
                std::for_each_n(arr, count , [](std::string &value){
                    std:: cout << "Name: " << value <<std::endl;
                });
            }
            else{
                std::cout << "No Content Found" << std::endl;
            }
            std::cout << "********************************" << std::endl;
        }
        else if (option == "Add") {
            std:: cout << "Enter Name: ";
            std::getline(std::cin, arr[count]);
            count++;
            std::cout << "********************************" << std::endl;
        }
        else if (option == "Delete"){
            std:: cout << "Enter Name to Delete: ";
            std::string Name;
            std::getline(std::cin,Name);

            int index;
            std::string *Result = std::find(arr, arr + count, Name);
            if (Result != arr + count) {
                index = Result - arr; // Return index

                // Shift elements to the left to "delete" the found number
                for (std::string* ptr = Result; ptr != arr + count - 1; ++ptr) {
                    *ptr = *(ptr + 1);
                }

                // Decrease the size
                --count;
                std::cout << "Name " << Name << " deleted successfully" << std::endl;
            }
            else{
                std:: cout <<"This Contact is not found"<< std::endl;
            }
        }
        else if (option == "Delete all"){
            count = 0;
            std:: cout << "The List is Deleted Successfully" << std::endl;    
            std::cout << "********************************" << std::endl;
        }
        else if (option == "Search"){
            std:: cout << "Enter Name to Search About: ";
            std::string Name;
            std::getline(std::cin, Name);

            int index;
            std::string *Result = std::find(arr, arr + count, Name);
            if (Result != arr + count) {
                index = Result - arr; // Return index
                std::cout << "This Content is found in index: "<< index<<std::endl;
            }
        }
        else if (option == "Close"){
            std::cout << "********************************" << std::endl;
            break;
        }
    }
}
