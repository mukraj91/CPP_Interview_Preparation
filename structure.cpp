#include<iostream>
using namespace std;

int main()
{
/*

struct Microsoft
{

   char name;

};

cout<<"Size of Structure : " <<sizeof(Microsoft)<<endl; // 1 Byte

*/

/*
struct Microsoft1
{

   char name; // 1 byte + 3 byte structure padding
   int companyID; // 4 byte

};

cout<<"Size of Structure : " <<sizeof(Microsoft1)<<endl; // 8 Byte

*/

// How to declare structure variables?
/*A structure variable can either be declared with structure declaration or
as a separate declaration like basic types.*/

struct Microsoft2
{

   char name; // 1 byte + 3 byte structure padding
   int companyID; // 4 byte

} window;

// Here window is declared as Microsoft2




struct Microsoft3
{

   char name; // 1 byte + 3 byte structure padding
   int companyID; // 4 byte

};


struct Microsoft3 microsoft3; // microsoft3 nothing but structure variable



//How to initialize structure members?

/*
 * Structure members cannot be initialized with declaration.
 * when a datatype is declared, no memory is allocated for it.
 * Memory is allocated only when variables are created.
 * */

/*
struct Microsoft4
{

   char *name = "Mukesh";
   int companyID = 4601;

}micro4;

cout<<"Print structure value:  "<< micro4.name << " : " << micro4.companyID<<endl;
*/

/*
 * structure.cpp: In function ‘int main()’:
structure.cpp:69:17: warning: non-static data member initializers only available with -std=c++11 or -std=gnu++11 [enabled by default]
    char *name = "Mukesh";
                 ^
structure.cpp:70:20: warning: non-static data member initializers only available with -std=c++11 or -std=gnu++11 [enabled by default]
    int companyID = 4601;
                    ^
structure.cpp:69:17: warning: deprecated conversion from string constant to ‘char*’ [-Wwrite-strings]
    char *name = "Mukesh";
 *
 * */


/*
struct Microsoft5
{

   string name;
   int companyID;

};

struct Microsoft5 microsoft5 = {"Mukesh", 4601};

cout<<"Print Microsoft5 value:  "<< microsoft5.name << " : " << microsoft5.companyID<<endl;

*/



/* What is an array of structures?
 *
 * Like other primitive data types, we can create an array of structures
 *
 * */

/*
struct Google
{
   string name;
   int companyID;

};

struct Google google[10]; // Created an array of Google structure

int i;

for(i = 0; i<10; i++)
{
   google[i].name = "Rojar";
   google[i].companyID = 123;
}

for(i = 0 ; i<10; i++)
{
   cout<<"Print Google value: " << i <<" ---> "<< google[i].name << " : " << google[i].companyID<<endl;

}*/

/*
What is a structure pointer?
Like primitive types, we can have pointer to a structure.
 If we have a pointer to structure, members are accessed using arrow ( -> ) operator.
*/



struct Amazon
{
   string name;
   int companyID;

};

struct Amazon amazon = {"Mukesh", 4609};

struct Amazon *amazon2 = &amazon; // amazon2 is a pointer to structure amazon


cout<<"Print Amazon Structure value:  "<< amazon2->name << " : " << amazon2->companyID<<endl;




typedef struct structa_tag
{
   char        c; // 1 Byte
   short int   s; // 2 Byte
} structa_t;

// 4Byte = 1Byte + 1 Byte Padding + 2 Byte

cout<<"sizeof(structa_t)= " << sizeof(structa_t)<<endl;



// structure B
typedef struct structb_tag
{
   short int   s; // 2 Byte
   char        c; // 1 Byte
   int         i; // 4 Byte
} structb_t;

// 8 Byte = 2 Byte + 1 Byte + 1 Byte Padding + 4 Byte

cout<<"sizeof(structb_t)= " << sizeof(structb_t)<<endl;



// structure C
typedef struct structc_tag
{
   char        c; // 1 Byte
   double      d; // 8 Byte
   int         s; // 4 Byte
} structc_t;


// 24 Byte = 1 Byte + 7 Byte Padding + 8 Byte + 4 Byte + 4 Byte Padding

cout<<"sizeof(structc_t)= " << sizeof(structc_t)<<endl;



// structure D
typedef struct structd_tag
{
   double      d; // 8 Byte
   int         s; // 4 Byte
   char        c; // 1 Byte
} structd_t;

// 16 Byte = 8 Byte + 4 Byte + 1 Byte + 3 Byte Padding

cout<<"sizeof(structd_t)= " << sizeof(structd_t)<<endl;







return 0;

}
