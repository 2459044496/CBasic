#include <stdio.h>
#include <float.h>

int main(void) {

    // �����ϰ7����дһ�����򣬽�һ��double���͵ı�������Ϊ1.0/3.0��
    // һ��float���͵ı�������Ϊ1.0/3.0���ֱ���ʾ���μ���Ľ����3�Σ�
    // һ����ʾС�������6λ���֣�һ����ʾС�������12λ���֣�һ����ʾС�������16λ���֡�
    // ������Ҫ����float.hͷ�ļ�������ʾFLT_DIG��DBL_DIG��ֵ��1.0/3.0��ֵ����Щֵһ����
    float float1 = 1.0 / 3.0;
    printf("float1 is %.6f\t%.12f\t%.16f", float1, float1, float1);
    printf("\nFLT_DIG is %d", FLT_DIG);
    printf("\nDBL_DIG is %d", DBL_DIG);

    // float1 is 0.333333      0.333333343267  0.3333333432674408
    // FLT_DIG is 6
    // DBL_DIG is 15

    return 0;
}