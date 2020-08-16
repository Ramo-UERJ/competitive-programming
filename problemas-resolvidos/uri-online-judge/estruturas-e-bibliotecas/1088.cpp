#include <iostream>
#include <vector>

using namespace std;

long merge(vector<long long>& arr, long long left, long long mid, long long right) {
    long long counter_inversions = 0; 
    long long n1 = mid - left + 1;
    long long n2 = right - mid; 

    vector<long long> L(n1);
    vector<long long> R(n2);

    for (long long i = 0; i < n1; i++) 
        L[i] = arr[left + i]; 
    for (long long j = 0; j < n2; j++) 
        R[j] = arr[mid + 1 + j]; 
    
    long long i = 0;
    long long j = 0;
    long long k = left;

    while (i < n1 && j < n2) { 
        if (L[i] <= R[j]) { 
            arr[k] = L[i]; 
            i++; 
        } 
        else { 
            arr[k] = R[j];
            counter_inversions += (n1 - i);  
            j++; 
        } 
        k++; 
    } 
  
    while (i < n1) { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 

    while (j < n2) { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    }

    return counter_inversions; 
} 


long long mergeSort(vector<long long>& arr, long long left, long long right) { 
    long long counter_inversions = 0; 
    if (right > left) { 
        
        long long mid = left + (right - left) / 2; 
  
        counter_inversions += mergeSort(arr, left, mid); 
        counter_inversions += mergeSort(arr, mid + 1, right); 
  
        counter_inversions += merge(arr, left, mid, right); 
    } 
    return counter_inversions; 
} 

long long countInversions(vector<long long> arr) {
    long long counter_inversions = 0;
    counter_inversions = mergeSort(arr, 0, arr.size() - 1);
    return counter_inversions;
}

int main (void) {
    long long n;
    cin >> n;
    while (n) {
        vector<long long> arr(n);
        for (long long i = 0; i < n; i++) {
            cin >> arr[i];
        }

        cout << (countInversions(arr) % 2 == 0 ? "Carlos" : "Marcelo") << endl;
        cin >> n;
    } 
    return 0;
}