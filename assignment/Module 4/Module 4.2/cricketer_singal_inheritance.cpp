#include<iostream>
using namespace std;
class cricketer                         
{
    protected:
    string bts;                          
    int truns[5],avgrun,bestp,i,total=0;
    
};

class batsman : public cricketer         
{   
    public:
    void data()                        
    {
      
      cout<<"Enter Batsman name :";
      cin>>bts;
      for(i=0;i<3;i++)
      {
        cout<<"Enter Match "<<i+1 <<"Runs : ";
        cin>>truns[i];
        total+=truns[i];             
      }
      
      avgrun=total/3;                 
      
      bestp = 5;
      for(i= 0 ; i < 3 ; i++)
        {
          if(truns[i] >= truns[1])
          {
            bestp = truns[i];
          }

        }
      
    }
    void showdata()
    {
        cout<<"Batsman name : "<<bts<<endl;
        cout<<"Total Run : "<<total<<endl;
        cout<<"Average Run : "<<avgrun<<endl;
        cout<<"Best Performance : "<<bestp<<endl;
    }

};
int main()
{
    batsman obj;
    obj.data();
    obj.showdata();
}