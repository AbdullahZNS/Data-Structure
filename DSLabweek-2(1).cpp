// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {

cout << "Enter the number of students: " << endl;
int n;
cin >> n;

int arr[n];
int i;

cout << "Enter the secure marks of " << n << " students: " << endl;
for(i = 0; i < n; i++)
{
cin >> arr[i];
}

int cnt = 0;
for(i = 0; i<n; i++)
{
     if(arr[i] >= 40)
     {
      cnt++;
     }
}

cout << "The number of passed students:" << cnt << endl;
    return 0;
}
