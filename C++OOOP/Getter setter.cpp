#include<iostream>
using namespace std;
class student{
private:
    int id;
    string name;
    string gender;
    float score;
public:
    void setId(int id){
    this->id = id;
    }
    int getId(){
        return id;
    }
    void setName(string name)
    {
        this -> name = name;
    }
    string getName(){
    return name;
    }
    void setscore(float score)
    {
        this -> score = score;
    }
    float getscore(){
        return score;
    }
};
int main(){
student stu;
stu.setId(123);
stu.setName("Panha");
stu.setscore(55.5);
cout<<"\t"<<stu.getscore();
cout<<"\t"<<stu.getId();
cout<<"\t"<<stu.getName();
}
