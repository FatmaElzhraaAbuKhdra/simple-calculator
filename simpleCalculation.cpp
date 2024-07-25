#include<iostream>
using namespace std;

int main()
{
    int FristNum,SecondNum,Result;
    char Op;

    cout<<"First Number = ";
    cin>>FristNum;
    cout<<"Second Number = ";
    cin>>SecondNum;
    cout<<"Operation is (+ , - , * , / ) = ";
    cin>>Op;

    switch (Op)
    {
    case '+':// 10 + 20 = 30
        Result=FristNum+SecondNum;
        cout<<"The Result of ( "<<FristNum <<" + "<< SecondNum <<" ) = "<<Result<<endl;
    break;
    case '-':// 10 - 20 = 30
        Result=FristNum-SecondNum;
        cout<<"The Result of ( "<<FristNum <<" - "<< SecondNum <<" ) = "<<Result<<endl;
    break;
    case '*':// 10 * 20 = 30
        Result=FristNum*SecondNum;
        cout<<"The Result of ( "<<FristNum <<" * "<< SecondNum <<" ) = "<<Result<<endl;
    break;
    case '/':// 10 / 20 = 30
        if(SecondNum!=0)
            {
            Result=FristNum/SecondNum;
             
            cout<<"The Result of ( "<<FristNum <<" / "<< SecondNum <<" ) = "<<Result <<endl;
            }
            else
            {
                cout<<"It cannot be divided by zero!";
            }
    break;
    
    default:
            cout<<"Your operation can not find";
    break;
    }

    return 0;
}