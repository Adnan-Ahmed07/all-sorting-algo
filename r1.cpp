#include<iostream>
using namespace std;
void f2();
void f1(){ 
    cout<<"bye"<<endl;
    f2();
}
void f2(){  
    cout<<"hello"<<endl;
}
int main()
{
    
    f2();
    f1();
  
 return 0;
}
