#include <cmath>
#include <iostream> 
using namespace std;
int main(){
	int soO, soThoc = 0;
	cout << "NHAP SO O: "; cin >> soO;
	for (int i = 0; i < soO; i++) {
		cout << "O so" << i << "Co so thoc la " <<  pow(2,i) << endl;
		soThoc = pow(2, i);
	}
	cout << "Tong so thoc chua trong " << soO << " la " << soThoc << " hat\n";

		return 0;
}
