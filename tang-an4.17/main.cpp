#include <iostream>

using namespace std;

int main()
{
    int a=0,b=0,counter=0;


while(counter<=10)

{
    cout<<"Enter the number:";
    cin>>a;

if(a>=b)
    cout<<"The largest number:"<<a<<endl;

else
    cout<<"The largest number:"<<b<<endl;
    counter++;
    b=max(a,b);
}
    return 0;
}
