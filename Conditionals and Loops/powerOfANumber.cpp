    #include<iostream>
    using namespace std;

    int main() 
    {
        // Write your code here
        int x;
        int n;
        int result=1;
        cin>>x;
        cin>>n;

        while(n!=0)
        {
           result*=x;
            --n;
        }
        cout<<result;
    }
