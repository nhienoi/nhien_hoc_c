#include <iostream>
#include <string.h>
using namespace std;
struct student {
	string name;
	int age;
	int score;
};
int main() {
	int n;
	cin >> n;
	student *students = new student[100];
	for (int i = 0; i < n; i++) {
		cout << "nhap em hoc sinh nguc to so:" << i;
		cin >> students[i].name;
		cout << endl;
		cout << "tuoi cua em no la: ";
		cin >> students[i].age;
		cout << endl;
		cout << "diem so cua em no la: ";
		cin >> students[i].score;
		cout << endl;
	}
	student max = students[0];
	for (int i = 0; i < n; i++) {
		if (students[i].score > max.score) {
			max = students[i];
		}
	}
	cout << "em hoc sinh nguc to nhat ten la: ";
	cout << max.name;
	cout << endl;
	cout << "em ay nam nay "<< max.age <<" du tuoi de thit roi";
	cout << endl;
	cout << "diem so cua em ay la "<< max.score; 
	return 0;
}
