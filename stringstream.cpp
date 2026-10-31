#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main(){
    string text= "I love robot ";
    stringstream ss(text);
    string word;
    int count = 0;
    vector<string> words;

    while(ss >> word){
    cout << word << endl;
    words.push_back(word);
    count++;
}
    cout << endl;
    cout << "count: " << count << endl;
    cout <<endl;
    cout << "Reverse: ";

for(int i = words.size(); i > 0; i--){
    cout << words[i - 1] << " ";
}

cout << endl;
    return 0;
}