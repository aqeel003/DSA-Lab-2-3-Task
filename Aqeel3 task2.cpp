#include<iostream>
using namespace std;
int main(){
    int searchValue;
    cout<<"Enter search value: "<<endl;
    cin>>searchValue;
    bool found = false;
    int numbers[10]={12,14,10,15,17,13,11,16,22,23};
    for(int i=0; i<10; i++){
        if(numbers[i] == searchValue){
            cout<<"Search found: "<<searchValue<<endl;
            found = true;
            break;
        }
    }
    if(!found){
        cout<<"Search not found: "<<searchValue<<endl;
    }
    return 0;
}