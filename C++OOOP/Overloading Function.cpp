#include<iostream>
using namespace std;
class Area{
private:
    int width;
    int length;
public:
    Area():width(0),length(0){}
    Area(int w):width(w),length(0){}
    Area(int w,int l):width(w),length(l){}
    void getlength(){
    cout<<"Enter Width and Length : ";cin>>width>>length;
    }
    void size_of_area(){
    cout<<"Size of Area : "<<width*length<<endl;
    }
};
int main(){
    Area a;
    a.getlength();
    a.size_of_area();
return 0;
}
