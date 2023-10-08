// Write a program that takes as input your gross salary and your total saving and uses another function named taxCalculator() to calculate your tax. The taxCalculator() function takes as parameters the gross salary as well as the total savings amount. The tax is calculated as follows:
// (a) The savings is deducted from the gross income to calculate the taxable income. Maximum deduction of savings can be Rs. 100,000, even though the amount can be more than this.
// (b) For up to 100,000 as taxable income the tax is 0 (Slab 0); beyond 100,000 to 200,000 tax is 10% of the difference above 100,000 (Slab 1); beyond 200,000 up to 500,000 the net tax is the tax calculated from Slab 0 and Slab 1 and then 20% of the taxable income exceeding 200,000 (Slab 2); if its more than 500,000, then the tax is tax from Slab 0, Slab 1, Slab 2 and 30% of the amount exceeding 500,000.

#include <iostream>
using namespace std;

float taxCalculator(float gross_salary, float total_savings) {
    float taxable_income = max(gross_salary - total_savings, 0.0f);
    taxable_income = min(taxable_income, 500000.0f);
    float tax = 0.0f;
    if (taxable_income > 200000.0f) {
        tax += (taxable_income - 200000.0f) * 0.20f;
        taxable_income = 200000.0f;
    }
    if (taxable_income > 100000.0f) {
        tax += (taxable_income - 100000.0f) * 0.10f;
    }
    return tax;
}

int main() {
    float gross_salary, total_savings;
    cout << "Enter your gross salary: ";
    cin >> gross_salary;
    cout << "Enter your total savings: ";
    cin >> total_savings;
    float tax = taxCalculator(gross_salary, total_savings);
    cout << "Your tax is: Rs. " << tax << endl;
    return 0;
}



// In the C++ program I provided, the f at the end of some of the numbers is used to indicate that those values should be treated as floats. In C++, a numeric literal without any suffix is treated as a double by default. However, if you append the f suffix to a numeric literal, it tells the compiler to treat it as a float.

// For example, 0.20f tells the compiler to treat 0.20 as a float, rather than a double. Similarly, 0.0f tells the compiler to treat 0.0 as a float. This is important because the taxCalculator() function expects float parameters, so we need to make sure that the values we pass to it are also floats.