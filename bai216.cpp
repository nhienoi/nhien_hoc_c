#include <iostream>
using namespace std;

struct people {
    people(int t, float v1, float cc) {
        tuoi = t;
        vong_mot = v1;
        chieu_cao = cc;
    }
    int tuoi;
    float vong_mot;
    float chieu_cao;
};

int main() {
    people thao(22, 95, 175);
    people trang(18, 98, 170);
    people anh(29, 85, 160);
    
    return 0;
}