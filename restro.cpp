#include <iostream>
using namespace std;

int main() {
    
    string Menu="1. Burger, 2. Pizza,  3. Sandwich, 4. soda, 5. Lassi";
    int arr[5]={100, 250, 120, 20, 70};
    bool order_more=true;
    int bill = 0;
    while(order_more){
        int item; cin >> item;
        int qty; cin >> qty;
        bill += arr[item - 1]*qty;
        cin >> order_more;
    }
    cout<< bill;
    
    return 0;
}

    