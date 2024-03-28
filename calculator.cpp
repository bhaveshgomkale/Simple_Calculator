#include<iostream>
using namespace std;
int main(){
    cout<<"                  ----------Simple Calculator----------"<<endl;
    
    char ch;
    cout<<"Press c for calculate or any other keys to quit"<<endl;
    cin>>ch;
    while(ch=='c')
    {
        int first_number,second_number;
        cout<<"Enter the First Number:"<<endl;
        cin>>first_number;
        cout<<"Enter the Second Number:"<<endl;
        cin>>second_number;

        string operation;
        cout<<"Enter operator:";
        cin>>operation;

        if(operation=="+"){
            cout<<first_number+second_number<<endl;
        }
        else if(operation=="-"){
            cout<<first_number-second_number<<endl;
        }
        else if(operation=="*"){
            cout<<first_number*second_number<<endl;
        }
        else if(operation=="/"){
            cout<<first_number/second_number<<endl;
        }
        
        cout<<"Press c for calculate again or any other keys to quit:";
        cin>>ch;
        cout<<"=============================================="<<endl;

    }
}