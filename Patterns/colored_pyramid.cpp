#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    for(int i=1;i<=num;i++){
        system("color 0B");
        int j;
        for(j=1;j<=num-i;j++){
            cout<<"  ";
        }
        int k=i;
        for(;j<=num;j++){
            cout<<k<<" ";
            k--;
            
        }
        k=2;
        for(;j<=num+i-1;j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;

    }
    
}
