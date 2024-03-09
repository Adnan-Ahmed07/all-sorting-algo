#include<iostream>
using namespace std;
fact(int n){ 
    if(n==1){ 
        return 1;
    }
    else{ 
        return n*fact(n-1); 
    }
}
int main()
{
  int r,n;
  cin>>n;
  r=fact(n);
  cout<<r;
 
}