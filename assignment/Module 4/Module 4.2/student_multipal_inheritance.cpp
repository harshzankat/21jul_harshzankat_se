#include<iostream>
using namespace std;
class person                   
{
    public:
    int age;
    string nme;
    person()
    {
    cout<<"Enter student name";
    cin>>nme;
    cout<<"Enter age";
    cin>>age;
    }
};
class percentage            
{
    public:
    int prcnt;
    percentage()
    {
        cout<<"Enter percentage";
        cin>>prcnt;
    }

};
class teacher : public person , public percentage       
{
    public:
    string tchrnme;
    int slry;
    
    teacher()
    {
        cout<<"Enter teacher name";
        cin>>tchrnme;
        cout<<"Enter salary";
        cin>>slry;
    }
};
int main()                                         
{
    teacher obj;
    cout<<obj.nme<<" has "<<obj.prcnt<<"%";
}