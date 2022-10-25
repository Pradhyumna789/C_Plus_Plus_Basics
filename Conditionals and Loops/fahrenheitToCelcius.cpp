#include<iostream>
using namespace std;
int main () {
    int start,end,step;
    cin>>start>>end>>step;
    int f=start;
    while(f<=end){
        int c=(5*(f-32))/9;
        cout<<f<<" "<<c<<endl;
        
        f=f+step;
}
    
}