#include <iostream>

using namespace std;

int main()
{
   double a=0,b=0,c=0;
   cout<<"Enter hours worked(-1 to quit):";
   cin>>a;

while(a!=-1)
   {cout<<"Enter hourly rate of the employee:";
   cin>>b;
   cout<<"Salary is:"<<a*b<<endl;

if(a>40)
   {
    cout<<"Salary is:"<<400+(a-40)*15<<endl;

}
   cout<<"Enter hours worked(-1 to quit):";
   cin>>a;
   }
    return 0;
}
