#include<iostream>
using namespace std;

int main() {
	
    int n;
    
    cin >> n;
    int evensum=0,oddsum=0;
    while(n>0)
    {
        int a=n%10;
        if(a%2==0)
        {
            evensum=evensum+a;
        }
        else
            oddsum=oddsum+a;
        
        	n=n/10;
        
    }
    cout<<evensum<<" "<<oddsum;
	
}

    