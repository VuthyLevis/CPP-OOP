#include<iostream>
#include<iomanip>
using namespace std;
class employee{
private:
    int id;
    string name,gender;
    float salary;
public:
    employee(){
    id      = 0;
    name    = "null";
    gender  = "null";
    salary  = 0.0;
    }
    void input(){
    cout<<"Enter ID     : "; cin>>id;
    cout<<"Enter Name   : "; fflush(stdin);getline(cin,name);
    cout<<"Enter Gender : "; getline(cin,gender);
    cout<<"Enter Salary : "; cin>>salary;
    }
    void output(){
    cout<<setw(10)<<id
        <<setw(10)<<name
        <<setw(10)<<gender
        <<setw(10)<<salary
        <<endl;
    }
    int getId(){
    return id;
    }
    // void មិនមែនជា Function Return Type ឡើយ ។
    // int getId() Function បែបនេះទើបវាអាច Return តម្លៃអោយ ។
};

int main(){
employee emp[20];
int i,j,n = 1 ,op;
do{
cout<<"[1].Input"<<endl;
cout<<"[2].Output"<<endl;
cout<<"[3].Search"<<endl;
cout<<"==========="<<endl;
cout<<"Choose One Option => " ;
cin>>op;
switch(op){
case 1 :
    cout<<"Enter number of employee : ";
    cin>>n;
    for(i = 0 ; i < n ; i++){
        cout<<"\n====>Employee "<<i+1<<endl;
        emp[i].input();
    }
    break;
case 2:
    for(i=0;i<n;i++){
        emp[i].output();
    }
    break;
    case 3:
        int search;
        cout<<"Enter Id to Search : ";
        cin>>search;
        for(i=0;i<=n;i++){
            if(search == emp[i].getId())
            {
                emp[i].output();
            }
        }
        break;
    case 4 :
        int update;
        cout<<"Enter Id to update : "<<endl;
        cin>>update;
        for(i = 0; i < n ; i++){
            if(update == emp[i].getId())
            {
                cout<<"I want to Update this Employee " <<endl;
                emp[i].output();
                emp[i].input();
            }
        }
        break;


}
}while(1);

//emp[0].input();
//emp[0].output();
return 0;
}
