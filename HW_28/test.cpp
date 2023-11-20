#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <stdexcept>

template <typename T, size_t N>
struct Array
{
    T elems_[N];
    using size_type = size_t;

    template<typename It>
    Array(It beg, It end)
    {
        auto dst = std::begin(elems_);
        auto dstend = std::end(elems_);

        for (; beg != end && dst != dstend; ++beg, ++dst)
            *dst = *beg;
        
        std::fill(dst, dstend, T{});
    }
    constexpr size_type size() const { return N; }
    constexpr size_type max_size() const { return size(); }

    constexpr T& operator[](size_type i) { return elems_[i]; }
    constexpr const T& operator[](size_type i) const { return const_cast<Array*>(this)->operator[](i); }
    T& at(size_type i)
    {
        if (i >= N)
        {
            throw std::out_of_range("Array::at: Index out of bounds!");
        }
        return elems_[i];
    }
    const T& at(size_type i) const
    {
        return const_cast<Array*>(this)->at(i);
    }
    T& front() { return elems_[0]; }
    const T& front() const { return const_cast<Array*>(this)->front(); }
    T& back() { return elems_[N - 1]; }
    const T& back() const { return const_cast<Array*>(this)->back(); }
    
    bool empty() const { return N == 0; }

    void fill(const T& value)
    {
        for (size_type i = 0; i < N; ++i)
        {
            elems_[i] = value;
        }
    }

    T* data() { return elems_; }
    const T* data() const { return const_cast<Array*>(this)->data(); }
};

int main()
{
    std::list<int> li{ 5, 6, 7 };
    std::string str{"hi"};

    Array<int, 3> arr(li.cbegin(), li,cend());
    Array<char, 2> arr2(str.cbegin(), str.cend());
}