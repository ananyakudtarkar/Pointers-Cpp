#include <iostream>
using namespace std;

int main() {
    char str[] = "Batman";
    char* ptr = str;
    
    cout<<"String: ";
    while(*ptr !='\0'){
        cout<<*ptr;
        ptr++;
    }
     return 0;
}

/*
OUTPUT
String: Ananya

=== Code Execution Successful ===
*/
