#include <iostream>
using namespace std;

int main()
{
    int n;
    while(n<2)
    {
        cin >> n;
    }
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int min;
    int pos=0;
    min =a[0];
    for(int i=0; i<n; i++)
    {
        if(a[i]<min)
        {
            min = a[i];
        }
    }
    int flag = 0;
    for(int i=0; i<n; i++)
    {
        if(flag==1){
            break;
        }
        else if(min==a[i])
        {
            flag=1;
            pos = i;
        }
    }

    cout << min << " " << pos+1;
    return 0;
}
