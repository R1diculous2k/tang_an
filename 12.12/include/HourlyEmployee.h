#ifndef HOURLYEMPLOYEE_H_INCLUDED
#define HOURLYEMPLOYEE_H_INCLUDED

#include "Employee.h"

class HourlyEmployee : public Employee
{
public:
   static const int hoursPerWeek = 168;
   HourlyEmployee( const std::string &, const std::string &,
      const std:: string &, int, int, int, double = 0.0, double = 0.0 );
   virtual ~HourlyEmployee() { }

   void setWage( double );
   double getWage() const;

   void setHours( double );
   double getHours() const;

   virtual double earnings() const override;
   virtual void print() const override;
private:
   double wage;
   double hours;
};

#endif // HOURLYEMPLOYEE_H_INCLUDED
