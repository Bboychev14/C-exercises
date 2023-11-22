#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Order
{
public:
    Order(const string& stats, const string& prio) : status(stats), priority(prio) {}

    const string& getStatus() const
    {
        return status;
    }
    const string& getPriority() const
    {
        return priority;
    }
private:
    string status;
    string priority;
};

using fp = void (*)(vector<Order>&);

void SortOrders(vector<Order>& vec, fp func);

void SortOrdersByStatus(vector<Order>& vec);

void SortOrdersByPriority(vector<Order>& vec);

int main()
{
    Order order1("started", "high prio");
    Order order2("not started", "normal prio");
    Order order3("started", "normal prio");
    Order order4("not started", "high prio");

    vector<Order> orders = {order4, order3, order2, order1};
    SortOrders(orders, SortOrdersByPriority);
    SortOrders(orders, SortOrdersByStatus);

    return 0;

}

void SortOrders(vector<Order>& vec, fp func)
{
    func(vec);
}

void SortOrdersByPriority(vector<Order>& vec)
{
    int size = vec.size();
    for (int i = 0; i < size - 1; ++i)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j)
        {
            if (vec[j].getPriority() < vec[minIndex].getPriority())
            {
                minIndex = j;
            }
        }
        if (i != minIndex)
        {
            swap(vec[i], vec[minIndex]);
        }
    }
}

void SortOrdersByStatus(vector<Order>& vec)
{
    int size = vec.size();
    for (int i = 0; i < size - 1; ++i)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j)
        {
            if (vec[j].getStatus() > vec[minIndex].getStatus())
            {
                minIndex = j;
            }
        }
        if (i != minIndex)
        {
            swap(vec[i], vec[minIndex]);
        }
    }
}