#include<iostream>
using namespace std;
int main(){
  int n;
    cin>>n;
    int i=1;
    while(i <= n){
        for(int j = 1; j <= i; j++ ){
            char ch = 'A'+i-1;
            cout << ch;
        }
        cout<<endl;
        i++;
    }   
}