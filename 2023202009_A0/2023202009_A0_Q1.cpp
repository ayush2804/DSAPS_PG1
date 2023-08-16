#include<iostream>
#include<string>
using namespace std;
void merge(string &str, int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    string L = str.substr(left, n1);
    string R = str.substr(mid + 1, n2);

    i = 0;
    j = 0;
    k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            str[k] = L[i];
            i++;
        } else {
            str[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        str[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        str[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(string &str, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(str, left, mid);
        mergeSort(str, mid + 1, right);
        merge(str, left, mid, right);
    }
}
bool ana(string a, string b){
    mergeSort(a, 0, a.length() - 1);
    mergeSort(b, 0, b.length() - 1);
    return a==b;
}
int main(){
    string a,b;
    
    cin>>a>>b;
    bool res = ana(a,b);
    if(res){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
   return 0; 
}