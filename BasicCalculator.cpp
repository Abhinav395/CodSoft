#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    int add ,sub,mul,div;
    char response('y');
    do{
        cout<<"Enter the first number"<<endl;
        cin>>a;
        cout<<"Enter the second number"<<endl;
        cin>>b;
        cout<<"Enter 1-Addition,2-Subtraction,3-MUltiplication,4-division"<<endl;
        cin>>c;

        switch(c){
            case 1: add= a+b;
                    cout<<"The addition is "<<add;
                    break;
            case 2: sub= a-b;
                    cout<<"The subtraction is "<<sub;
                    break;
            case 3: mul = a*b;
                    cout<<"The multiplication is "<<mul;
                    break;
            case 4: div= a/b;
                    cout<<"The division is "<<div;
                    break;
            default:
                  cout<<"wrong choice";
        }
        cout<<endl;
        cout<<"Do you want to further proceed"<<endl;
        cin>> response;

    }
    while(response=='Y'|| response=='y');
    return 0;
}