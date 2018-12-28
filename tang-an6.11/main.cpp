#include <iostream>
#include <cmath>
using namespace std;
double fabs();
double floor();

double ceil();

int main()
{
    cout<<"fabs(7.5)"<<fabs(7.5)<<endl;
    cout<<"floor(7.5)"<<floor(7.5)<<endl;
    cout<<"fabs(0.0)"<<fabs(0.0)<<endl;
    cout<<"ceil(0.0)"<<ceil(0.0)<<endl;
    cout<<"fabs(-6.4)"<<fabs(-6.4)<<endl;
    cout<<"ceil(-6.4)"<<ceil(-6.4)<<endl;
    cout<<"ceil(-fabs(-8+floor(-5.5)))"<<ceil(-fabs(-8+floor(-5.5)))<<endl;

    return 0;
}
