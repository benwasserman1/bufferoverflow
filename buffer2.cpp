#include <iostream>
using namespace std;
const int INPUT_SIZE = 10;
//string getString();
//void copyVals(string, char[]);
//void getSubstring(char[], char[]);
//void getChars(int, int, char[], char[]);

string getString()
{
  cout << "Please type a string: " << endl;
  string s;
  getline(cin, s);
  return s;
}

void copyVals(string s, char vals[])
{
  for (size_t i = 0; i < s.length(); i++) {
    vals[i] = s.at(i);
  }
  vals[s.length()] = '\0';
}

void getChars(size_t start, size_t end, char vals[], char newChars[])
{
  size_t sz = (end - start) + 1;
  // must do only sz-1 characters to leave room for terminator
  for (size_t i = 0; i < (sz - 1); i++)
    newChars[i] = vals[start + i];
  newChars[end] = '\0';
}

void getSubstring(char vals[], char newChars[])
{
  size_t start;
  size_t end;
  cout <<  "Starting point (integer index): " << endl;
  cin >> start;
  cout << "Ending point (integer index): " << endl;
  cin >> end;

  getChars(start, end, vals, newChars);
}

int main()
{
    char vals[INPUT_SIZE];
    char sub[INPUT_SIZE];
    string s1 = getString();

    copyVals(s1, vals);
    getSubstring(vals, sub);
    cout << "Sub string: " << sub << endl;

    return 0;
}
