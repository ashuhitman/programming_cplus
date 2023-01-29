#include<iostream>
using namespace std;

int isPalindrome(string str, int low, int high){
    if (low == high) return 1;
    if (str[low] != str[high]) return 0;
    if (low < high+1)
    return isPalindrome(str, low+1, high-1);
    return 1;
}

int main(){
    string str;
    cout << "Enter a alphanumeric string: ";
    cin>>str;
    int len = str.length();
    if (isPalindrome(str,0,len-1))
    {
     cout<<str <<" is Palindrome"<<endl;   
    }else{
        cout<<str <<" is not Palindrome"<<endl;
    }
    
    return 0;
}
