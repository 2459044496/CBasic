// �ڶ���
// 2.7 ����ת��
/*
 * һ����˵���Զ�ת����ָ�ѡ��Ƚ�խ�ġ�������ת��Ϊ���ȽϿ��ġ������������Ҳ��ᶪʧ��Ϣ��ת����
 * ���磬�ڼ������ʽ f+i �У������ͱ��� i ��ֵ�Զ�ת��Ϊ������������ı��� f Ϊ�����ͣ���
 *
 * ������ʹ��������ı���ʽ�����磬��������float���͵ı���ʽ��Ϊ�±ꡣ
 *
 * ����char���;��ǽ�С�����ͣ��������������ʽ�п�������ʹ��char���͵ı�����
 * ���Ϊʵ��ĳЩ�ַ�ת���ṩ�˺ܴ������ԡ�
 * ���磬����ĺ���atoi������һ������ת��Ϊ��Ӧ����ֵ��
 * ��׼ͷ�ļ�<ctype.h>������һ�����ַ����޹صĲ��Ժ�ת��������
 *
 * ���ַ�����ת��Ϊ����ʱ��������Ҫע��һ�㡣C����û��ָ��char���͵ı�����
 * �޷��ű�����signed�����Ǵ����ű�����unsigned����
 * ����һ��char���͵�ֵת��Ϊint���͵�ֵʱ��������û�п���Ϊ��������
 * ���ڲ�ͬ�Ļ���������Ҳ��ͬ���ⷴӳ�˲�ͬ�����ṹ֮�������
 * Ϊ�˱�֤����Ŀ���ֲ�ԣ����Ҫ��char���͵ı����д洢���ַ����ݣ����
 * ָ��signed��unsigned�޶�����
 *
 * ����ϵ����ʽ���� i>j ���Լ���&&��||���ӵ��߼�����ʽ���ж����Ϊ��ʱ������ʽ
 * ��ֵΪ1�����ж����Ϊ��ʱ������ʽ��ֵΪ0��
 * ��if��while��for�����Ĳ��Բ����У����桱����ζ�š���0���������֮��û������
 *
 * ��¼A.6����ϸ���г���ת������
 * ���ǣ����û��unsigned���͵Ĳ���������ֻҪʹ��������Щ����ʽ�Ĺ���Ϳ����ˣ�
 * 1���������һ��������������Ϊlong double������һ��������ת��Ϊlong double���ͣ�
 * 2��һ��double������һ��double��
 * 3��һ��float������һ��float��
 * 4����char��short���͵Ĳ�����ת��Ϊint���ͣ�
 * 5��һ��long������һ��long��
 * ע�⣬����ʽ��float���͵Ĳ����������Զ�ת��Ϊdouble���͡�
 *
 * ������ʽ�а���unsigned���͵Ĳ�����ʱ��ת������Ҫ����һЩ��
 * ע��ԭ�����ڣ�������ֵ���޷���ֵ֮����������������صģ�ӦΪ����ȡ���ڻ����в�ͬ�������͵Ĵ�С��
 * ���磬�ٶ�int����ռ16λ��long����ռ32λ����ô��-1L<1U��������Ϊunsigned int���͵�
 * 1U��������Ϊsigned long���ͣ���-1L>1UL��������Ϊ-1L��������Ϊunsigned long���ͣ�
 * �����Ϊһ���Ƚϴ��������
 *
 * ��ֵʱҲҪ��������ת������ֵ������ұߵ�ֵ��Ҫת��Ϊ��߱��������ͣ���߱��������ͼ�
 * ��ֵ����ʽ��������͡�
 *
 * �����Ƿ���з�����չ���ַ��ͱ���������ת��Ϊ���ͱ�����
 * ���ѽϳ�����������ת��Ϊ�϶̵�������char����ʱ�������ĸ�λ���ֽ���������
 * ��ˣ����г����
 *  int i;
 *  char c;
 *
 *  i = c;
 *  c = i;
 * ִ�к�c��ֵ�����ֲ��䡣
 * �����Ƿ���з�����չ���ý��۶����������ǣ������������ֵ���Ĵ���ߵ�һ�£���
 * ִ�к���ܻᶪʧ��Ϣ��
 *
 * ���xʱfloat���ͣ�i��int���ͣ���ô���x=i��i=x��ִ��ʱ��Ҫ��������ת����
 * ����float����ת��Ϊint����ʱ��С�����ֽ�����ȡ��������double����ת��Ϊ
 * float����ʱ���ǽ����������뻹�ǽ�ȡȡ���ھ����ʵ�֡�
 *
 * ���ں������õĲ����Ǳ���ʽ�������ڰѲ������ݸ�����ʱҲ���ܽ�������ת����
 * ��û�к���ԭ�͵�����£�char��short���Ͷ�����ת��Ϊint���ͣ�float���ͽ���
 * ת��Ϊdouble���͡���ˣ���ʹ���ú����Ĳ���Ϊchar��float���ͣ�����Ҳ��
 * ������������Ϊint��double���͡�
 *
 * ���κα���ʽ�ж�����ʹ��һ����Ϊǿ������ת����һԪ�����ǿ�ƽ�����ʾ����ת����
 * ��������������ʽ
 * ǿ������ת��ֻ������һ��ָ�����͵�ֵ��������û�иı䣬
 * ǿ������ת��������һԪ�����������ͬ�����ȼ���
 *
 * ��ͨ������£�������ͨ������ԭ�������ġ�������������������ʱ���������Բ��������Զ�ǿ��ת����
 * ���磬����sqrt�ĺ���ԭ��
 * double sqrt(double);
 * ���к�������
 * root2 = sqrt(2);
 * ����Ҫʹ��ǿ������ת��������Ϳ����Զ�������2ǿ��ת��Ϊdouble���͵�ֵ2.0��
 * */

#include <stdio.h>

// ��һ������ת��Ϊ��Ӧ����ֵ��
int atoi(char s[]);

// ��char����ת��Ϊint���ͣ���ASCII�ַ����е��ַ�ӳ�䵽��Ӧ��Сд��ĸ��
// �����ת�����ַ����Ǵ�д��ĸ��lower�����������ַ�������
int lower(int c);

int main() {
    char s[] = "823";
    printf("value:%d", atoi(s));
    int c = 65;
    printf("\nvalue:%d", lower(c));

    // ���
  /*value:823
    value:97
    */
}

int atoi(char s[]) {
    int i;
    int n = 0;

    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i) {
        n = 10 * n + (s[i] - '0');
    }
    return n;
}

int lower(int c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 'a' - 'A';
    } else {
        return c;
    }
}