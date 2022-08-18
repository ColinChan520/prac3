#include <iostream>
#include "function-1-3.cpp"
using namespace std;

extern void copy_integers(int old_array[], int new_array[], int length);

int main() {

int arr[] = {1,2,3,4,5,6,7,8,9,10};

int copy[10];

copy_integers(arr, copy, 10);

for(int i=0; i<10; i++)
cout<<copy[i]<<" ";
cout<<endl;
return 0;
}

