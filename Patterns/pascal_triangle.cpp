//pascal's triangle
#include <iostream>
using namespace std;

int main(){
    int num,coef=1;
    cout<<"Enter a number: ";
    cin>>num;
    for(int i=0;i<num;i++){
        for(int space=1;space<=num-i;space++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            if(j==0 || i==0){
                coef=1;
            }
            else{
                coef=coef*(i-j+1)/j;
            }
            cout<<coef<<" ";
        }
        cout<<endl;
    }


    return 0;
}
