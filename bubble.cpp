#include<iostream>
using namespace std;
int main()
{
    int N,temp;
    cout<<"Enter Range : "<<endl;
    cin>>N;
    int a[N];
    cout<<"Enter Number : ";
    for(int i=0;i<N;i++)
    { 
        cin>>a[i];
    }
    for(int i=0;i<N;i++){ 
        for (int j=0; j<N-1; j++){ 
            if(a[j] > a[j+1]) {
            temp=a[j+1];
            a[j+1]=a[j];
            a[j]=temp;
            }

        }
    }
    cout<<"Sorting Bubble : ";
    for(int  i = 0 ; i < N ; i++ )
     {
       cout<<a[i]<<" ";
     }
 return 0;
}