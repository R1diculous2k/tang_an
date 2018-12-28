
#ifndef TIME_H
#define TIME_H
class Time
{
public:
public:
   Time( int = 0, int = 0, int = 0 );

   void setTime( int, int, int );
   void setHour( int );
   void setMinute( int );
   void setSecond( int );

   int getHour();
   int getMinute();
   int getSecond();
   void tick();
   void printUniversal();
   void printStandard();
private:
   int hour;
   int minute;
   int second;
};
#endif

#include <iostream>
using std::cout;
#include <iomanip>
using std::setfill;
using std::setw;

#include "Time.h"

Time::Time( int hr, int min, int sec )
{
   setTime( hr, min, sec );
}

void Time::setTime( int h, int m, int s )
{
   setHour( h );
   setMinute( m );
   setSecond( s );
}

void Time::setHour( int h )
{
   hour = ( h >= 0 && h < 24 ) ? h : 0;
}

void Time::setMinute( int m )
{
   minute = ( m >= 0 && m < 60 ) ? m : 0;
}

void Time::setSecond( int s )
{
   second = ( s >= 0 && s < 60 ) ? s : 0;
}

int Time::getHour()
{
   return hour;
}

int Time::getMinute()
{
   return minute;
}

int Time::getSecond()
{
   return second;
}

void Time::tick()
{
   setSecond( getSecond() + 1 );
   if ( getSecond() == 0 )
   {
      setMinute( getMinute() + 1 );
      if ( getMinute() == 0 )
         setHour( getHour() + 1 );
   }
}

void Time::printUniversal()
{
   cout << setfill( '0' ) << setw( 2 ) << getHour() << ":"
      << setw( 2 ) << getMinute() << ":" << setw( 2 ) << getSecond();
}

void Time::printStandard()
{
   cout << (( getHour() == 0 || getHour() == 12 ) ? 12 : getHour() % 12 )
      << ":" << setfill( '0' ) << setw( 2 ) << getMinute()
      << ":" << setw( 2 ) << getSecond() << ( hour < 12 ? " AM" : " PM" );
}

#include <iostream>
using std::cout;
using std::endl;
#include "Time.h"
const int MAX_TICKS = 30;
int main()
{
   Time t;
   t.setTime( 23, 59, 57 );

   for ( int ticks = 1; ticks < MAX_TICKS; ++ticks )
   {
      t.printStandard();
      cout << endl;
      t.tick();
   }
   return 0;
}
