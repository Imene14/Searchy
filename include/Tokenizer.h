#pragma once
#include <vector>
#include <string>
#include <unordered_set>

class Tokenizer {
private:
    std::unordered_set<std::string> stop_words;

public:
    Tokenizer();
    std::vector<std::string> tokenize(const std::string& text);
    const std::unordered_set<std::string>& get_stop_words() const;
};
