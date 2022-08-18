#include<iostream>
#include<climits>
using namespace std;

int max_sub_sum(int *num, int length)
{

int maxFar = INT_MIN, maxEnd = 0;

for (int i = 0; i < length; i++) //loop to the size of an array
{
maxEnd = maxEnd + num[i]; //add the arry value to the maxEnd
if (maxFar < maxEnd) //check if the maxFar < maxEnd
maxFar = maxEnd; //set the maxFar to maxEnd

if (maxEnd < 0) //chcek if the maxEnd < 0
maxEnd = 0; //set the maxend to 0
}
return maxFar; //return maxFar
}
