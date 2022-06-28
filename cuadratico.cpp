#include <iostream>
#include <cmath>
using namespace std;

class cuadratica{
public:
	cuadratica(double x = 0, double y = 0, double z = 0){
		this->x=x;
		this->y=y;
		this->z=z;
	}
	cuadratica(const cuadratica& a) = default;
	cuadratica& operator=(cuadratica a){
		if (this == &a){
			return *this;
		}
		x = a.obtX();
		y = a.obtY();
		y = a.obtZ();
		return *this;
	}
	double operator()(double a){
		cout<<"Funcion "<<x<<"*("<<a<<"^"<<2<<") + "<<y<<"*"<<x<<" + "<<z<<" = ";
		return (x*pow(a,2))+(y*a)+z;
	}

	double obtX(){
		return x;
	}
	double obtY(){
		return y;
	}
	double obtZ(){
		return z;
	}
private:
	double x;
	double y;
	double z;
};

int main(int argc, char *argv[]) {
	cuadratica x(5,3,8);
	cout<<x(3);

	return 0;
}
