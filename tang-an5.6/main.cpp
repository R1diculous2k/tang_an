#include <iostream>

using namespace std;


int main()
{

    int sum=0,average=0;


   for(unsigned int counter=0,n=0;counter!=9999;++n)
   {
       cout<<"ÊäÈë£º";
       cin>>counter;
     sum+=counter;

     average=sum/++n;
     cout<<average<<endl;

   }

    return 0;
}
