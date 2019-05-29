#include <iostream>
#include <iomanip>
#include <vector>
#include <typeinfo>
#include <ctime>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "HourlyEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
using namespace std;

int main()
{
   cout << fixed << setprecision( 2 );
   SalariedEmployee salariedEmployee(
      "John", "Smith", "111-11-1111", 4, 20, 1940, 800 );
   HourlyEmployee hourlyEmployee(
      "Xue", "Lulu", "222-22-2222", 12, 29, 1960, 16.75, 40 );
   CommissionEmployee commissionEmployee(
      "Sue", "Jones", "333-33-3333", 9, 8, 1954, 10000, .06 );
   BasePlusCommissionEmployee basePlusCommissionEmployee(
      "Bob", "Lewis", "444-44-4444", 3, 2, 1965, 5000, .04, 300 );

   cout << "Employee processed individually using static binding:\n\n";

   salariedEmployee.print();
   cout<<"\nearned $"<<salariedEmployee.earnings()<<"\n\n";
   hourlyEmployee.print();
   cout<<"\nearned $"<<hourlyEmployee.earnings()<<"\n\n";
   commissionEmployee.print();
   cout<<"\nearned $"<<commissionEmployee.earnings()<<"\n\n";
   basePlusCommissionEmployee.print();
   cout<<"\nearned $"<<basePlusCommissionEmployee.earnings()<<"\n\n";

   vector <Employee * >employees(4);

   employees[0] = &salariedEmployee;
   employees[1] = &hourlyEmployee;
   employees[2] = &commissionEmployee;
   employees[3] = &basePlusCommissionEmployee;

   cout<<"Employees processed polymorphically via dynamic binding:\n\n";

   cout<<"Virtual function calls made off base-class pointers:\n\n";

   for(const Employee *employeePtr : employees)
    virtualViaPointer(employeePtr);
   cout<<"Virtual function calls made off base-class references:\n\n";

   for{const Employee *employeePtr : employees}
     virtualViaReference(*employeePtr);
}
