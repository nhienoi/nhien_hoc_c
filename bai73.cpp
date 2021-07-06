#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
    srand(time(NULL));
    
    int array[10];
    for(int i = 0; i <= 10; i++) {
        cin >> array[i];

    }
    for(int j = 0; j <= 10; j++) {
        cout << array[j] << " ";
    }    


    return 0;
}