#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str ="Oriental college of technology";
   char first = str[0];
   char last = str[str.length()-1];
   cout <<"First character = "<<first<<endl;
   cout<<"Last character = "<<last<<endl;
   return 0;
}