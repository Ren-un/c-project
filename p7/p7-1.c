#include <stdio.h>

int main() {
    int n;
    printf("%d\t%d\t%d\n", sizeof 1,sizeof(unsigned)-1,sizeof n+2 ); //此行显示结果为 4 3 6 因为1的字节就是为4，而-1的字节也是4再减去-1所以显示为3，最后是n+2为6                                                                  
    printf("%d\t%d\t%d\n", sizeof +1, sizeof(double) - 1, sizeof(n + 2));//此行显示结果是 4 7 4 因为1的字节是4，double的字节长是8 -1是7，把（n+2）括起来之后使其为一个值，所以是4；
    printf("%d\t%d\t%d\n", sizeof - 1, sizeof((double)-1), sizeof (n + 2.0)  );//此行结果是 4 8 8 因为1的字节是4，把double-1都括起来之后，就是double类型字节为8，同理最后也是8
}