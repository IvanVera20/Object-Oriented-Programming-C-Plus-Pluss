//Lab2_num_obj.cpp




#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    //numerical
    int int_example = 1;
    float float_expample = 2.0;
    double double_example = 2.0;

    //non-numerical
    char char_example = 'a';
    bool bool_example = true;

    //sizeof return the number of bytes (8 bytes is equiavalent to 1 byte)
    cout << "int _example: " << sizeof(int_example)<<endl;
    cout << "float_expample: " << sizeof (float_expample) << endl;
    cout << "double_example: " << sizeof (double_example) << endl;

    cout << "char_example: " << sizeof (char_example) << endl;
    cout << "bool_example: " << sizeof (bool_example) << endl;
    
    
    
}