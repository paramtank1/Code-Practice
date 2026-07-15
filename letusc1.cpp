#include<iostream>
using namespace std;
int main(){
    
    // int a, b, c;
    // cin >> a;
    // cin >> b;
    // cin >> c;
    
    // int sum = a+b+c;
    
    // if (sum==180){
    //     cout << "Triangle is valid";
    // }else{
    //     cout << "Triangle is not valid";
    // }
    
    
    // int num;
    // int ab_val;
    // cout << "Enter Number: \n";
    // cin >> num;
    
    // if(num<0){
    //     ab_val = num + (2*(-num));
    //     cout << ab_val << " is absoulte value";
    // }else if(num>=0 ){
    //     cout << num <<" is already absolute Value";
    // }
    




    // int l, b;
    // int area;
    // int perimeter;
    // cout << "Enter Length: ";
    // cin >> l;
    // cout << "Enter breadth: ";
    // cin >> b;
    // area = l*b;
    // perimeter = 2*(l+b);
    // if(area > perimeter){
    //     cout << "Area of given rectangle is greater that it's perimeter";
    // }else if(area == perimeter){
    //     cout << "Area of given rectangle and it's perimeter both are equal";
    // }else{
    //     cout << "Perimeter of given rectangle is greater that it's area";
    // }
    



    
    // int x1, x2, x3;
    // int y1, y2, y3;
    
    // cout << "Enter the points for (x1,y1): \n";
    // cin >> x1>> y1;
    // cout << "Enter the points for (x2,y2): \n";
    // cin >> x2 >> y2;
    // cout << "Enter the points for (x3,y3): \n";
    // cin >> x3 >> y3;
    
    // int p1 = (x2-x3)*(y2-y1);
    // int p2 = (x2-x1)(y2-y3);

    // if(p1 == p2){
    //     cout << "All the points are on straight line";
    // }else{
    //     cout << "All the points are not on straight line";
    // }
    







    // int x, y;
    
    // cout << "Enter the points for (x,y): \n";
    // cin >> x >> y;
    
    // if(x>0 && y==0){
    //     cout << "point is lies on X-axis";
    // }else if(y>0 && x==0){
    //     cout << "Point is lies on Y-axis";
    // }else if(x<0 && y==0){
    //     cout << "point is lies on X'-axis";
    // }else if(y<0 && x==0){
    //     cout << "Point is lies on Y'-axis";
    // }else if(x==0 && y==0){
    //     cout << "point is on origin";
    // }else{
    //     cout << "Point is not lies on any axis it can be anywhere on the plan";
    // }
    






    // char c;
    // cout << "Enter any character: ";
    // cin >> c;
    
    // if(c >= 65 && c<=90){
    //     cout << "Entered keyword is capital letter";
    // }else if(c >= 97 && c<=122){
    //     cout << "Entered keyword is samll letter";
    // }else if(c >= 48 && c<=57){
    //     cout << "Entered keyword is digit";
    // }else{
    //     cout << "Entered keyword is special char.";
    // }
    


    
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


    

    // int year;
    // cout<<"enter the year:";
    // cin>>year;
    
    // int find_day(int y){
    //     int year = y-1; 
    //     int odd_day=year;
    //     odd_day += year/4;
    //     odd_day -= year/100;
    //     odd_day += year/400;
    //     return ((odd_day +1)%7);
    // }
    
    // void print_day(int day){
    //     if (day==1){
    //         cout << "Mon";
    //     }    if (day==2){
    //         cout << "Tue";
    //     }    if (day==3){
    //         cout << "Wed";
    //     }    if (day==4){
    //         cout << "Tru";
    //     }    if (day==5){
    //         cout << "Fri";
    //     }    if (day==6){
    //         cout << "Sat";
    //     }    if (day==0){
    //         cout << "Sun";
    //     }




    // int x1;
    // int y1;
    // int r;
    // cin >> x1;
    // cin >> y1;
    // cin >> r;
    
    
    // int d= (x1*x1) + (y1*y1);
    
    // if(r*r < d){
    //     cout << "Outside";
    // }else if(r*r > d){
    //     cout << "Inside";
    // }else{
    //     cout << "On the circle";
    // }
    
    
    









    return 0;
}