#include <iostream>
#include <string>
#include <fstream>
#include <fcntl.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
    std :: string  str = "fhs.html";
    int d = open(str.c_str(), O_RDWR);
    std :: cout << d << std::endl;
    if(d == -1)
     close(d);
}