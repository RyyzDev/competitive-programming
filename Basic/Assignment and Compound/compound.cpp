#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a, b;

	cin >>a;

	b = 12;

	cout << "Nilai b sekarang adalah "<< b<<endl;
	b += a;
	cout << "Nilai b sekarang adalah "<< b<<endl;
	b -= a;
	cout << "Nilai b sekarang adalah "<< b<<endl;
	b *= a;
	cout << "Nilai b sekarang adalah "<< b<<endl;
	b /= a;
	cout << "Nilai b sekarang adalah "<< b<<endl;
	b %= a;
	cout << "Nilai b sekarang adalah "<< b<<endl;


	//increment
	b++;
	cout << "Nilai b sekarang adalah "<< b<<endl;
	//decrement
	b--;
	cout << "Nilai b sekarang adalah "<< b<<endl;


	return 0;
}