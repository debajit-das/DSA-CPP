// Write a program that takes basic salary, Dearness Allowance (DA) as a percentage, and House Rent Allowance (HRA) as a percentage as input, and calculates the gross salary using formulas (gross = basic + DA% * basic + HRA% * basic)

#include <iostream>

using namespace std;

int main()
{
    double basicSalary, daPercentage, hraPercentage, grossSalary;

    cout << "Enter basic salary: ";
    cin >> basicSalary;

    cout << "Enter Dearness Allowance percentage (e.g., 15 for 15%): ";
    cin >> daPercentage;

    cout << "Enter House Rent Allowance percentage (e.g., 10 for 10%): ";
    cin >> hraPercentage;

    // Calculate DA and HRA amounts (as percentages of basic salary)
    double daAmount = basicSalary * (daPercentage / 100);
    double hraAmount = basicSalary * (hraPercentage / 100);

    // Calculate gross salary
    grossSalary = basicSalary + daAmount + hraAmount;

    cout << "Gross salary: " << grossSalary << endl;

    return 0;
}
