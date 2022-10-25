

#include<iostream>
using namespace std;
int main() {
	int N,ch;
    int sum=0,prod = 1;
    cin>>N>>ch;
    if(ch==1){
        for(int i=1;i <= N ; i++){
            sum=sum+i;
        }
        cout<<sum;
    }
    else if(ch ==2){
        for(int i = 1; i <= N; i++){
            prod = prod * i;
        }
        cout<<prod;
    }
    else{
        cout<<-1;
    }
}