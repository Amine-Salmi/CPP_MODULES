#include "Serializer.hpp"

int main() {
    // Create a Data object
    Data originalData;
    originalData.name = "Amine";
    originalData.age = 24;

    // Print original data
    std::cout << "Original Data address : " << &originalData << std::endl;
    std::cout << "Original Data name   : " << originalData.name << std::endl;
    std::cout << "Original Data age    : " << originalData.age << std::endl;

    // Serialize
    uintptr_t raw = Serializer::serialize(&originalData);
    std::cout << "Serialized value      : " << raw << std::endl;

    // Deserialize
    Data* deserialized = Serializer::deserialize(raw);

    // Print deserialized data
    std::cout << "Deserialized address  : " << deserialized << std::endl;
    std::cout << "Deserialized name    : " << deserialized->name << std::endl;
    std::cout << "Deserialized age     : " << deserialized->age << std::endl;

    // Check if the addresses match
    if (deserialized == &originalData)
        std::cout << "Serialization success: same address!" << std::endl;
    else
        std::cout << "Serialization failed: different address!" << std::endl;

    return 0;
}