#include <iostream>

struct Address {
    std::string street;
    std::string city;
    std::string state;
    int zip;
};

struct Person {
    std::string name;
    int age;
    Address address;           // Object of Address
};

int main() {
    Person p = {"John", 30, {"123 Main St", "Anytown", "CA", 12345}};

    std::cout << "Name: " << p.name << std::endl;
    std::cout << "Age: " << p.age << std::endl;
    std::cout << "Address: " << p.address.street << ", " << p.address.city
              << ", " << p.address.state << " " << p.address.zip << std::endl;

    return 0;
}
