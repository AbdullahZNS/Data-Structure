// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n,i;
    cout << "Enter the size of array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " Elements" << endl;
    for(i = 0; i < n; i++)
    {
     cin >> arr[i];
    }
    cout << "Array elements are: " << endl;
    for(i = 0; i < n; i++)
    {
     cout << arr[i] << " ";    
    }
    
    return 0;
}
