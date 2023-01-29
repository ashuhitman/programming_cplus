#include <iostream>
#include <algorithm>
using namespace std;

// Student class -> blueprint to make student object
class Student{
    public:
        string name;
        int age;
        int fee;
        int total_marks;
        
        void print(){
            cout <<"name: "<<name;
            cout <<" age: "<< age;
            cout <<" fee: "<<fee;
            cout <<" total marks:: "<<total_marks<<endl;
        }
    
        Student(string nm, int aa, int ff, int tm){
            name = nm;
            age = aa;
            fee = ff;
            total_marks = tm;
            }
    
};


int main(){
    // declare objects
    Student student1("Ashu Singh",20, 2000, 400);
    Student student2("Sgubham Mishra",18, 200, 450);
    Student student3("Pranjal Kumar",19, 200, 438);
    Student student4("Rani Bhatiya",17, 200, 449);
    Student student5("Goerge Karim",18, 200, 459);

    // student objects array
    Student students[5] = {
        student1, student2, student3, student4, student5
    };

    // sort students array according student's total marks
     sort(students, students + 5,
        [](const Student &p1, const Student &p2) {
            return p1.total_marks < p2.total_marks; 
        }
    );

   // print all student details
    for (int i = 0; i < 5; i++){
        students[i].print();
    }
    
    return 0;
}