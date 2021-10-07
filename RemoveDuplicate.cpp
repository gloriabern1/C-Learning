#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<string> elimdups(vector<string> &words);
bool IsShorter(const string &s1, const string &s2);

int main(){

vector<string> wordarr={"the", "quick", "red", "fox", "jumps", "over", "the", "slow","red","turtle"};
auto formattedvector=elimdups(wordarr);

//call the ishorter binary predicate to sort the unique words by  word length
//sort(formattedvector.begin(), formattedvector.end(), IsShorter);

// resort by length, maintaining alphabetical order among words of the same length
stable_sort(formattedvector.begin(), formattedvector.end(), IsShorter);

//vectors cannot be displayed like javascript arrays.
//It has to be iterated to access its individual element
 for(int i=0; i<formattedvector.size(); i++){
      cout<<formattedvector[i]<<endl;
  }


}

vector<string> elimdups(vector<string> &words){
//Sort worjs alphabetically to get duplicates;
sort(words.begin(), words.end());
// unique  reorders the input range so that each word appears once in the
// front portion of the range and returns an iterator one past the unique range
auto end_unique= unique(words.begin(), words.end());
// erase uses a vector operation to remove the nonunique elements

words.erase(end_unique, words.end());
return words;
}

//Comparison function to be used to sort by word length
bool IsShorter(const string &s1, const string &s2){
 return s1.size()<s2.size();
}