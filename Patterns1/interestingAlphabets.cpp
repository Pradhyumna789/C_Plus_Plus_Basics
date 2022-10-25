#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int i = 1; 
    while(i <= n) {
        int j = 1;
        char ch = 'A' + n - i;
        while(j <= i) {
            cout << char(ch + j - 1);
            j++; 
        } 
        cout << endl;
        i++; 
    }
}