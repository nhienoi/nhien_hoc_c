#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>
using namespace std;
int main() {
    srand(time(NULL));
    int arr[10];
    for (int i = 0; i <= 9; i++) {
        arr[i] = rand() % 10 + 1;
    }    
    for (int i = 0; i <= 9; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}