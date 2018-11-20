#include <iostream>

using namespace std;

int main()
{
   int a = 0;
   int b;
   int c;
   int d;
   cout << "Enter the first number : ";
   cin >> c;
   cout << "Enter next number : ";
   cin >> b;
   if ( b > c )
   {
      d = c;
      c = b;
   }
   else
      d = b;

   a = 2;


   while ( a < 10 )
   {
      cout << "Enter next number : ";
      cin >> b;

      if ( b > c )
      {
         d = c;
         c = b;
      }
      else if ( b > d )
         d = b;

      a++;
   }


   cout << "\Largest is :" <<c<<endl;
   cout<< "Second largest is : " << d << endl;
}
