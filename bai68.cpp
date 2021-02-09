#include <iostream>
#include <math.h>
using namespace std;
 
int main(){
    int n;
    cout << "\nNhap n = ";
    cin >> n;
    if(n < 2){
        cout << n << " khong phai so nguyen to\n";
        return 0;
    }
    int count = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 0){
        cout << n << " la so nguyen to\n";
    }else{
        cout << n << " khong phai so nguyen to\n";
    }
}