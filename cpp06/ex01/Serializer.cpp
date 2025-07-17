#include "Serializer.hpp"


Serializer::Serializer() {};

Serializer::Serializer(const Serializer &copy){
    (void)copy;
}

Serializer &Serializer::operator=(const Serializer& other) {
    (void)other;
    return (*this);
}

uintptr_t Serializer::serialize(Data* originalPtr) {
    uintptr_t serializingValue = reinterpret_cast<uintptr_t>(originalPtr);
    return (serializingValue);
}

Data* Serializer::deserialize(uintptr_t raw) {
    Data *originalPtr  = reinterpret_cast<Data *>(raw);
    return (originalPtr);
}