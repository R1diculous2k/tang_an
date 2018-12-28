#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int sum=0;

    cout<<"input numbers:";
    cin>>a;


    for(unsigned int counter=1;counter<=5;++counter)
    {
        cout<<counter*100<<endl;

    sum+=counter*100;
    cout<<"sum=:"<<sum<<endl;
    }

    return 0;
}
