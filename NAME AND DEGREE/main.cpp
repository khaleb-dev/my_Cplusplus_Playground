#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int main()
{
    string n;
    int x, s[18],i,j,sum=0,c=1;
    float ave;
    b:
    cout << "ENTER DEGREE OF STUDENTS: PLEASE NOTE SUCESSEFUL DEGREE IS 50%!" << endl<<endl;
    cin>>x;
    if(x==50)
    {
        cout<<"ENTER NAME OF STUDENT"<<endl<<endl;
        cin>>n;
        cout<<"\n\n";
        cout<<"ENTER SCORES OF STUDENT FOR 15 COURSES"<<endl<<endl;
        for(i=0;i<15;i++)
        {
             cin>>s[j];
             sum+=s[j];
             ave=sum/15;
        }
        cout<<"\n\n";
        cout<<"NAME:"<<n<<endl<<endl;
        cout<<"AVERAGE IS:"<<ave<<endl<<endl;
        cout<<"\n\n";
    }

    else
    {
        cout<<"INVALID ENTRY"<<endl;
        goto b;
    }
    while(c<=250)
    {
        goto b;
    }
    return 0;
}
