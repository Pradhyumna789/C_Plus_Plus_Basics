#include<iostream>

using namespace std;


int main() {
	
    int n;
    cin>>n;
    
    int i=1;
    while(i<=n)
    {
        int space=1;
        while(space<=n-i)
        {
            cout<<" ";
            space++;
        }
        
        int j=1;
        while(j<2*i)
        {
            cout<<"*";
            j++;
        }
        
        i++;
        cout<<endl;
    }
    
    
     
  
}

