#include <iostream>
#include <unordered_map>
#include <string>
#include <sstream>
using namespace std;

int main(){
    string sentence ="Please my excuse my dear aunt sally";
    istringstream Line(sentence);
    string word;
    unordered_map<string, int> records;
    while(Line >> word){
        if(records.find(word)!= records.end()){
            records[word]+= 1;
            
        }
        else{
            records[word] = 1;
        
        }
        
    }
    for (auto& [word, num] : records){
		cout << word << " "<< num<< endl;
}
    
}
