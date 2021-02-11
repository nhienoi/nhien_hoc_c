#include<iostream>

using namespace std;

int main() {
    string s;
    char c;
    cin >> s >> c;
    int index = -1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == c) {
            index = i;
            /*
            Gọi lệnh break để dừng vòng lặp do
            đã tìm thấy vị trí đầu tiên mà ký tự c xuất hiện.
            Nếu không có lệnh break thì kết quả của chương trình
            sẽ là vị trí cuối cùng mà ký tự c xuất hiện.
            */
            break;
        }
    }
    cout << index;
    return 0;
}