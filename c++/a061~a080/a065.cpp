#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
    char ch[7];
    while (cin>>ch[0]>>ch[1]>>ch[2]>>ch[3]>>ch[4]>>ch[5]>>ch[6]){
        cout<<abs(ch[0]-ch[1]);
        cout<<abs(ch[1]-ch[2]);
        cout<<abs(ch[2]-ch[3]);
        cout<<abs(ch[3]-ch[4]);
        cout<<abs(ch[4]-ch[5]);
        cout<<abs(ch[5]-ch[6]);
        cout<<endl;
    }
    return 0;
}