// 
#include <iostream>
using namespace std;

class Fruit {
public:
    int num_fruits;
public:
    // parameterized Constructor
    Fruit(int num) : num_fruits(num) {} 
};

class Apples : public Fruit {
public:
    Apples(int num) : Fruit(num) {}                 // At Lasttttttt
    void print_apples() {
        cout << "Number of apples: " << num_fruits << endl;
    }
};

class Mangoes : public Fruit {
public:
    Mangoes(int num) : Fruit(num) {}
    void print_mangoes() {
        cout << "Number of mangoes: " << num_fruits << endl;
    }
};

class Basket {
public:
    Basket(Apples apples, Mangoes mangoes) {
        total_fruits = apples.num_fruits + mangoes.num_fruits;
    }
    void print_total_fruits() {
        cout << "Total number of fruits in the basket: " << total_fruits << endl;
    }
private:
    int total_fruits;
};

int main() {
    Apples apples(10);
    Mangoes mangoes(5);

    apples.print_apples();
    mangoes.print_mangoes();

    Basket basket(apples, mangoes);
    basket.print_total_fruits();

    return 0;
}


    // Fruit(int num) : num_fruits(num) {} 

// Fruit is a base class that has a member variable num_fruits to store the number of fruits. The Fruit constructor takes an integer parameter num, which is used to initialize the num_fruits member variable.

// The syntax : num_fruits(num) is called a member initialization list. It is used to initialize the member variables of the class. In this case, it initializes the num_fruits member variable of the Fruit class with the value of the num parameter passed to the constructor.

// Using a member initialization list to initialize the member variables of a class is generally preferred over assigning values to them in the constructor body, because it can lead to better performance and avoid some subtle bugs in certain cases.



    // Apples(int num) : Fruit(num) {}               

// This code snippet is a constructor for a class called Apples that inherits from a class called Fruit.
// The constructor takes an integer parameter num, which is passed to the base class constructor Fruit(num) using initialization list syntax..
// Assuming that the Fruit class has a constructor that takes an integer parameter, this code initializes an instance of the Apples class with the given num value passed to the Fruit constructor.