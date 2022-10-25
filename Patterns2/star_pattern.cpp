
 #include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i = 0;
    while(i < n){
        for(int sp = 1; sp < n-i;sp++){
            cout<< " ";
        }
        for(int k = 0; k < ((2*i)+1); k++){
            cout<<"*";
        }
        cout<<endl;
        i++;
    }
}