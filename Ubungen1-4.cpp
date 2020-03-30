#include <iostream>
#include <cstring>
#include <cassert>

using namespace std;

// Ubung1
char * strfind(const char * s, const char * f) {
    int len = 0;
    char *p = const_cast<char *>(f);

    for (int i = 0; i <= strlen(s); i++)
        for (int j = 0; j <= strlen(f); j++)
            if (s[i] == f[j]) {
                len++;
                p = p + i;
                break;

            }
    if (len == 0)
        return nullptr;
    else {
        return p;
    }
}

// ubung2 +3
struct ex2
{
       bool *b;
       long double *ld;
       int *i;
       char *c;
       double *d;
       long *l;

}*p;

//ubung4
int stringlen(string s)
{
    int i = 0, len = 0;
    while (s[i])
    {
        len++;
        i++;
    }
    return len;
}

void strcpy( string &destination, string source)
{
    destination= destination + source;
}

void test_ub4()
{
    string s1 = "wow";
    string s2 = "yay";
    assert(stringlen("Ana") == 3);
    assert(stringlen("This is a test.") == 15 );
    strcpy(s1,s2);
    assert(s1 == "wowyay");


}

int main() {
    cout << "Hello, World!" << endl;
    const char* s= "ab";
    const char* f = "dabdabf";

    // ubung 1
    //cout<<  strfind( s, f);

    // ubung2 + 3
    cout<< sizeof(ex2)<<endl; //24
    cout << sizeof(++p->i)<<endl; // 4
    cout << sizeof(p++->i)<<endl; //4
    cout << sizeof(*p->i) << endl; // 4
    cout<<sizeof(p->i++) << endl; //4
    cout << sizeof((*p->i)++) <<endl; //4
    cout<<sizeof(*p++->i) <<endl; // 4

    // ubung4
    test_ub4();


    return 0;
}
