#include <iostream>
#include <string>
using namespace std;

struct Employee 
{
    int id;
    string name;
    float salary;
};

// Function to input employee data
void InputEmployeeData(Employee employees[], int count) 
{
    for (int i = 0; i < count; i++) 
	{
        cout << "Enter details for employee " << i + 1 << ":" <<endl;
        cout << "ID: ";
        cin >> employees[i].id;
        cin.ignore();
        cout << "Name: ";
        getline(cin, employees[i].name);
        cout << "Salary: ";
        cin >> employees[i].salary;
    }
}

// Function to display all employee records
void DisplayEmployeeData(const Employee employees[], int count) 
{
    cout << "Employee Records:" <<endl;
    for (int i = 0; i < count; i++) 
	{
        cout << "ID: " << employees[i].id << ", Name: " << employees[i].name << ", Salary: " << employees[i].salary << endl;
    }
}

// Function to find and display the employee with the highest salary
void FindHighestSalary(const Employee employees[], int count) 
{
    if (count == 0) {
        cout << "No employee records available." << endl;
        return;
    }
    
    int highestIndex = 0;
    for (int i = 1; i < count; i++) 
	{
        if (employees[i].salary > employees[highestIndex].salary) 
		{
            highestIndex = i;
        }
    }
    
    cout << "Employee with the highest salary:" <<endl;
    cout << "ID: " << employees[highestIndex].id << ", Name: " << employees[highestIndex].name << ", Salary: " << employees[highestIndex].salary << endl;
}

int main() 
{
    int numEmployees;
    
    cout << "Enter the number of employees: ";
    cin >> numEmployees;
    
    if (numEmployees <= 0) 
	{
        cout << "Invalid number of employees!" << endl;
        return 1;
    }
    
    Employee employees[numEmployees];
    
    InputEmployeeData(employees, numEmployees);
    DisplayEmployeeData(employees, numEmployees);
    FindHighestSalary(employees, numEmployees);
    
    return 0;
}

