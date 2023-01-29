#include<iostream>
using namespace std;

int main()
{
    int book_type;
    cout << " 0 -> Gneral books"<<endl;
    cout << " 1 or other number -> Reference books"<<endl;
    cin>> book_type;
    if (!book_type)
    {
       cout << "Gneral book issued"<<endl;
    }else {
        cout << "Reference books are not issued here"<<endl;
    }
    
    return 0;
}