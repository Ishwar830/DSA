#include <iostream>
using namespace std;

// Print name N times using recursion

void print_msg(int n, string &msg){
    if(n == 0) return;
    cout << msg << endl;
    print_msg(n - 1, msg);
}


int main(){
    int n;
    string msg;
    cin >> n >> msg;
    print_msg(n, msg);
    return 0;
}