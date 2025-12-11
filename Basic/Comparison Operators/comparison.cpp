#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a, b;

	cin >> a >> b;

	cout << "a : "<< a <<endl;
	cout << "b : "<< b <<endl;
	cout << endl;


	//akan menghasilkan nilai true/false(1/0)
	cout << "a == b : " << (a == b) <<endl; // sama dengan
	cout << "a != b : " << (a != b) <<endl; // tidak sama dengan
	cout << "a < b : " << (a < b) <<endl; // lebih kecil dari
	cout << "a > b : " << (a > b) <<endl; // lebih besar dari
	cout << "a <= b : " << (a <= b) <<endl; // lebih kecil atau sama dengan
	cout << "a >= b : " << (a >= b) <<endl; // lebih besar atau sama dengan



	return 0;
}