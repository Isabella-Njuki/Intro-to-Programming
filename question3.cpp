#in#include <iostream>
using namespace std;

int main(){
    int opt;

    cout<<" Welcome to my simple App: ";
    cout<<"\n1.Go to About Us page\n2.Go to Services Page\n3.Go to Full Profile Page\n4.Logout"<<endl;<<endl;
    cout<<"Select and action to perfom(e.g. 1, 2, 3, 4,)"<<endl;
    cin>>opt;

    switch (opt)
    {
    case 1:
        /* code */
        break;
    case 2:
        /* code */
        break;
    case 3:
        cout<<"Enter Full Name:"<<endl;
         cin>>Full Name;
        cout<<"Enter Year Of Birth:"<<endl;
         cin>>Year Of Birth;
        cout<<"Enter country:"
        cin>>country;
         cout<<"Enter citzenship:"<<endl;
          cin>>citzenship;
          cout<<"Enter Hobbies:"<<endl;
           cin>>hobbies;
           cout<<"Enter university:"<<endl;
            cin>>university;
        break;
    case 4:
        cout<<"Enter Username:"
         cin>>username;
        cout<<"Enter Password"
         cin>>password;
        cout<<"Logout successful"
        break;
    
    default:
        cout<<"invalid input";
    }
    return 0;
}