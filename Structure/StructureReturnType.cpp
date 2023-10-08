// Function Type Structure
// #include <iostream>

// struct SumDiff {
//   int sum;
//   int diff;
// };

// SumDiff calculateSumDiff(int a, int b) {
//   SumDiff result;
//   result.sum = a + b;
//   result.diff = a - b;
//   return result;
// }

// int main() {
//   int x = 5, y = 3;
//   SumDiff sd = calculateSumDiff(x, y);
//   std::cout << "Sum: " << sd.sum << std::endl;
//   std::cout << "Difference: " << sd.diff << std::endl;
//   return 0;
// }



// Return Type Structure

#include <iostream>
#include <string>

// Define a Person structure
struct Person {
  std::string name;
  int age;
};

// Function to print a Person's name and age
void printPersonInfo(Person p) {
  std::cout << "Name: " << p.name << std::endl;
  std::cout << "Age: " << p.age << std::endl;
}

// Function to modify a Person's age and return the modified Person structure
Person modifyPersonInfo(Person p, int newAge) {
  p.age = newAge;
  return p;
}

int main() {
  // Create a Person object
  Person p = {"John", 30};
  printPersonInfo(p);

  // Modify the Person object's age using the modifyPersonInfo function
  Person p2 = modifyPersonInfo(p, 35);

  // Print the modified Person object's name and age using the printPersonInfo function
  printPersonInfo(p2);

  return 0;
}
