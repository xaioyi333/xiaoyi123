#include <stdio.h>
#include <math.h>

int main() {
    // �������
    double e, a, b;

    // ���� e, a, b ��ֵ
    printf("������ e ��ֵ��");
    scanf("%lf", &e);
    
    printf("������ a ��ֵ��");
    scanf("%lf", &a);

    printf("������ b ��ֵ��");
    scanf("%lf", &b);

    // ���㷽�̽��
    double result = exp(a) + exp(b);

    // ������
    printf("e �� %.2lf �η����� 2 �� %.2lf �η����� e �� %.2lf �η������Ϊ %.2lf\n", e, a, b, result);

    return 0;
}
