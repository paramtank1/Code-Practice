#include<iostream>
using namespace std;

int main(){


    //G(a) Leap Year
    int year;
    cout<<"enter the year:";
    cin>>year;

    if(year%4==0 && year%100!=0 || year%400==0){
        cout << year << " is a leap year";
    }else{
        cout << year << " is not a leap year";
    }

    //G(b) From ASCII value 
    char c;
    cout << "Enter any character: ";
    cin >> c;
    
    if(c >= 65 && c<=90){
        cout << "Entered keyword is capital letter";
    }else if(c >= 97 && c<=122){
        cout << "Entered keyword is small letter";
    }else if(c >= 48 && c<=57){
        cout << "Entered keyword is digit";
    }else{
        cout << "Entered keyword is special char.";
    }

    //G(c) Grade of steel
    float h, c, t;
    cout << "Enter the values for Hardness, Carbon content, Tensile strength";
    cin >> h >> c >>t;
    if(h>50 && c<0.7 && t>5600){
        cout << "Grade is 10";
    }else if(h>50 && c<0.7){
        cout << "Grade is 9";
    }else if(c<0.7 && t>5600){
        cout << "Grade is 8";
    }else if(h>50 && t>5600){
        cout << "Grade is 7";
    }else if(h>50 || c<0.7 || t>5600){
        cout << "Grade is 6";
    }else{
        cout << "Grade is 5";
    }

    //G(d) Library fine
    int days;
    float fine;
    cout << "Enter a number of days the person is late: ";
    cin >> days;
    if(days<=5){
        fine = days*0.5;
        cout << "Fine is: " << fine;
    }else if(days>5 && days<=10){
        fine = 5*0.5 + (days-5)*1;
        cout << "Fine is: " << fine;
    }else if(days>10 && days<=30){
        fine = 5*0.5 + 5*1 + (days-10)*10;
        cout << "Fine is: " << fine; 
    }else{
        cout << "Your Membership is cancelled";
    }

    //G(e) Triangle is valid or not
    int a,b,c;
    cout << "Enter length of sides: ";
    cin >> a >> b >> c;
    if(a+b>c && b+c>a && a+c>b){
        cout << "Triangle is valid";
    }else{
        cout << "Triangle not valid";
    }

    //G(f) which triangle is it?
    int side1, side2, side3, angle1, angle2, angle3;
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;

    if (side1 == side2 == side3) {
        cout << "The triangle is equilateral." << endl;
    } else if (side1 == side2 || side1 == side3 || side2 == side3) {
        cout << "The triangle is isosceles." << endl;
    } 
    else if ((side1 * side1 + side2 * side2 == side3 * side3) || (side1 * side1 + side3 * side3 == side2 * side2) || (side2 * side2 + side3 * side3 == side1 * side1)) {
        cout << "The triangle is a right-angled triangle." << endl;
    }
    else {
        cout << "The triangle is scalene." << endl;
    }


    //G(g) work efficiency
    int hours;
    cout << "Enter the number of hours taken by worker to complete the job: ";
    cin >> hours; 
    if (hours >= 2 && hours <= 3) {
        cout << "The worker is efficient." << endl;
    } else if (hours > 3 && hours <= 4) {
        cout << "The worker is orderered to improve speed" << endl;
    } else if (hours > 4 && hours <= 5) {
        cout << "The worker is given training to improve speed" << endl;
    } else if (hours > 5) {
        cout << "The worker is said to be leave the company" << endl;
    } else {
        cout << "Invalid input. Please enter a positive number of hours." << endl;
    }
    
    //G(h) Stock and Credit
    int s, q;
    bool c;
    cin >> s >> q >> c;
    if(s>=q && c==true){
        cout << "Order is placed";
    }else if(c==false){
        cout << "You are out of credits";
    }else if(c==true && s<q){
        int remaining = q - s;
        cout << "We are sending you " << s << " items and remaining " << remaining << " items will be sent later";
    }

    //J(1)
    int x, min, max;
    cin >> max >> x;

    (x > max) ? (max = x) : (min = x);

    //J(2)
    int code;
    cin >> code;

    (code > 1) ? cout << "\nJerusalem" : (code < 1) ? cout << "\nEddie" : cout << "\nC Brain";


    //J(3)
    float sal;
    cout << "Enter the salary: ";
    cin >> sal;
   
    (sal < 40000 && sal > 25000) ? cout << "Manager" : 
    (sal < 25000 && sal > 15000) ? cout << "Accountant" : cout << "Clerk";



    int s, q;
    bool c;
    cin >> s >> q >> c;
    if(s>=q && c==true){
        cout << "Order is placed";
    }else if(c==false){
        cout << "You are out of credits";
    }else if(c==true && s<q){
        int remaining = q - s;
        cout << "We are sending you " << s << " items and remaining " << remaining << " items will be sent later";
    }

    

}

