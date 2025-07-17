#pragma once

#include <iostream>
#include <string>

typedef struct Data
{
    std::string name;
    int age;
} Data;


class Serializer {
private:
    Serializer();
    Serializer(const Serializer &copy);
    ~Serializer();

    Serializer &operator=(const Serializer &other);

public:
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};