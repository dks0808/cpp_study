#include <iostream>
 
int main()
{
    printf("문자열을 입력후 엔터를 누르세요!\n");

    char a[256];
    scanf("%s", a);

    printf(" \" %s \" 를 입력하셨네요.\n", a);
    
    return 0;
}