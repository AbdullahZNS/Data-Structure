#include <iostream>
using namespace std;

int main()
{
 int n;
 cout << "Enter the size of elements: " << endl;
 cin >> n;

 cout << "Enter the elements: " << endl;
 int arr[100];
 int i;
 for(i = 0; i<n; i++)
 {
 cin >> arr[i];
 }

 cout << "Enter the position to insert: " << endl;
 int pos;
 cin >> pos;

 int item;
 cout << "Enter the item to insert: " << endl;
 cin >> item;



 for(int j = n; j>=pos; j--)
 {
  arr[j] = arr[j-1];
 }
arr[pos-1] = item;
n++;

cout << "The resize array is: " << endl;

for(i = 0; i < n; i++)
{
cout << "arr[" << i << "]" << " = " << arr[i] << endl;
}


    return 0;
}
