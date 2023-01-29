#include <iostream>
using namespace std;
int main(){
    int num1,num2,num3,sum,product;
    float average;
    cout<<"Enter three integers";
    cin>>num1>>num2>>num3;
    // sum of the three integers
    sum = num1+num2+num3;
    // product of the three integers
    product = num1*num2*num3;
    // average of the three integers
    average = sum*1.0/3;
    // round to nearest two decimal digits
    average = (int)(average*100+.5);
    average = float(average/100);
    // print the sum of the three integers
    cout<<"sum = "<<sum<<endl;
    // print the product of the three integers
    cout<<"product = "<<product<<endl;
    // print the average of the three integers
    cout<<"average = "<<average<<endl;
    return 0;
}