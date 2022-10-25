
#include<iostream>
using namespace std;
int main() {
	int n;
    cin >> n;
    int rev = 0,rem;
    
    while(n != 0){
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    cout << rev;
}