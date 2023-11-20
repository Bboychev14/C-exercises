#include "String.h"

int main() {
    ca::String str1("Finally Made the");
    ca::String str2(" Stupid String");

    ca::String str3 = str1 + str2;
    std::cout << str3.c_str() << std::endl;
    std::cout << "Size: " << str3.size() << std::endl;

    return 0;
}