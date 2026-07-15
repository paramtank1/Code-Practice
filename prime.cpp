#include <iostream>
using namespace std;

int main() {
    int n;
    int count=0;
    
    cin >>n;
    
    if(n<=1){
        cout<<"Nither prime nor composite Number";
    }
    
    for(int i=2;i*i <=n; i++){
        if(n%i==0){
            if(n%i==0){
                count+=1;
            }
        }
    }
    if(count==0){
        cout<<"Prime";
    }else{
        cout<<"Not Prime";
    }

    return 0;
}