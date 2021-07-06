#include <iostream>
using namespace std;

class Student {
    private:
        string maSinhVien, ten, queQuan;
        int tuoi;
        float diemToan, diemLi, diemHoa;
    public:
        void set() {
            cout << "nhap ten: ";
            cin >> this -> ten;
            cout << "maSinhVien: ";
            cin >> this -> maSinhVien;
        };
        void print() {
            cout << this -> ten;
            cout << endl;
            cout << this -> maSinhVien;
        }
};  


int main() {
    Student ly;
    Student Duong;
    ly.set();
    ly.print();
    return 0;
}