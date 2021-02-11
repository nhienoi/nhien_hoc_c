// Cho xâu s được nhập từ bàn phím. Bạn hãy viết chương trình chuyển các ký tự in hoa 
// trong xâu s thành in thường và hiển thị xâu s ra màn hình:

// Ví dụ nếu bạn nhập s = "CODELEARN" như bên dưới:
#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++) {
         if(s[i] != 'a' && s[i] != 'b')
         {s[i] += 32;}
         else {
             s[i] -= 32;
         }
    }
    cout << s;
    return 0;
}
