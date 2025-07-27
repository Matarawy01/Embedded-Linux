#include <stdio.h>

int x = 0;
void HalloWorld(){
    x++;
    for(int i = 0; i < 5; i++){
        printf("Hello Matarawy\n");
    }
    x++;
}

int main(){
    int y = 1;
    x++;
    printf("Welcome in C programming\n");
    HalloWorld();
    return 0;
}