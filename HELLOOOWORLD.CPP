#include<iostream>
#include<windows.h>
using namespace std;
// Scrolling Hello World 
class HelloWorld
{
    string Word="my name is aditya",NewWord="",TempS="";
    char tempchar;
    int Counter=0;
    public:
    void compair()
    {
        for(int k=0;k<17;k++)
        {
            for (int i=97;i<123;i++)
            {
                cout<<char(i)<<endl;
                Sleep(50);
                if(Word[Counter]==char(i))
                {
                    NewWord.append(string(1,i));
                    cout<<NewWord;
                    Counter++;
                    break;
                }
                else if(Word[Counter]==char(32))
                {
                    NewWord.append(string(1,32));
                    cout<<NewWord;
                    Counter++;
                    break;
                }
                cout<<NewWord;
                Sleep(50);
            }
        }
    }
};
int main()
{
    HelloWorld Testing;
    Testing.compair();
    return 0;
}