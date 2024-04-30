#include<iostream>
#include<iomanip>
using namespace std;
class student{
private:
    int id;
    string name;
    string gender;
    float score;
public:
    student(){
        id      = 0;
        name    = "null";
        gender  = "null";
        score   = 0.0;
    }
   student(int id, string name,string gender,float score){
   this -> id       = id;
   this -> name     = name;
   this -> gender   = gender;
   this -> score    = score;
   }
   student(int id,string name,string gender){
   this->id         = id;
   this -> name     = name;
   this->gender     = gender;
   this -> score    = 0.0 ;
   }
   void output(){
   cout<<setw(10)<<id
       <<setw(10)<<name
       <<setw(10)<<gender
       <<setw(10)<<score
       <<endl;
   }

};
int main(){
student stu(123,"Meng","Female",1200);
stu.output();
}
