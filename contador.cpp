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
	contador a(1);
	++a;
	cout<<"Valor de a: "<<a.valor()<<endl;
	cout<<"Número de objetos contador: "<<a.nobjetos()<<endl;
	contador b(5);
	b++;
	cout<<"Valor de b: "<<b.valor()<<endl;
	cout<<"Número de objetos contador: "<<b.nobjetos()<<endl;
	
	return 0;
}
