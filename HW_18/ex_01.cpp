#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct Product
{
    Product(const std::string name, int price) : m_name(name), m_price(price) {}
    std::string m_name;
    int m_price;
};

int main()
{
    std::vector<Product> products = {Product("Bread", 2), Product("Cheese", 14), Product("Eggs", 5), Product("milk", 3)};
    std::vector<Product> ascendingProducts = products;
    std::vector<Product> descendingProducts = products;

    std::sort(ascendingProducts.begin(), ascendingProducts.end(), [](const Product& p1, const Product& p2)
    {return p1.m_price < p2.m_price; });
    std::sort(descendingProducts.begin(), descendingProducts.end(), [](const Product& p1, const Product& p2)
    {return p1.m_price > p2.m_price; });

    std::cout << "Products in ascending order: " << std::endl;
    for (auto it = ascendingProducts.begin(); it < ascendingProducts.end(); ++it)
    {
        std::cout << it->m_name << ' ' << it->m_price << std::endl;
    }

    std::cout << "Products in descending order: " << std::endl;
    for (auto it = descendingProducts.begin(); it < descendingProducts.end(); ++it)
    {
        std::cout << it->m_name << ' ' << it->m_price << std::endl;
    }

    return 0;

}