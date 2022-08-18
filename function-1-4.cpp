#include<string.h>
#include<string>
#include<iostream>
using namespace std;



void copy_doubles(double *old_array,double *new_array,int length){
    int i = 0;

    for (; i < length; i++)
    {
        *(new_array + i) = *(old_array + i);
    }

   
}

