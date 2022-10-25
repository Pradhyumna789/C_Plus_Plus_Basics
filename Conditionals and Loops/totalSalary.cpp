#include<iostream>
//#include <cmath>

using namespace std;

int main() {
	
	int Basic;
    cin>>Basic;
    char grade;
    cin>>grade;
    double hra=0.2*Basic;
    double da=0.5*Basic;
    double pf=0.11*Basic;
    int allow=0;
    if(grade=='A'){
         allow+=1700;
        
    }
        
    else if(grade=='B'){
         allow+=1500;
    }
    else{
         allow+=1300;
    }
    
    
    int totalsalary=(Basic+hra+da+allow-pf)+0.5;
    cout<<(totalsalary);
    
}
