class Polynomial{
public:
	Polynomial();
	Polynomial(int _size);
	Polynomial(const Polynomial &poly);
	Polynomial(double* _coefficients,int _size);
	~Polynomial();
	void tellInfor();
	void setcoefficient(int num,double coefficient);
	double getcoefficient(int num);


	Polynomial& operator=(const Polynomial& poly);


	friend Polynomial operator+(const Polynomial& poly,double num);
	friend Polynomial operator+(double num,const Polynomial& poly);
	friend Polynomial operator-(const Polynomial& poly,double num);
	friend Polynomial operator-(double num,const Polynomial& poly);
	friend Polynomial operator*(const Polynomial& poly,double num);
	friend Polynomial operator*(double num,const Polynomial& poly);


	friend Polynomial operator+(const Polynomial& p1,const Polynomial& p2);
	friend Polynomial operator-(const Polynomial& p1,const Polynomial& p2);
	friend Polynomial operator*(const Polynomial& p1,const Polynomial& p2);


private:
	double *coefficients;
	int size;
};
