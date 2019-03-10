#include <iostream>
using namespace std;
class Matrix
{
	private:
		int a[2][3];
	public:
		friend Matrix operator+(Matrix&A,Matrix&B);
		friend ostream& operator<<(ostream&,Matrix&);
		friend istream& operator>>(istream&,Matrix&);
		Matrix(){};
};

Matrix operator+(Matrix&A,Matrix&B)
{
	Matrix C;
	for(int i=0;i<2;i++)
     for(int j=0;j<3;j++)
      C.a[i][j]=A.a[i][j]+B.a[i][j];
	return C;
}

istream & operator >> (istream &input,Matrix &a)
{
    cout<<"请输入矩阵： "<<endl;
  for(int i=0;i<2;i++)
   for(int j=0;j<3;j++)
    input>>a.a[i][j];
  return input;
}

ostream & operator << (ostream &output,Matrix &C)
{
  cout<<"结果为："<<endl;
  for(int i=0;i<2;i++)
  {
   for(int j=0;j<3;j++)
    output<<C.a[i][j]<<" ";
   cout<<endl;
	}
  return output;
}

int main()
{
	Matrix
	 A,B,C;
	cin>>A;
	cin>>B;
	C=A+B;
	cout<<C;
	return 0;
}
