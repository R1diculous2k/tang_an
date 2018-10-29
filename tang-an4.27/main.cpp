#include<iostream>
using namespace std;
int main()
{ int x=0;
  int xx=0;
  int y=0;
  int k=0;
  cout<<"请输入二进制数：";
  cin>>x;
  xx=x;
 y=0;
k=1;
  while ( xx )
  {
y+=k*xx%10;
  k*=2;
  xx/=10;
}
  cout<<x<<"的十进制数值为"<<y<<endl;
  return 0;
}

