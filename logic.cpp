#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int t;
    for(int i=0;i<=n+1;i++){
        if (n==0)
{
    return 1;
}
t=n%10;
n=n/10; 
cout<<t;
    }
}
   
