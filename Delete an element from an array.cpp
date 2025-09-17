// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int arr[100],n,i;
cout << "Enter the size of array: " << endl;
cin >> n;

cout << "Enter " << n << " elements: " << endl;
for(i = 0; i < n; i++)
{
cin >> arr[i];
}

int pos;
cout << "Enter the position to delete from(0 to " << n-1 << ")" << endl;
cin >>pos;
for(i = pos; i < n-1; i++)
{
 arr[i] = arr[i+1];    
}
n--;
cout << "After deleting " << arr[pos] << endl;
for(i = 0; i < n; i++)
{
cout << arr[i] << " ";    
}

    return 0;
}
