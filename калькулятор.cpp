#include <iostream>
using namespace std;

class calkulator {
private:
	float num_1, num_2;
	
public:
	int plus(int x, int y) {
		x = x + y;
		return x;
	}
	int minus(int x, int y) {
		x = x - y;
		return x;
	}
	void setnum(int x, int y) {
		x = num_1;
		y = num_2;
	}
};
class calkulator_son :public calkulator {
public:
	int dilint(int x, int y) {
		x = x % y;
		return x;
	}
	int div(int x, int y) {
		x = x / y;
		return x;
	}
	int mul(int x, int y) {
		x = x * y;
		return x;
	}
};

int main()
{
	float num_1, num_2;
	cin >> num_1 >> num_2;
	calkulator_son ex;
	int plus,minus,mul,div,dilint,divdiv;
	ex.setnum(num_1, num_2);
	plus = ex.plus(num_1, num_2);
	cout << plus << endl;
	minus = ex.minus(num_1, num_2);
	cout << minus << endl;
	mul = ex.mul(num_1, num_2);
	cout << mul << endl;
	div = ex.div(num_1, num_2);
	cout << div << endl;
	dilint = ex.dilint(num_1, num_2);
	cout << dilint << endl;
}