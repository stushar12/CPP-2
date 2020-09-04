#include<iostream>
#include<string>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
int main()
{   
vector<pair<int,char>> Vector;

int i;
char j;
int k;
while (1)
{
    cout<<"Enter the elements"<<endl;
cin>>i>>j;
Vector.push_back({i,j});

cout<<"Enter 1 or 0 "<<endl;
cin>>k;
if (k==0)
break;

}
sort(Vector.begin(),Vector.end());
auto itr=Vector.begin();
for (itr;itr!=Vector.end();itr++)
{
cout<<itr->second<<" ";
}

}