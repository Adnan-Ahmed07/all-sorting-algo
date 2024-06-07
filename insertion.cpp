#include<iostream>
using namespace std;
int main()
{
    int N,temp;
    cout<<"Enter the range : ";
    cin>>N;
    int a[N];
    cout<<"Enter the Number : ";
    for(int i=0; i<N; i++){
        cin>>a[i];
    }
  
   for (int i = 1; i < N; i++) {
     temp=a[i];
     for (int j=i-1; j>=0; j--) {
         if(temp<a[j]) {
            a[j+1]=a[j];
            a[j]=temp;
         }
     }
      for(int i=0; i<N; i++){
    cout<<a[i]<<" ";
   }
   cout<<endl;
   }


 return 0;
}
