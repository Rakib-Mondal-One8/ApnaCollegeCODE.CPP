#include<iostream>
using namespace std;
//SORTNG ARRAY IN DESCENDING ORDER ##

// int main () {
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0; i<n; i++) {
//         cin>>arr[i];
//     }
//     for(int i=0; i<n-1; i++) {
//         for( int j=i+1; j<n; j++) {
//             if(arr[j]>arr[i]) {
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }

//     for(int i=0; i<n; i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

 //SORTING ARRAY IN ASCENDING ORDER ##
int main() {

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[j]<arr[i]) {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}   
      
