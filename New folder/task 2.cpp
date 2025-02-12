#include <iostream>
using namespace std;

// Function to calculate gross salary
float calculateGrossSalary(float basicSalary, float allowancePercentage) 
{
    float allowance =	(basicSalary * (allowancePercentage / 100));
    return basicSalary + allowance;
}

// Function to calculate net salary
float calculateNetSalary(float grossSalary, float deductionPercentage, float basicSalary) 
{
	float deduction = (basicSalary * (deductionPercentage / 100));
    return grossSalary - deduction;
}

int main() 
{
    float basicSalary, allowancePercentage, deductionPercentage;
    
    cout << "Enter Basic Salary: ";
    cin >> basicSalary;
    cout << "Enter Allowance Percentage: ";
    cin >> allowancePercentage;
    cout << "Enter Deduction Percentage: ";
    cin >> deductionPercentage;
    
    float grossSalary = calculateGrossSalary(basicSalary, allowancePercentage);
    float netSalary = calculateNetSalary(grossSalary, deductionPercentage, basicSalary);
    
    cout << "Gross Salary: " << grossSalary << endl;
    cout << "Net Salary: " << netSalary << endl;
    
    return 0;
}

