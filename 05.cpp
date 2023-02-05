#include<iostream>
using namespace std;
int main()
{
    char Section;
    int Roll_no;
    string Name;
    float Height;
    cout<<"Enter Name Section Roll Number height"<<endl;
    cin>>Name>>Section>>Roll_no>>Height;
    cout<<"Name "<<Name<<"\tSection "<<Section<<"\tRoll Number "<<Roll_no<<"\theight "<<Height;
    return 0;    
}