#include <iostream>
using namespace std;

int findgrade(int);

int main()
{
    int marks;
    cout<<"Het Kothari\n"<<endl;
    cout<<"Roll no: S017\n"<<endl;

    cout<<"************************************************************************************************************************"<<endl;
    cout<<"Write a program which will ask the user to enter his/her marks( out of 100 ).Define a function that will display grades according to theMarks entered below.\n\n"<<endl;
    cout<<"************************************************************************************************************************"<<endl;

    cout<<"Enter your marks(out of 100): ";
    cin>>marks;
    findgrade(marks);

    return 0;
}

int findgrade(int a){


    if(a<0 || a>100){
        cout<<"Invalid Marks!"<<endl;
    }

    switch(a/10){

    case 10:
    case 9:
        cout<<"Congratulations! You got AA Grade\n"<<endl;
        break;

    case 8:
        cout<<"You got AB Grade\n"<<endl;
        break;

    case 7:
        cout <<"You got BB Grade\n"<<endl;
        break;

    case 6:
        cout<<"You got BC Grade\n"<<endl;
        break;

    case 5:
        cout<<"You got CD Grade\n"<<endl;
        break;

    case 4:
        cout<<"You got DD Grade\n"<<endl;
        break;

    default:
        cout<<"You got Failed :(\n"<<endl;
        break;
    }

    return 0;
}
