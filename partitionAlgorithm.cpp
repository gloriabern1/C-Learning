#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main(){

vector<int> v={0,1,2,3,4,5,6,7,8,9};
//the partition moved all the elements that return true for the predicate to the beginning of the array.
//and then return the index iterator where the predicated starts returning false i.e "it"
auto it= partition(v.begin(), v.end(), [](int i){return i%2==0;});
//partitioned vector

copy(begin(v), it, ostream_iterator<int>(cout, " "));
 cout<< "* " " ";
 copy(it,end(v), ostream_iterator<int>(cout, " "));

}
