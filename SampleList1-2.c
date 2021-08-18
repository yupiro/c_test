#include<stdio.h>

void ChangeParam(int n)
{
        /* 仮引数nに変更を加える */
        n += 100;
        printf("ChangeParam()関数の仮引数n = %d\n", n);
}

main ()
{
    int i = 5;

    /* ChangePram()関数を呼び出す */
    ChangeParam(i);
    /* 変数iの内容を表示する */
    printf("ChangeParam()関数呼び出し後のi = %d\n", i);

    return 0;
}