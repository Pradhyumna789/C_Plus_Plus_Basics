
#include<iostream>
using namespace std;
int main() {
	// Write your code here
	int n;
	int i,res;
	int flag = 0;
	cin >>n;
	
	for(i = 1; ;i++ )
	{ 
		res = ((3*i) + 2);
		if(res % 4 != 0 && flag <= n) 
		{
				cout <<res<<" ";
					flag++;
            if(flag == n)
            
                
    return 0;
		}	
	}
}