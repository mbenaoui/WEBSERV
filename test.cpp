#include <iostream>
#include <string>
#include <map>
#include <vector>
class Thread
{
private:
  int a;
  std::string name;

public:
  Thread(int a, std::string name)
  {
    this->a = a;
    this->name = name;
  }
};

std::vector<void *> v;

void f()
{
  std::map<std::string, Thread *> mp;

  mp.insert(std::make_pair("1", new Thread(1, "badr")));
  mp.insert(std::make_pair("12", new Thread(1, "badr")));
  mp.insert(std::make_pair("13", new Thread(1, "badr")));
  mp.insert(std::make_pair("14", new Thread(1, "badr")));
  mp.insert(std::make_pair("15", new Thread(1, "badr")));
  std::map<std::string, Thread *>::iterator it;
  it = mp.begin();
  delete it->second;
  mp.erase(it);

  it = mp.begin();
  delete it->second;
  mp.erase(it);
  it = mp.begin();
  delete it->second;
  mp.erase(it);
  it = mp.begin();
  delete it->second;
  mp.erase(it);
  // delete it->second;
  //   it = mp.begin();
  // delete it->second;
  //   it = mp.begin();
  // delete it->second;
  std::map<std::string, Thread *> mp1;
  mp1.insert(std::make_pair("1", new Thread(1, "badr")));
  mp1.insert(std::make_pair("12", new Thread(1, "badr")));
  mp1.insert(std::make_pair("13", new Thread(1, "badr")));
  mp1.insert(std::make_pair("14", new Thread(1, "badr")));
  mp1.insert(std::make_pair("15", new Thread(1, "badr")));
  mp = mp1;
}

// C/C++ program for splitting a string
// using strtok()

// C/C++ program for splitting a string
// using strtok()
void ff()
{
  // La chaine de caractères à traiter.
  char *str = (char *)"all_url.c_str()";
  if (strchr(str, '?'))
    ;
}
int main()
{
  ff();
  ff();
  ff();
  ff();
  ff();
  while (1)
    ;
  // system("leaks a.out");
  return 0;
}
