#include<iostream>
using namespace std;

int main(){
    int size, start_index, jump;
    cin>>size>>start_index>>jump;
    int* arr = new int[size];
    int* jumparr = new int[jump];
    int* res = new int[jump+1];
    for(int i=0;i<size;i++){
        int a;
        cin>>a;
        arr[i] = a;
    }
    for(int i=0;i<jump;i++){
        int a;
        cin>>a;
        jumparr[i] = a%size;
    }
    int s_i,temp;
    res[0] = arr[start_index];
    s_i = start_index;
    for(int i=0; i<jump;i++){
        temp = (jumparr[i] + s_i) % size;
        res[i+1] = arr[temp];
        s_i = temp;
    }
    for(int i=0;i<jump+1;i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;

}