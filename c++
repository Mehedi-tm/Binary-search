#include<bits/stdc++.h>
using namespace std;
int main()
{
    int array[5]={2,4,5,6,7};
    int left=0,right=5,key;
    cin>>key;
    int middle;
    while(left<=right)
    {
        middle=left+(right-left)/2;
        if(array[middle]==key)
        {
        cout<<middle<<endl;
        return 0;
        }
        else if(array[middle]<key)
            left=middle+1;
        else
            right=middle-1;
    }
    printf("item not found\n");
}
