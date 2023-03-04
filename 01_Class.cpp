#include<iostream>
using namespace std;

class Test_class{
    private:
    int num1,num2;
    string Sheesh;
    public:
    int AddNum(){
        cin>>num1>>num2;
        cout<<num1+num2;
        return 0;
    }
};

int main(){
    Test_class Numbersobj;
    cout<<"Enter two numbers";
    Numbersobj.AddNum();
    // cout<<Numbersobj.num1; Since variable is private cannot acess
    return 0;
}