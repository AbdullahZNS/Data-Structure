#include <iostream>
using namespace std;

int main()
{
 int arr[100],i,n;
 
 cout << "Enter the size of array" << endl;
 cin >> n;
 
 cout << "Enter " << n << " elements: " << endl;
 for(i = 0; i < n; i++)
 {
  cin >> arr[i];
 }
 
 int pos,value;
 cout <<"Enter the position to insert from(0 to " <<n-1 << ")" << endl;
 cin >> pos;
 cout << "Enter value to insert" << endl;
 cin >> value;
 
 
 for(i = n; i > pos; i--)
 {
  arr[i] = arr[i-1];
 }
 arr[pos] = value;
 n++;
 
 cout << "After inserting " << value << " "<< endl;
 for(i = 0; i < n; i++)
 {
  cout  << arr[i] <<" ";
 }
return 0;
}
