#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int num,try_val=1;
    srand(time(0));
    int random_val = rand() % 100;
    while(try_val<=7)
    {
        cout<<"Enter a number: ";
        cin>>num;
        if(num<random_val)
        {
            cout<<"The number is Higher"<<endl;
            cout<<"Tries Left : "<<(7-try_val)<<endl<<endl;
        }
        else if(num>random_val)
        {
            cout<<"The number is Lower"<<endl;
            cout<<"Tries Left : "<<(7-try_val)<<endl<<endl;
        }
        else
        {
            cout<<"correct guess"<<endl;
            cout<<"Tries Left : "<<(7-try_val);
            break;
        }
        try_val++;
        if(try_val==8)
        {
            cout<<"You ran out of tries"<<endl;
        }
    }
    return 0;
}
