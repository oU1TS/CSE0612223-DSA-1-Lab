#include <iostream>
#include <algorithm>
using namespace std;

binSearch(int arr[],int n,int key)
{
    int left = 0;
    int right = n-1;
    while(left<=right)
    {
        int mid = (left+right)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            left = mid+1;
        }
        else if(key<arr[mid])
        {
            right = mid-1;
        }
    }
    return -1;

}


int main()
{
    int arr[]= {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 3;
    sort(arr, arr+n);
    int result = binSearch(arr,n,key);
    if(result!=-1)
    {
        cout<<"Found at "<<result<<endl;
    }
    else
    {
        cout<<"Not Found";
    }


    return 0;
}
