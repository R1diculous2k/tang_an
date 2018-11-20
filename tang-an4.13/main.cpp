#include <iostream>

using namespace std;

int main()
{
      double a=0,b=0,c=0;
      double sum1=0,sum2=0;

      cout<<"Enter miles drive(-1 to quit)£º";
      cin>>a;


while(a!=-1)
{
      cout<<"Enter gallons used:";
       cin>>b;
       cout<<"MPG this trip:"<<a/b<<endl;
        sum1+=a,sum2+=b;
       cout<<"Total gallom:"<<sum1/sum2<<endl;

       cout<<"Enter miles drive(-1 to quit)£º";
      cin>>a;
 }
 return 0;
}
