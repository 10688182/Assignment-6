#include<iostream>
using namespace std;
int main()
{  
int num;
    cout<<"Enter the number to search\n";
	cin>>num;
int list[10]={2,3,4,5,6,7,8,9,10,11};	
int first = 0;
int last = 10 - 1;
int mid;
bool found = false;
while (first <= last && !found)
{
mid = (first + last) / 2;
if (list[mid] == num)
found = true;
else if (list[mid] > num)
last = mid - 1;
else
first = mid + 1;
}
if (found)
cout<<num<<" occurs at position "<<mid+1;
else
return -1;
}
