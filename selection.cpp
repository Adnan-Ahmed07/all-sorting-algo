#include<iostream>
using namespace std;
int main()
{
    int N,huda,temp,min;
    cout<<"Range: ";
    cin>>N;
    int a[N];
    cout<<"Enter arry: ";
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    for(int i=0; i<N; i++){
        min=a[i];
        huda=i;
        for(int j=i+1; j<N; j++){
            if(min>a[j]){
                min=a[j];
                huda=j;
            }
        }
        temp=a[huda];
        a[huda]=a[i];
        a[i]=temp;
          for(int i=0; i<N; i++ ){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    }

 return 0;
}
