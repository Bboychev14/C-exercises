#pragma once

#include <iostream>
#include <fstream>

class ISerializable
{
public:
    virtual void Serialize(std::string filename) const = 0;
};