#include <iostream>
#include <string>

template<typename A, typename B>
void Swap(A& a, B& b)
{
    A temp = a;
    a = b;
    b = temp;
}

int main()
{
    float n1 = 4.4f;
    double n2 = 14.5;
    Swap(n1, n2);
    std::cout << "n1: " << n1 << "    n2: " << n2 << std::endl;
}