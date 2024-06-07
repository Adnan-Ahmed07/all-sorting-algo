#include<iostream>
using namespace std;
int main()
{
    int  search,l=0,r,m,N;
    cout<<"Enter Range: ";
    cin>>N;
    r=N-1;
    int a[N];
    cout<<"Enter num: "<<N<<" Numbers: ";
    for(int i=0;i<N;i++){ 
        cin>>a[i];
    }
    cout<<"Enter Search Number : ";
    cin>>search;
    while (l<=r){ 
        m=(l+r)/2;
        if(a[m]==search){  
            cout<<"number found : "<<m+1<<endl;
            break;
        }
        else if(a[m]<search){ 
            l=m+1;
        }
        else if(a[m]>search){
            r=m-1;
        }
    }
   if(l>r){ 
    cout<<"Number not  Found"<<endl;
   }
 return 0;
}