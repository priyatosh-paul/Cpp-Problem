#include <iostream>
#include <map>
#include <iterator>
using namespace std;
int main()
{
multimap <int, int> gquiz1; // empty multimap container
// insert elements in random order
gquiz1.insert(pair <int, int> (1, 40));
gquiz1.insert(pair <int, int> (2, 30));
gquiz1.insert(pair <int, int> (3, 60));
gquiz1.insert(pair <int, int> (4, 20));
gquiz1.insert(pair <int, int> (5, 50));
gquiz1.insert(pair <int, int> (6, 50));
gquiz1.insert(pair <int, int> (6, 10));
// printing multimap gquiz1
multimap <int, int> :: iterator itr;
cout << "\nThe multimap gquiz1 is : \n";
cout << "\tKEY\tELEMENT\n";
for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr)
{
cout << '\t' << itr->first
<< '\t' << itr->second << '\n';
}
cout << endl;
// assigning the elements from gquiz1 to gquiz2
multimap <int, int> gquiz2(gquiz1.begin(),gquiz1.end());
// print all elements of the multimap gquiz2
cout << "\nThe multimap gquiz2 after assign from gquiz1 is : \n";
cout << "\tKEY\tELEMENT\n";
for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr)
{
cout << '\t' << itr->first
<< '\t' << itr->second << '\n';
}
cout << endl;
// remove all elements up to element with value 30 in gquiz2
cout << "\ngquiz2 after removal of elements less than key=3 : \n";
cout << "\tKEY\tELEMENT\n";
gquiz2.erase(gquiz2.begin(), gquiz2.find(3));
for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr)
{
cout << '\t' << itr->first
<< '\t' << itr->second << '\n';
}
}