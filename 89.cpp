#include<iostream>
using namespace std;
void test(int x){
    try {
        if(x>0)
        throw x;
        else
        throw 'x';
    } catch (int x){
        cout<<"catch a integer and that integer is:\n"<<x<<endl;
    } catch (char x){
        cout<<"catch a character and that character is:\n"<<x<<endl;
    }
}
int main (){
    cout<<"testing multiple catches:\n";
    test(10);
    test(0);
    return 0;
}