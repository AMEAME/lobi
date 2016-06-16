#include <stdio.h>

int main()
{
    // -- nを入力させます。--
    int n;
    printf("n = ");
    scanf("%d", &n);

    // -- aを入力させます。 --
    int a[n + 1];
    int i;
    
    // この下のfor文の書き方は覚えておいてください。
    // for (int i = 0; i < n; i++) {}
    // これで0からn-1までn回ループさせるという意味です。
    for (i = 0; i < n + 1; i++)
    {
        int index = n - i;  // 後ろからループさせるためにn-iを使う
        
        int coefficient;
        printf("a%d = ", index);
        scanf("%d", &coefficient);
        
        a[index] = coefficient;
    }
    
    // -- f(x)を表示
    printf("f(x) = ");
    
    for (i = 0; i < n + 1; i++)
    {
        int index = n - i;
        if (a[index] == 0) continue;  // 係数がない場合は、次の項に行きます
        
        if (i != 0) printf(" + ");  // 初項以外に+を書きます
        if (a[index] != 1) printf("%d", a[index]);  // 係数が1じゃないとき係数を出力します
        if (index > 0) printf("x");  // 次数が0じゃないとき、"x"を出力します
        if (1 < index) printf("^%d", index);  // 次数が2以上のとき、"^"と次数を出力します
    }
    printf("\n");
    
    // -- f'(x)を表示
    printf("f'(x) = ");
    
    for (i = 0; i < n + 1; i++)
    {
        int index = n - i;
        if (a[index] * index == 0) continue;
        if (i != 0) printf(" + ");
        if (a[index] * index != 1) printf("%d", a[index] * index);
        if (index > 1) printf("x");
        if (2 < index) printf("^%d", index - 1);
    }
    printf("\n");
    
    return 0;
}
