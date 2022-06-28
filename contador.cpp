#include <iostream>
using namespace std;

class contador{
public:
	static int nobjt;
	contador(int val = 0){
		this->val=val;
		++nobjt;
	}
	contador& operator++(){
		++val;
		return *this;
	}
	contador operator++(int){
		contador temp{*this};
		++(*this);
		return temp;
	}
	int valor(){
		return val;
	}
	int nobjetos(){
		return nobjt;
	}
private:
	int val;
};
int contador::nobjt=0;

int main(int argc, char *argv[]) {
	contador x(1);
	++x;
	cout<<"X: "<<x.valor()<<endl;
	cout<<"Nro objetos: "<<x.nobjetos()<<endl;
	contador y(5);
	y++;
	cout<<"Y: "<<y.valor()<<endl;
	cout<<"Nro objetos: "<<y.nobjetos()<<endl;

	return 0;
}
