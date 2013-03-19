#include <iostream>
#include<string.h>

using namespace std;

class A
    {
        char name[20];
        int rno;

        public:

        A()
        {
            rno=0;
            strcpy(name,"\0");
        }

        A(int a,char *p)
        {
            rno=a;
            strcpy(name,p);

        }

        void disp()
        {
            cout<<"\nName : "<<name;
            cout<<"\nRoll No."<<rno;

        }
    };

    int main()
    {

        cout << "\x1b[2J\x1b[1;1H" << flush;
        char nam[20];
        int rn;
        A obj;

        cout<<"Enter name :";
        cin>>nam;
        cout<<"Enter roll no. :";
        cin>>rn;

        A obj1(rn,nam);
        obj1.disp();


        return 0;
    }
