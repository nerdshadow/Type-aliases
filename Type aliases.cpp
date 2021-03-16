
#include <iostream>

typedef int Numbers;
using AlsoNumbers = int;


int main()
{
    int a = 341;
    Numbers b = 5123;
    AlsoNumbers c = 11328;

    std::cout << a << " <- this is int"<<std::endl;
    std::cout << b << " <- this also int"<<std::endl;
    std::cout << c << " <- also int"<<std::endl;
    std::cout << sizeof(a) <<" = "<< sizeof(b) << " = " << sizeof(c) << std::endl; // the same size 
}
