#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int bitsPerByte = CHAR_BIT;
    size_t intSizeBytes = sizeof(int);
    size_t floatSizeBytes = sizeof(float);
    size_t charSizeBytes = sizeof(char);
    size_t boolSizeBytes = sizeof(bool);
    size_t doubleSizeBytes = sizeof(double);

    cout << "Size of 'int' in bytes: " << intSizeBytes << endl;
    cout << "Size of 'int' in bits: " << intSizeBytes * bitsPerByte << endl;

    cout << "Size of 'float' in bytes: " << floatSizeBytes << endl;
    cout << "Size of 'float' in bits: " << floatSizeBytes * bitsPerByte << endl;

    cout << "Size of 'char' in bytes: " << charSizeBytes << endl;
    cout << "Size of 'char' in bits: " << charSizeBytes * bitsPerByte << endl;

    cout << "Size of 'bool' in bytes: " << boolSizeBytes << endl;
    cout << "Size of 'bool' in bits: " << boolSizeBytes * bitsPerByte << endl;

    cout << "Size of 'double' in bytes: " << doubleSizeBytes << endl;
    cout << "Size of 'double' in bits: " << doubleSizeBytes * bitsPerByte << endl;

    return 0;

}