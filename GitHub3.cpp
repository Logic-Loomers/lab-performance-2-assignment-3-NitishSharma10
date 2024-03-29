#include <iostream>
#include <string>

using namespace std;

class Employee {
public:
  string employee_name;
  int hrs_worked;
  int rate_per_hour = 500;
  float tax = 10;

  void getDetails() {
    cout << "\nEnter name of employee: ";
    cin >> employee_name;
    cout << "\nEnter number of hours worked: ";
    cin >> hrs_worked;
  }

  void calculateSalary() {
    salary = hrs_worked * rate_per_hour;
  }

  void displaySalary() {
    cout << "\nSalary of employee " << employee_name << " is: " << salary << endl;
    cout << "\nNet Payroll (after " << tax << "% tax): " << salary * (1 - tax / 100) << endl;
  }

private:
  float salary;
};

int main() {
  cout << "Nitish | 2310997190\n";

  Employee employees[3];

  for (int i = 0; i < 3; i++) {
    employees[i].getDetails();
    employees[i].calculateSalary();
    employees[i].displaySalary();
  }

  return 0;
}
