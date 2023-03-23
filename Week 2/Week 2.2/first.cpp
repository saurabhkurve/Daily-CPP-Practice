// Write a program to count the minimum number of notes in a given amount using the switch statement.
// Input 1: 510
// Output1 : notes of “500” = 1 and notes of “10” = 1

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int amount;
    int n1,n2,n5,n10,n20,n50,n100,n200,n500;  //notes 
    n1=n2=n5=n10=n20=n100=n200=n500=0;
    cout<<"Please enter your amount to find the notes: "<<endl;
    cin>>amount;

    switch(amount>=500){
        case 1:
            n500=amount/500;
            amount -=n500*500;
             cout<<"notes of 500 = "<<n500<<endl;
            break;
    }

    switch(amount>=200){
        case 1:
            n200=amount/200;
            amount -=n200*200;
             cout<<"notes of 200 = "<<n200<<endl;
            break;
    }

    switch(amount>=100){
        case 1:
            n100=amount/100;
            amount -= n100*100;  //helps to jump on next switch statement
            cout<<"notes of 100 = "<<n100<<endl;
            break;
    }
    switch(amount>=50){
        case 1:
            n50 = amount/50;
            amount -=n50*50;
            cout<<"notes of 50 = "<<n50<<endl;
            break;
    }
    switch(amount>=20){
        case 1:
            n20 = amount/20;
            amount -= n20*20;
            cout<<"notes of 20 = "<<n20<<endl;
            break;
    }
    switch(amount>=10){
        case 1:
            n10 = amount/10;
            amount -=n10*10;
            cout<<"notes of 10 = "<<n10<<endl;
            break;
    }
    switch(amount>=5){
        case 1:
            n5=amount/5;
            amount -=n5*5;
            cout<<"notes of 5 = "<<n5<<endl;
            break;
    }
    switch(amount>=2){
     case 1:
            n2=amount/2;
            amount -=n2*2;
            cout<<"notes of 2 = "<<n2<<endl;
            break;
    }
    switch(amount>=1){
        case 1:
            n1 =amount/1;
            amount -= n1*1;
            cout<<"notes of 1 = "<<n1<<endl;
            break;
    }
   
    return 0;
}