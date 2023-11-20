#include <iostream>
#include <cstring>

namespace ca
{
    class String
    {
    public:
        String();
        String(const char* str);
        String(const String& other);
        ~String();

        String& operator=(const String& other);
        String operator+(const String& other) const;

        char& operator[](size_t index);
        size_t size() const;
        const char* c_str() const;

    private:
        char* data_;
        size_t size_;
    };
}