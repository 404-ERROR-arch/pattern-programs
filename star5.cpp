#include<iostream>
using namespace std;


void star5(char x){

    for(int i=0;i<5;i++){

        for(int j =0; j<5;j++){
            if(j>=i)
                cout<<x;
            else 
                 cout<<" ";

        }
        cout<<endl;
    }




}


int main(){

    char x;
    cout<<"Enter the character you want to use in start pattern\n";
    cin>>x;

    star5(x);


}

