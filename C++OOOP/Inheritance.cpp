#include<iostream>
#include<iomanip>
using namespace std;
class person{
protected:
    int id;
    string name;
    string gender;
public:
    person(){
       id          = 0;
       name    = "null";
       gender  = "null";
    }
    person(int id,string name,string gender) // Constructor With Parameter
    {
        this->id = id;
        this -> name = name;
        this-> gender;
    }
    void input()
    {
        cout<<"Enter Id             : " ; cin>>id;
        cout<<"Enter Name       : ";fflush(stdin);getline(cin,name);
        cout<<"Enter Gender     : ";getline(cin,gender);
    }
    void output()
    {
        cout<<left<<setw(10)<<id
               <<left<<setw(10)<<name
               <<left<<setw(10)<<gender;
    }
};
class student:public person{
private:
    float score;
    public:
    student(){
    person:person();
    score = 0;
    }
   student(int id, string name, string gender, float score) : person(id, name, gender) {
    this->score = score;
}

    void input(){
    person::input();
    cout<<"Enter Score : " ; cin>>score;
    }
    void output(){
    person::output();
    cout<<left<<setw(10)<<score<<endl;
    }

};
class Teacher:public person{
private:
    float salary;
public:
Teacher(){ // Default Constructor
    person:person();
}
Teacher(int id, string name,string gender,float salary):person(id,name,gender){
this -> salary = salary;
}
void input (){
person::input();
cout<<"Enter Salary : ";cin>>salary;
}
void output(){
person::output();
cout<<'$'<<left<<setw(10)<<salary<<endl;
}
};
int main(){
    cout<<"=========>> Class Student <<========\n";
    student stu;
    stu.input();
    stu.output();
     cout<<"=========>> Class Teacher <<========\n";
     Teacher t;
     t.input();
     t.output();
return 0;
}
