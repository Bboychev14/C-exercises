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


/* template <typename T>
T sum(const std::vector<T>& vec)
{
    static T result;
    for (const auto& t : vec)
    {
        result += t;
    }
    return result;
}

int main()
{
    std::string s1 = "asd";
    std::string s2 = "qwe";
    std::vector v = {s1, s2};
    std::cout << sum(v);
}
 */

/* template <typename A, typename B>
auto sum(const A& p1, const B& p2) -> decltype(p1 + p2)
{
    return p1 + p2;
}

int main()
{
    std::string a = "qwe";
    std::string b = "ab";
    std::cout << sum(3, 2.1);

    return 0;

} */