#include<iostream>
using namespace std;
int main() {
    float annualSalary;
    cout << "Enter Your Annual Salary :";
    cin >> annualSalary;
    float monthlySalary = annualSalary/12;
    cout << "Your Monthly Salary Is : " <<monthlySalary;
    return 0;
}
