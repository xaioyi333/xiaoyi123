#include <stdio.h>
#include <math.h>

int main() {
    // 定义变量
    double e, a, b;

    // 输入 e, a, b 的值
    printf("请输入 e 的值：");
    scanf("%lf", &e);
    
    printf("请输入 a 的值：");
    scanf("%lf", &a);

    printf("请输入 b 的值：");
    scanf("%lf", &b);

    // 计算方程结果
    double result = exp(a) + exp(b);

    // 输出结果
    printf("e 的 %.2lf 次方等于 2 的 %.2lf 次方加上 e 的 %.2lf 次方，结果为 %.2lf\n", e, a, b, result);

    return 0;
}
