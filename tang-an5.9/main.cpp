#include <iostream>

using namespace std;

int main()
{
    int a=1;

   for(unsigned int n=1;n<=15;++n)
   {
       if(n%2!=0)
       {

           cout<<n<<endl;
           a*=n;
       }

   }

       cout<<"ji"<<a<<endl;
    return 0;
}
