#include <iostream>
using namespace std;
int sum(int n){
    if(n==1) return 1;
    return n + sum(n-1);
}
int main(){

    int na;
    cout << "Enter The Number: ";
    cin >> na;
    
    cout<<sum(na);
    
    return 0;
}