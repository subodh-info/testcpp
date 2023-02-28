#include <iostream>
#include <sstream>
using namespace std;

// simple tokenizer
// split string on space delimiter
void simple_tokenizer(string str){
    stringstream ss(str); // initialize stringstream object.
    string word;
    while(ss >> word){ // split sting on space char and push the result on word
        cout << word << endl;
    }
}

// a quick way to split strings separated via any character
//delimiter
void adv_tokenizer(string str, char del){
    stringstream ss(str);
    string word;
    while(!ss.eof()){
        getline(ss, word, del);
        cout << word << endl;
    }
}

int main(){
    string str = "How do you do!";
    simple_tokenizer(str);
    cout << "\n\n";
    string str2 = "How$do$you$do!";
    adv_tokenizer(str2, '$');
    return 0;
}