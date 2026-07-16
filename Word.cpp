#include<iostream>
using namespace std;

int main(){
    string word;
    cin>>word;
    int countUp = 0;
    int countLow = 0;
    
    for(int i=0; i<word.length(); i++){
        if(word[i] >= 'A' && word[i] <= 'Z'){
            countUp++;
        }else{
            countLow++;
        }
    }
    if(countUp > countLow){
        for(int i=0; i<word.length(); i++){
            if(word[i] >= 'a' && word[i] <= 'z'){
                word[i] = word[i] - 32;
            }
        }
    }else{
        for(int i=0; i<word.length(); i++){
            if(word[i] >= 'A' && word[i] <= 'Z'){
                word[i] = word[i] + 32;
            }
        }
    }
    cout<<word<<endl;

    return 0;
}