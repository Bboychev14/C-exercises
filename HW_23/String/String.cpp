#include "String.h"

ca::String::String() : data_(nullptr), size_(0) {}

ca::String::String(const char* str) : data_(nullptr), size_(0)
{
    if(str != nullptr)
    {
        size_ = std::strlen(str);
        data_ = new char[size_ + 1];
        std::strcpy(data_, str);
    }
}

ca::String::String(const ca::String& other) : data_(nullptr), size_(other.size_)
{
    if (other.data_ != nullptr)
    {
        data_ = new char[size_ + 1];
        std::strcpy(data_, other.data_);
    }
}

ca::String::~String()
{
    delete[] data_;
}

ca::String& ca::String::operator=(const ca::String& other)
{
    if (this != &other)
    {
        delete[] data_;
        size_ = other.size_;
        if (other.data_ != nullptr)
        {
            data_ = new char[size_ + 1];
            std::strcpy(data_, other.data_);
        }
        else
        {
            data_ = nullptr;
        }
    }
    return *this;
}

ca::String ca::String::operator+(const ca::String& other) const
{
    ca::String result;
    result.size_ = size_ + other.size_;
    result.data_ = new char[result.size_ + 1];
    if (data_ != nullptr)
    {
        std::strcpy(result.data_, data_);
    }
    if (other.data_ != nullptr)
    {
        std::strcat(result.data_, other.data_);
    }
    return result;
}

char& ca::String::operator[](size_t index)
{
    if (index >= size_)
    {
        std::cerr << "Index out of range!" << std::endl;
        //Should return sth here so that the function doesn't reach the code after the if statement!
    }
    return data_[index];
}

size_t ca::String::size() const
{
    return size_;
}

const char* ca::String::c_str() const
{
    return data_;
}