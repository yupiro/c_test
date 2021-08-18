#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/* 関数のプロトタイプ宣言 */
void OperationError(char *pstr);

int main(int argc, char *argv[])
{
    FILE *pfile;
    int n, count = 0;

    /* ヘルプを表示する */ 
    if (argc > 3 || !strcmp(argv[1], "/?") || !strcmp(argv[1], "-?"))
    {
        OperationError("プロトタイプ宣言テストプログラム\n\n"
            "起動方法：Poto 入力ファイル名 [ > 出力ファイル名]\n");
    }

    /* バイナリ読み取りモードでファイルを開く */
    if ((pfile = fopen(argv[1], "rb")) == NULL )
        OperationError("入力ファイルを開けませんでした。\n");

        /* EOFを返すまで読み取りを繰り返す。 */
    while ((n = fgetc(pfile)) != EOF)
        /* 文字nを出力する(標準出力) */
        fputc(n, stdout);

        /* ファイルを閉じる */
        fclose(pfile);

        return 0;

}




/* エラーメッセージを表示して異常終了する関数。 */
void OperationError(char *pstr)
{
    fprintf(stderr, pstr);
    exit(1);
}