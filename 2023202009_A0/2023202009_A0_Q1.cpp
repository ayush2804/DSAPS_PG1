#include<iostream>
#include<string>
using namespace std;
bool ana(string a, string b){
    long long asci1 = 0 ,asci2 = 0;
        int tempas,temp2as;
        for(char i: a){
        tempas = i;
        asci1+=tempas;
        if(b.find(i) == string::npos){
            return false;
        }
    }
    for(char i: b){
        temp2as = i;
        asci2+=temp2as;
        if(a.find(i) == string::npos){
            return false;
        }
    }
    if(asci1!=asci2){
        //cout<<asci1<<" "<<asci2;
        return false;
    }
    return true;
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