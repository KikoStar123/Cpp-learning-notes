#include <iostream>
using namespace std;

class Score
{
private:
    int No;
    char Name[8];
    int Math;
    int Phi;
    int Com;
    int Sum;
public:
    void Show(){
        Sum=Phi+Math+Com;
        cout<<"No:"<<No<<endl;
        cout<<"Name:"<<Name<<endl;
        cout<<"Math:"<<Math<<endl;
        cout<<"Phi:"<<Phi<<endl;
        cout<<"Com:"<<Com<<endl;
        cout<<"Total:"<<Sum<<endl;
    }
    void Input(){
        cin>>No>>Name>>Math>>Com>>Phi;
    }

};

int main()
{
    Score s;
    s.Input();
    s.Show();
    return 0;
}