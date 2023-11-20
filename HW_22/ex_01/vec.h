#pragma once
#include <cstddef>
#include <cstring>

template<typename T>
class Vec
{
public:
    Vec()
    {
        ReAlloc(2);
    }

    Vec(size_t cap)
    {
        m_Data = new T[cap];
        for (size_t i = 0; i < cap; ++i)
        {
            m_Data[i] = 0;
        }
        m_Size = cap;
        m_Capacity = cap;
    }

    Vec(int num, size_t cap)
    {
        m_Data = new T[cap];
        for (size_t i = 0; i < cap; ++i)
        {
            m_Data[i] = num;
        }
        m_Size = cap;
        m_Capacity = cap;
    }

    Vec(const Vec& other)
    {
        m_Data = new T[other.m_Capacity];
        m_Size = other.m_Size;
        m_Capacity = other.m_Capacity;
        std::memmove(m_Data, other.m_Data, other.m_Size * sizeof(T));

    }
    
    T At(size_t idx)
    {
        return m_Data[idx];
    }

    void PushBack(const T& value)
    {
        if (m_Size >= m_Capacity)
        {
            ReAlloc(m_Capacity * 2);
        }
        m_Data[m_Size] = value;
        m_Size++;
    }
    
    void Reserve(size_t cap)
    {
        if (m_Capacity >= cap)
        {
            return;
        }
        if (m_Data != nullptr)
        {
            T* temp = new T[cap];
            std::memmove(temp, m_Data, m_Size * sizeof(T));
            delete[] m_Data;
            m_Data = temp;
        }
        else
        {
            delete[] m_Data;
            m_Data = new T[cap];
        }
        m_Capacity = cap;
    }

    ~Vec()
    {
        delete[] m_Data;
    }

    const T& operator[](size_t index) const
    {
        return m_Data[index];
    }

/*     T& operator[](size_t index) const
    {
        return m_Data[index];
    } */

    size_t Size() const
    {
        return m_Size;
    }

private:
    T* m_Data = nullptr;
    size_t m_Size = 0;
    size_t m_Capacity = 0;
    void ReAlloc(size_t newCapacity)
    {
        T* newBlock = new T[newCapacity];
        if (newCapacity < m_Size)
        {
            m_Size = newCapacity;
        }
        for (size_t i = 0; i < m_Size; ++i)
        {
            newBlock[i] = m_Data[i];
        }
        delete[] m_Data;
        m_Data = newBlock;
        m_Capacity = newCapacity;
    }
};