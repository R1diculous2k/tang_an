#ifndef SALARIEDEMPLOYEE_H_INCLUDED
#define SALARIEDEMPLOYEE_H_INCLUDED

#include <string>
#include "Employee.h"

class SalariedEmployee : public Employee
{
public:
   SalariedEmployee( const std::string &, const std::string &,
      const std::string &, int, int, int, double = 0.0 );
   virtual ~SalariedEmployee() { }
   void setWeeklySalary( double );
   double getWeeklySalary() const;

   virtual double earnings() const override;
   virtual void print() const override;
private:
   double weeklySalary;

#endif
