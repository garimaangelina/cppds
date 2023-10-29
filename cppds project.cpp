#include<iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

struct Node {
     string data;
    Node* next;
};

Node* insert(Node* head,  string data,  map< string, int>& wordCount) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = head;
    head = newNode;
    wordCount[data] = wordCount[data] + 1;
    return head;
}

void Splitter( string a) {
    Node* head = nullptr;
     map< string, int> wordCount;
     vector< string> words;
     stringstream ss(a);
     string word;
    while (ss >> word) {
         transform(word.begin(), word.end(), word.begin(), ::tolower);
        words.push_back(word);
    }
     sort(words.begin(), words.end());
    for (int i = 0; i < words.size(); i++) {
         cout << (i + 1) << ": " << words[i] <<  endl;
        head = insert(head, words[i], wordCount);
    }
    for (const auto& pair : wordCount) {
        if (pair.second > 1) {
             cout << "Word \"" << pair.first << "\" is repeated " << pair.second << " times." <<  endl;
        }
    }
}

int main() {
     cout << "Enter a sentence" <<  endl;
     string cba;
     getline( cin, cba);
    Splitter(cba);
    return 0;
}
