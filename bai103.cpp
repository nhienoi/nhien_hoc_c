#include <iostream>
using namespace std;
int main() {
	int a, b;
	char c;
	cout << "nhap theo cu phap:  a _toan -tu_ b , Khanh Ly ngon se giup ban giai quyet van de: ";
	cin >> a >> c >> b;
	switch(c) {
		case '+':
			cout << "a + b =: " << a + b;
			break;
		case '-': 
			cout << "a - b =: " << a - b;
			break;
		case '*': 
			cout << "a * b=: " << a * b;
			break;
		case '/':
			cout << "a / b =: " << a / b;
			break;
 		default: 
			cout << "nhap sai roi ! Khanh Ly nguc to yeu cau nhap lai";
	}	
	return 0;
}
