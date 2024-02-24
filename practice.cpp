#include <iostream>
#include <string>
using namespace std;
int main()
{
    char a[101];

    while(fgets(a,sizeof(a), stdin) != NULL)
        printf("%s" ,a);
    
    return 0;
}