#include<iostream>
using namespace std;

int main()
{

struct Microsoft
{

   char name;

};

cout<<"Size of Structure : " <<sizeof(Microsoft)<<endl; // 1 Byte


struct Microsoft1
{

   char name; // 1 byte + 3 byte structure padding
   int companyID; // 4 byte

};

cout<<"Size of Structure : " <<sizeof(Microsoft1)<<endl; // 8 Byte



return 0;
}
