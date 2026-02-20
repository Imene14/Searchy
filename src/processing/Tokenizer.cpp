#include "Tokenizer.h"
//#include "porter2_stemmer.h" 
#include <sstream>
#include <algorithm>

Tokenizer::Tokenizer() {
    stop_words = {"the", "is", "at", "on", "and", "a", "of", "to", "in"};
}

std::vector<std::string> Tokenizer::tokenize(const std::string& text) {
    std::vector<std::string> tokens;
    std::stringstream ss(text);
    std::string word;

    while (ss >> word) {
        std::transform(word.begin(), word.end(), word.begin(), ::tolower);
        word.erase(std::remove_if(word.begin(), word.end(), ::ispunct), word.end());

        if (stop_words.find(word) == stop_words.end()) {
            if(word.size()==0){
                continue;
            }
            //porter2_stemmer::stem(word);
            tokens.push_back(word);
        }
    }

    return tokens;
}
const std::unordered_set<std::string>& Tokenizer::get_stop_words() const {
    return stop_words;
}
