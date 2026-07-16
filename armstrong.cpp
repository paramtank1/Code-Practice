// Armstrong Number
#include<iostream>
#include<cmath>
using namespace std;

int length(int n){   
    int count=0;
    while(n!=0){
        n = n / 10;
        count++;
    }
    return count;
}

int main(){ 
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int power = length(n);
    int sum = 0;
    int org = n;

    while(n!=0){
        int digit = n % 10;
        sum = sum + (float)pow(digit, power);
        n = n / 10;
    }
    
    if(sum==org){ cout<<"Armstrong number."<<endl; }
    else{ cout<<"Not Armstrong Number."<<endl; }
   
    return 0;
}
 