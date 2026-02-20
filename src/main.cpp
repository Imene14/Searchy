#include <iostream>
#include <unordered_set>
#include "Tokenizer.h"

int main(){
    std::cout<< "Search engine project made by me imeeennn!!";
    Tokenizer tokenizer;
    std::unordered_set<std::string> stop_words = tokenizer.get_stop_words();
    std::cout<<"stop words \n";
    for(auto& word:stop_words){
        std::cout<<word << ", ";
    }
    std::cout<<"\n";
    std::string text = "hello my name is imen .";
    std::vector<std::string> tokens = tokenizer.tokenize(text);
    for(auto& token:tokens){
        std::cout<<token<<", ";
    }
    return 0;
}