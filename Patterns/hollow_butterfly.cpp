#include <iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter a number: ";
    cin>>num;
    for(int i=1;i<=num;i++){
        int space=2*num -2*i;
        for(int j=1;j<=i;j++){
            if(j==1 || j==i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        for(int j=1;j<=space;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            if(j==1 || j==i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }  
        }
        cout<<endl;   
    }
    for(int i=num;i>=1;i--){
        int space=2*num -2*i;
        for(int j=1;j<=i;j++){
            if(j==1 || j==i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        for(int j=1;j<=space;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            if(j==1 || j==i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }  
        }
        cout<<endl;   
    }
    return 0;
}
