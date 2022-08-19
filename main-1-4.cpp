#include <string.h>
#include <string>
#include <iostream>
#include "function-1-4.cpp"
using namespace std;

extern void copy_doubles(double ,double ,int );

int main(){
    double arr1[] = {10, 20, 40, 40, 50};
    double arr2[5];
    copy_doubles(arr1, arr2, 5);
    for (int i = 0; i < 5; i++)
        cout << *(arr2 + i) << "";
    
    return 0;
}

