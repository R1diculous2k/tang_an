#ifndef DATE_H
#define DATE_H

class Date
{
public:
   Date( int = 1, int = 1, int = 1900 );
   void print();
   void setDate( int, int, int );
   void setMonth( int );
   void setDay( int );
   void setYear( int );
   int getMonth();
   int getDay();
   int getYear();
   void nextDay();
private:
   int month;
   int day;
   int year;
   bool leapYear();
   int monthDays();
};
#endif

#include <iostream>
using std::cout;

#include "Date.h"

Date::Date( int m, int d, int y )
{
   setDate( m, d, y );
}

void Date::setDate( int mo, int dy, int yr )
{
   setMonth( mo );
   setDay( dy );
   setYear( yr );
}

void Date::setDay( int d )
{
   if ( month == 2 && leapYear() )
      day = ( d <= 29 && d >= 1 ) ? d : 1;
   else
      day = ( d <= monthDays() && d >= 1 ) ? d : 1;
}

void Date::setMonth( int m )
{
   month = m <= 12 && m >= 1 ? m : 1;
}

void Date::setYear( int y )
{
   year = y >= 1900 ? y : 1900;
}

int Date::getDay()
{
   return day;
}

int Date::getMonth()
{
   return month;
}

int Date::getYear()
{
   return year;
}

void Date::print()
{
   cout << month << '-' << day << '-' << year << '\n';
}

void Date::nextDay()
{
   setDay( day + 1 );

   if ( day == 1 )
   {
      setMonth( month + 1 );

      if ( month == 1 )
         setYear( year + 1 );
   }
}

bool Date::leapYear()
{
   if ( year % 400 == 0 || ( year % 4 == 0 && year % 100 != 0 ) )
         return true;
      else
         return false;
}

int Date::monthDays()
{
   const int days[ 12 ] =
     { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

   return month == 2 && leapYear() ? 29 : days[ month - 1 ];
}

#include <iostream>
using std::cout;
using std::endl;

#include "Date.h"

int main()
{
   const int MAXDAYS = 16;
   Date d( 12, 24, 2004 );


   for ( int loop = 1; loop <= MAXDAYS; ++loop )
   {
      d.print();
      d.nextDay();
   }
   cout << endl;
   return 0;
}
