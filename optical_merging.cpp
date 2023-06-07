//#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
int Mincomputation(int size, int files[])
{
    priority_queue<int, vector<int>, greater<int>>pq;

    for(int i=0; i<size; i++)
    {
        pq.push(files[i]);
    }

    int count =0;

while(pq.size() >1)
{
    int first_smallest =pq.top();
    pq.pop();

    int second_smallest = pq.top();
    pq.pop();

    int temp = first_smallest+ second_smallest;

    count += temp;

    pq.push(temp);
}
return count;
}

int main()
{
    vector<int> v;
    /*
    int n=6;
    int files[] = {2,3,4,5,6,7};
    
   for(int i=0; i<v.size();i++)
   {
    v.push_back(i);
   }

   for(int j=0; j<v.size(); j++)
   {
    int files[] = ;

    cout<<"Min computation: "<<Mincomputation(v.size(),files);
    
   }
   return 0;
}
*/

void optical(int size, int files[])
{
    priority_queue<int, vector<int>, greater<int>>pq;

    for(int i=0; i<size;i++)
    {
        pq.push(files[i]);
    }
    int ans =0;

    while(pq.size()>1)
    {
        int e1 = pq.top();
        pq.pop();

        int e2 = pq.top();
        pq.pop();

        int temp = e1+e2;

        ans += temp;

        pq.push(temp);
    }
    cout<<"Ans is:"<<ans;
}

int main()
{
    int files[20];
    int n;

    cout<<"Enter the value of n:"<<endl;
    cin>>n;

    cout<<"Enter the"<< n<<" values"<<endl;
    for(int i=0; i<n;i++)
    cin>>files[i];

    optical(n,files);
    return 0;
}