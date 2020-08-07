#include <iostream>
#include <vector>

using namespace std;

typedef pair<int, int> Package;

long merge(vector<Package>& arr, int left, int mid, int right) 
{ 
    long counter_inversions = 0; 
    int n1 = mid - left + 1;
    int n2 = right - mid; 

    vector<Package> L(n1);
    vector<Package> R(n2);

    for (int i = 0; i < n1; i++) 
        L[i] = arr[left + i]; 
    for (int j = 0; j < n2; j++) 
        R[j] = arr[mid + 1 + j]; 
    
    int i = 0;
    int j = 0;
    int k = left;

    while (i < n1 && j < n2) { 
        if (L[i].first <= R[j].first) { 
            arr[k] = L[i]; 
            i++; 
        } 
        else { 
            arr[k] = R[j];
            counter_inversions += (n1 - i) * (R[j].second);
            for (int r = n1 - 1; r >= i; r--) {
                counter_inversions += L[r].second;
            }
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

long mergeSort(vector<Package>& arr, int left, int right) 
{ 
    long counter_inversions = 0; 
    if (right > left) { 
        
        int mid = left + (right - left) / 2; 
  
        counter_inversions += mergeSort(arr, left, mid); 
        counter_inversions += mergeSort(arr, mid + 1, right); 
  
        counter_inversions += merge(arr, left, mid, right); 
    } 
    return counter_inversions; 
} 

long countInversions(vector<Package> arr) {
    long counter_inversions = 0;
    counter_inversions = mergeSort(arr, 0, arr.size() - 1);
    return counter_inversions;
}

int main(void) {
    int n;
    while (cin >> n) {
        vector<Package> packages(n);

        for(int i = 0; i < n; i++) {
            cin >> packages[i].first;
        }
        
        for(int i = 0; i < n; i++) {
            cin >> packages[i].second;
        }
        cout << countInversions(packages) << endl;
    }
}
