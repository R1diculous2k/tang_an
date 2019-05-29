#ifndef Employee_H
#define Employee_H
#include <string>
#include "Date.h"

class Employee
{
public:
   Employee( const std::string &, const std::string &, const std::string &,
      int, int, int );

   void setFirstName( const std::string & );
   std::string getFirstName() const;

   void setLastName( const std::string & );
   std::string getLastName() const;

   void setSocialSecurityNumber( const std::string & );
   std::string getSocialSecurityNumber() const;

   void setBirthDate( int, int, int );
   Date getBirthDate() const;

   virtual double earnings() const = 0;
   virtual void print() const;
private:
   string firstName;
   string lastName;
   string socialSecurityNumber;
   Date birthDate;
};

#endif
