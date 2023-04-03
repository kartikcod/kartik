// write  a program to find remainder
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout<<"enter two number:";
//     cin>>a>>b;
//     c=a+b;
//     cout<<"sum="<<c;
//     return 0;
// }
#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 3; // number to find

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            cout << "Number found at index " << i << endl;
            return 0;
        }
    }

    cout << "Number not found" << endl;
    return 0;
}