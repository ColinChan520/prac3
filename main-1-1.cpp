#include <iostream>
#include <iomanip>
#include "function-1-1.cpp"
using namespace std;

int main() {

string first[3][2] = {{"New York","Los Angeles"},
{"Chicago","Houston"},
{"Philadelphia","San Diego"}};
string second[3][2];
copy_2d_strings(first, second, 3);
cout<<"Values of second two-dimensional array after copy:"<<endl<<endl;
for(int i=0; i<3; i++) {
for(int j=0; j<2; j++) {
cout<<left<<setw(20)<<second[i][j];
}
cout<<endl;
}
return 1;
}

