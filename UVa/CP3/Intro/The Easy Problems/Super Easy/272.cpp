#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
  vector<string> lines;
  string line ;
  
  bool quote = false;
  while ( getline(cin, line) && !line.empty())
  {
    for(size_t i = 0; i < line.length(); i++)
    {
      if(line[i] == '"' && quote == false)
      {
        i == 0 ? line = "``" + line.substr(i+1) : line = line.substr(0, i) + "``" + line.substr(i+1);
        //cout << "Found \" to replace with `` in index " << i << '\n';
        quote = true;
      } else if(line[i] == '"' && quote == true)
      {
        //cout << "Found \" to replace with '' in index " << i << '\n';
        // replace with ''
        line = line.substr(0, i) + "''" + line.substr(i+1);
        quote = false;
      }
    }
    lines.push_back(line);
  }
 
  for(size_t i = 0; i < lines.size(); i++)
  {
    cout << lines[i] << '\n';
  }

  return 0;
}