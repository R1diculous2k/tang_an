#include <iostream>
#include <string>

   using namespace std;

   int main()
   {
       double a = 0;
       double b = 0;
       double c = 0;
       double d = 0;
       double e = 0;
       double f = 0;

   cout <<"Enter account number(or -1 to quit):";
   cin >> a;
   while (a!=-1);
  {

      cout <<"Enter begainning balance:";
      cin >> b;
      cout <<"Enter total charges:";
      cin >> c;
      cout <<"Enter total credits:";
      cin >> d;
      cout <<"Enter credit limit:";
      cin >> e;
      f = b+c-d;


      if(f>e)
      {
      cout <<"Account:"<<a<<endl;
      cout <<"New balance is:"<<f<<endl;
      cout <<"Credit limit;"<<e<<endl;
      cout <<"Credit limit Exceeded:"<<endl;
      cout <<"Enter amount number (or -1 to exit):"<<endl;
  }
      else
    cout <<"New balacne is"<<a+f<<endl;
    cout <<"Enter amount number (or -1 to exit):"<<endl;
    cin >>a;
}
   return 0;

   }

