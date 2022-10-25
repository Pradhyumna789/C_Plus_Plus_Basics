
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    long binary = 0, pow = 1;
    while(n > 0) { 
        int lastBit = n % 2;
        binary += lastBit * pow;
        pow *= 10;
        n = n / 2;
    }
    cout << binary;
}