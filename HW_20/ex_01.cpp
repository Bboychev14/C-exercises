#include <iostream>
#include <string>
#include <vector>
#include <memory>

using smp = std::shared_ptr<const std::string>;

class Cache
{
public:
    smp GetSetName(std::string tempName);

private:
    std::vector<smp> names;
};

smp Cache::GetSetName(std::string tempName)
{
    for (auto name : names)
    {
        if (tempName == *name)
        {
            return name;
        }
    }
    auto nameP = std::make_shared<const std::string>(tempName);
    names.push_back(nameP);
    return nameP;

}

int main()
{
    Cache cNames;
    smp n1 = cNames.GetSetName("Radka");
    smp n2 = cNames.GetSetName("Gosho");
    smp n3 = cNames.GetSetName("Radka");
    smp n4 = cNames.GetSetName("Radka");
    std::cout << "n1: " << n1 << "\n" << "n2: " << n2 << "\n" << "n3: " << n3 << "\n" << "n4: " << n4;
    //n1, n3 and n4 have the same address so it works.

    return 0;

}