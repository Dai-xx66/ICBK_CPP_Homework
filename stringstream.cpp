#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    string text= "I love robot ";
    stringstream ss(text);
    string word;
    int count = 0;
    while(ss >> word){
    cout << word << endl;
    count++;
    }
    cout << endl;
    cout << "count: " << count << endl;
    cout <<endl;
    int start = 0;
    int end = 0;
    while (end < text.size()){
        if (text[end] == ' '){
            cout <<text.substr(start,end-start) <<endl;
            start = end+1;
        }
        end++;
    }
    cout << text.substr(start) <<endl;
    return 0;
}