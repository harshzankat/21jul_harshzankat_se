#include<iostream>
using namespace std;
class calci
{
public:
    int a,b,no;
    int data()
    {
        cout<<"*-----Calculator using class-----*\n";
        cout<<"\t\tSelect option\n";
        cout<<"1.Addition \n2.Subtraction \n3.Multiplication\n4.Division\n";
        cout<<"Enter choice"<<endl;
        cin>>no;
        cout<<"Enter first value : ";
        cin>>a;                                    
        cout<<"Enter second value : ";
        cin>>b;
        switch(no)
        {
            case 1:
            {
                a += b;
                cout<<"Addition is :"<<a;
                break;
            }
            case 2:
            {
                a -= b;
                cout<<"Subtraction is : "<<a;
            }
            case 3:
            {
                a *= b;
                cout<<"multiplication is : "<<a;
            }
            case 4:
            {
                a /= b;
                cout<<"division is :"<<a;        
            }
            default :
            cout<<"Invalid choice";
        }
       return 0; 
    }  
};
int main()
{
    calci obj;
    obj.data();
}