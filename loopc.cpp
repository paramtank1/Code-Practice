#include <iostream>
using namespace std;

int main() {

    //B(a) Overtime Pay
    int i = 1, hrs, ot_hrs, op;

    while (i <= 10) {
        cout << "Enter total hours worked by employee " << i << ": ";
        cin >> hrs;

        if (hrs > 40) {
            ot_hrs = hrs - 40;
            op = ot_hrs * 12.00;
            cout << "Emp:" << i << " work " << ot_hrs 
                 << " hours of overtime and overtime pay is: " << op << endl;
        } else {
            cout << "Emp:" << i << " work " << hrs 
                 << " hours. No overtime pay."; << endl;
        }

        i++; 
    }

    //B(b) Factorial of a number
    int num;
    int factorial = 1;
    cin >> num;
    int i=1;
    if(num>=1){
        while (i <= num) {
            factorial *= i; 
            i++;            
        }
        cout << "Factorial of " << num << " is: " << factorial << endl;
    }
    
    else{
        cout << "There is not factorial for numbers less than 1";
    }

    

    //B(c) Power of another number
    int base, power;
    cin >> base >> power;
    int result = 1;
    int i = 1;
    if(power>0){
        while (i <= power) {
        result = result * base;
        i++;
        }
    }else if(power==0){
        result = 1;
    }else{
        cout << "Power is negative";
    }

    cout << base << " to the power of " << power << " is: " << result << endl;

    //B(d) All the ASCII value to char.
    int i=0;

    while (i <= 255) {
        cout << i << "\t" << (char)i << "\n";
        i++; 
    }

    






    return 0;
}