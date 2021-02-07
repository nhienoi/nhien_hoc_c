#include <iostream>
#include <iomanip>
using namespace std;
 
int main()
{
    double zero {0.0};
    double posinf { 5.0 / zero }; // positive infinity
    cout << posinf << endl;

    double neginf { -5.0 / zero }; // negative infinity
    cout << neginf << endl;
 
    double nan { zero / zero }; // not a number (mathematically invalid)
    cout << nan << endl;

    return 0;
}