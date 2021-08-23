// �ڶ���
// 2.2 �������ͼ�����
/*
 * C����ֻ�ṩ�����м��ֻ�����������:
 * char    �ַ��ͣ�ռ��һ���ֽڣ����Դ�ű����ַ����е�һ���ַ�
 * int     ���ͣ�ͨ����ӳ�����û����������������Ȼ����
 * float   �����ȸ�����
 * double  ˫���ȸ�����
 * ���⣬����������Щ�����������͵�ǰ�����һЩ�޶�����
 * short��long�����޶��������޶����ͣ�
 * short int sh;
 * long int counter;
 * �������������͵������У��ؼ���int����ʡ�ԡ�ͨ����������
 *
 * short����ͨ��Ϊ16λ��long   32λ��int����Ϊ16λ��32λ��
 *
 * �����������Ը���Ӳ����������ѡ����ʵ����ͳ��ȣ���Ҫ��ѭ�������ƣ�
 * short��int��������Ϊ16λ����long��������Ϊ32λ������short���Ͳ��ó���int���ͣ�
 * ��int���Ͳ��ó���long���͡�
 *
 * �����޶���signed��unsigned�������޶�char���ͻ��κ����͡�
 * unsigned���͵���������ֵ��0������ѭ����ģ2��n�η����ɣ�����n�Ǹ�����ռ�õ�λ����
 * ���磬���char����ռ��8λ����ôunsigned char���ͱ�����ȡֵ��ΧΪ0~255��
 * ��signed char���ͱ�����ȡֵ��ΧΪ-128~127���ڲ��ö����Ʋ���Ļ����ϣ���
 * �����޶�����char���Ͷ����Ƿ��������ȡ���ھ�����������ɴ�ӡ�ַ�������ֵ��
 *
 * long double���ͱ�ʾ�߾��ȵĸ�������ͬ����һ�����������ĳ���Ҳȡ���ھ����ʵ�֣�
 * float��double��long double���Ϳ��Ա�ʾ��ͬ�ĳ��ȣ�Ҳ���Ա�ʾ���ֻ����ֲ�ͬ�ĳ��ȡ�
 *
 * �й���Щ���ͳ��ȶ���ķ��ų����Լ������������������йص����Կ����ڱ�׼ͷ�ļ�
 * <limits.h>��<float.h>���ҵ���
 * */
#include <stdio.h>
#include <limits.h>
#include <float.h>

// ��ϰ2-1 ��дһ��������ȷ���ֱ���signed��unsigned�޶���char��short��int��long���ͱ�����ȡֵ��Χ��
// ���ñ�׼ͷ�ļ��е���Ӧֵ�Լ�ֱ�Ӽ������ַ�ʽʵ�֡�
int main() {

    // %d����ռλ����Ĭ���з���
    // %u����ռλ�����޷��ű�ʾ

    // �������͵�λ�����ǹ̶��ģ�������й�

    // char unsigned��Χ0~255     signed��Χ-128~127
    printf("signed char bit:%d\n", CHAR_BIT);
    printf("signed char max value:%d\n", SCHAR_MAX);
    printf("signed char min value:%d\n", SCHAR_MIN);
    printf("unsigned char max value:%u\n", UCHAR_MAX); // ע�� %u
    /* ���
     * signed char bit:8
     * signed char max value:127
     * signed char min value:-128
     * unsigned char max value:255
     * */

    // short unsigned��Χ0~65535     signed��Χ-32768~32767
    printf("signed short max value:%d\n", SHRT_MAX);
    printf("signed short min value:%d\n", SHRT_MIN);
    printf("unsigned short max value:%u\n", USHRT_MAX); // ע�� %u

    /* ���
     * signed short max value:32767
     * signed short min value:-32768
     * unsigned short max value:65535
     * */

    // int unsigned��Χ0~4294967295     int-2147483648~2147483648
    printf("signed int max value:%d\n", INT_MAX);
    printf("signed int min value:%d\n", INT_MIN);
    printf("unsigned int max value:%u\n", UINT_MAX); // ע�� %u
    /* ���
     * signed int max value:2147483647
     * signed int min value:-2147483648
     * unsigned int max value:4294967295
     * */

    // long unsigned��Χ0~4294967295     int-2147483648~2147483647
    printf("signed long max value:%ld\n", LONG_MAX); // ע�� %ld
    printf("signed long min value:%ld\n", LONG_MIN); // ע�� %ld
    printf("unsigned long max value:%u\n", ULONG_MAX); // ע�� %u
    /* ���
     * signed long max value:2147483647
     * signed long min value:-2147483648
     * unsigned long max value:4294967295
     * */

    printf("int �洢��С: %lu \n", sizeof(int));
    printf("long �洢��С : %lu \n", sizeof(long ));
    // ���ҵĵ��������Ϊ4��AMD Ryzen 7 4800U with Radeon Graphics  1.80 GHz


/*              ֱ�Ӽ���            */
    printf("\n\n\n=========================\n");
    printf("signed char min = %d\n", -(char)((unsigned char)~0>>1)-1);
    printf("signed char max = %d\n", (char)((unsigned char)~0>>1));
    printf("signed short min = %d\n", -(short)((unsigned short)~0>>1)-1);
    printf("signed short max = %d\n", (short)((unsigned short)~0>>1));
    printf("signed int min = %d\n", -(int)((unsigned int)~0>>1)-1);
    printf("signed int max = %d\n", (int)((unsigned int)~0>>1));
    printf("signed long min = %ld\n", -(long)((unsigned long)~0>>1)-1);
    printf("signed long max = %ld\n", (long)((unsigned long)~0>>1));

    printf("unsigned char max = %u\n", (unsigned char)~0);
    printf("unsigned short max = %u\n", (unsigned short)~0);
    printf("unsigned int max = %u\n", (unsigned int)~0);
    printf("unsigned long max = %lu\n", (unsigned long)~0);


    return 0;
}