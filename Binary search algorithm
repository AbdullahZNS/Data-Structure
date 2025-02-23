//Binary search algorithm
#include <iostream>
using namespace std;

int main() {

int n,i;
cin >>n; /* Here n indicates how many items will be taken in the array*/
int arr[n];

for(i = 0; i < n; i++)
{
 cin >>arr[i]; /*Items are taken in a sorted way.*/
}

int left,right,middle,search;
left = 0;
right = n - 1;

cin >> search;

while(left <= right) /*left can't be greater than right*/
{
 
middle = (left + right) / 2;

if(arr[middle] == search)
{
 cout << "The item is found and its index is : " << middle << endl;
 return 0;
}

else if(arr[middle] < search)
{
 left = middle + 1;   
}

else
{
 right = middle - 1;   
}
   
}

cout << "The item is not found" << endl;
    return 0;
}
