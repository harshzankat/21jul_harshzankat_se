// Lecture management System

#include<iostream>
using namespace std;

class lactur
{
    public:
    string course,subject[5],lecturer[5];
    int lacturs[5],i;
    lactur()
    {
        cout<<"||||| LACTURE MANAGEMENT SYSTEM |||||";
        cout<<"\n\nEnter corse:\t";
        cin>>course;

        for(i=1;i<=5;i++)
        {
            cout<<"\nEnter "<<i<<" no of lacturs:\t";
            cin>>lacturs[i];

            cout<<"Enter subject name:\t";
            cin>>subject[i];

            cout<<"Enter name of lacturer:\t";
            cin>>lecturer[i];
        }
        cout<<"\n\n\tLACTUR DETAILS"<<endl;
        for(i=1;i<=5;i++)
        {
            cout<<"\n\n"<<i<<"no of lacturs:"<<lacturs[i]<<endl;

            cout<<"name of subject:"<<subject[i]<<endl;

            cout<<"name of lacturer:"<<lecturer[i]<<endl;

            cout<<"\n";
        }
    }
};

int main()
{
    lactur obj;
}