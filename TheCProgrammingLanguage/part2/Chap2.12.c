// �ڶ���
// 2.12 ��������ȼ�����ֵ����

/*
 * ����������ȼ��ͽ���Ժ��������OneNote�С�
 *
 * һԪ�����+��-��&��*�����ȼ�����Ӧ�Ķ�Ԫ�����+��-��&��*�����ȼ��ߡ�
 * λ�����&��^��|�����ȼ��������==�룡=�ĵ͡�����ζ�ţ�λ���Ա���ʽ��
 * if ((x & MASK) == 0)...
 * ������Բ�������������ܵõ���ȷ�����
 *
 * C����û��ָ��ͬһ������ж���������ļ���˳��&&��||����=��","��������⣩��
 * ���磬������
 * x = f() + g();
 * ������У�f()������g()֮ǰ���㣬Ҳ������g()֮�����㡣��ˣ��������f��g�ı���
 * ��һ��������ʹ�õı�������ôx�Ľ�����ܻ������������������ļ���˳��
 * Ϊ�˱�֤�ض��ļ���˳�򣬿��԰��м�����������ʱ�����С�
 *
 * ���Ƶģ�C����Ҳû��ָ����������������ֵ˳����ˣ��������
 * printf("%d %d\n", ++n, power(2, n)); // ��
 * �ڲ�ͬ�ı������п��ܻ������ͬ�Ľ������ȡ����n������������power����֮ǰ����֮��ִ�С�
 * ����İ취�ǰѸ�����д��������ʽ��
 * ++n;
 * printf("%d %d\n", n, power(2, n));
 * �������á�Ƕ�׸�ֵ��䡢�������Լ���������п��ܲ����������á�--�ڶԱ���ʽ��ֵ��ͬʱ��
 * �޸���ĳЩ������ֵ�����и�����Ӱ��ı���ʽ�У���ִ�н���ڱ���ʽ�еı����޸ĵ�˳��
 * ֮�������΢���������ϵ������������һ�����͵����˲����������
 * a[i] = i++;
 * �����ǣ������±�i�����þ�ֵ����������ֵ���ڱ������йء�
 *
 * */