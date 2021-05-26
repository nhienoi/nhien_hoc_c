#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	double math_score, physics_score, chemist_score;
	cin >> math_score >> physics_score >> chemist_score;
	double average = (math_score + physics_score + chemist_score) / 3;
	cout << "the average is: " << setprecision(3) << average;	
	return 0;
}
