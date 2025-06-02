#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n =10;
    int A[n];
    int item = 5;
    int location = 0;
    int i;
    for(i=1; i<=n; i++){
        cin>>A[i];
    }
    for(i=1; i<=n; i++)
    {
        if(A[i]==item)
        {
            cout<<"Found";
            location = i;
            break;
        }
    }
    if(i>n)
    {
        cout<<"Not Found";
    }



    return 0;
}
