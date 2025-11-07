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

 int pos;
 cout << "Enter the position to delete: " << endl;
 cin >> pos;
 for(int j = pos-1; j <= pos-1; j++)
 {
 arr[j] = arr[j+1];
 }

  n--;

  cout << "The resize array is: " << endl;

  for(i = 0; i < n; i++)
  {
  cout << "arr[" << i << "]" << " = " << arr[i] << endl;
  }

    return 0;
}
