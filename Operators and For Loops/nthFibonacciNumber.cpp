#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int pn=1;int nn=1;
    int fib=0;
    if(N ==1){
    	cout<<pn;
	}
	else if(N==2){
		cout<<nn;
	}
	else{
		for(int i=1; i< N-1; i++){
        fib = pn + nn;
        
        pn=nn;
        nn=fib;
	}
	cout<<fib;
	}
}
