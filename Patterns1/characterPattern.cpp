#include<iostream>
using namespace std;
int main(){      
    int n;
    cin>>n;
    int i=1;
    while( i <= n){
        char ch = 'A' + i - 1;
        for(int j = 1; j <= i; j++){
            char c = ch + j - 1;
            cout<<c;
        }
        cout<<endl;
        i++;
    }
}