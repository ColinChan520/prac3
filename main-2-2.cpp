#include<iostream>
#include "function-2-2.cpp"
#include<climits>
using namespace std;

extern int max_sub_sum(int, int);

int main()
{
int num[] = {31,-41,59,26,-53,58,97,-93,-23,84}; //declare and initialize the array
int n = sizeof(num)/sizeof(num[0]); //length of an array
int maxSum = max_sub_sum(num, n); //call a function and return value into maxSum variable
cout << maxSum; //prints the maxSum value
return 0;
}
