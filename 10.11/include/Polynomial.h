#ifndef Polynomial_H
#define Polynomial_H


#include<iostream>

class Polynomial
{
public:
	Polynomial();//默认构造函数，多项式的大小是10
	Polynomial(int _size);//一个参数的构造函数，表示这个的项数
	Polynomial(const Polynomial &poly);//拷贝构造函数
	Polynomial(double* _coefficients,int _size);//有参数的构造函数
	~Polynomial();//析构函数
	void tellInfor();//输出信息
	void setcoefficient(int num,double coefficient);//改变第num的系数为coefficient
	double getcoefficient(int num);//得到第num的系数


	Polynomial& operator=(const Polynomial& poly);//赋值运算符重载

	//多项式与常量之间的+，-，*的运算符重载,使用友元函数
	friend Polynomial operator+(const Polynomial& poly,double num);
	friend Polynomial operator+(double num,const Polynomial& poly);
	friend Polynomial operator-(const Polynomial& poly,double num);
	friend Polynomial operator-(double num,const Polynomial& poly);
	friend Polynomial operator*(const Polynomial& poly,double num);
	friend Polynomial operator*(double num,const Polynomial& poly);

	//多项式与多项式之间的+，-，*的运算符重载,使用友元函数
	friend Polynomial operator+(const Polynomial& p1,const Polynomial& p2);
	friend Polynomial operator-(const Polynomial& p1,const Polynomial& p2);
	friend Polynomial operator*(const Polynomial& p1,const Polynomial& p2);


private:
	double *coefficients;//动态数组，表示各个系数
	int size;//这个多项式的大小
};
#endif // Polynomial_H
