#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int i=1;
    while(i <= n) {
        
        for(int sp = 1 ;sp <= n - i; sp++){
            cout << " ";
        }
        int temp = i;
        for(int k = 1; k <= i; k++){
            cout << temp++;
        }
        temp--;
        for(int j = 1; j < i; j++){
            cout << --temp;
        }
        cout << endl;
        i++;
    }
}
