#include<iostream>
using namespace std;
int main() {
    //f(e) Triangle is valid or not
    int a,b,c;
    cout << "Enter length of sides: ";
    cin >> a >> b >> c;
    if(a+b>c && b+c>a && a+c>b){
        cout << "Triangle is valid";
    }else{
        cout << "Triangle not valid";
    }
    return 0;
}