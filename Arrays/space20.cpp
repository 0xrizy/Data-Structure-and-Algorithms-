#include <iostream>
#include <vector>
#include <string>
using namespace std;

void func(string &s){
    int n = s.size();
    int space =0;
    for(int i =0;i<n;i++){
        if(s[i]==' ') space++;
    }
    //counted number of spaces
    int right = n+2*space;
    int left = n;
    while(left!=0 &&  right != left && right!=0){ // can be implemented using for loop
        if(s[left]!=' ') {
            s[right] = s[left];
            right--;
            left--;
        }
        else if(s[left]==' '){
            s[right] = '0';
            s[--right] ='2';
            s[--right] = '%';
            left--;
            right--;
        }
    }
}

int main(){
    string s="Hello World,  How are you                                          ";
    func(s);
    cout<<s<<endl;
    return 0;
}