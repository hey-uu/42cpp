#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include "Data.hpp"
#include <cstdint>

class Serializer
{
private:
    Serializer();
    Serializer(Serializer const& other);
    Serializer& operator=(Serializer const& other);
    ~Serializer();

public:
    static uintptr_t serialize(Data* ptr);
    static Data*     deserialize(uintptr_t raw);
};

#endif