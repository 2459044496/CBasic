// �ڶ���
// 2.6 ��ϵ��������߼������
/*
 * ��ϵ������������м����������
 * >    >=  <   <=
 * ���Ǿ�����ͬ�����ȼ������ȼ����������ǵ���������������
 * ==   !=
 *
 * ��ϵ����������ȼ�������������͡���ˣ�����ʽ
 * i < lim-1 �ȼ��� i < (lim-1)��
 *
 * �߼������&&��||��һЩ��Ϊ��������ԡ���&&��||���ӵı���ʽ�������ҵ�˳�������ֵ��
 * ���ң���֪�����ֵΪ���ٺ�����ֹͣ���㡣
 *
 * �����&&�����ȼ���||�����ȼ��ߣ������߶��ȹ�ϵ����������������������ȼ��͡�
 *
 * ���ݶ��壬�ڹ�ϵ����ʽ���߼�����ʽ�У������ϵΪ�棬�����ʽ�Ľ��ֵΪ��ֵ1��
 * ���Ϊ�٣�����ֵΪ��ֵ0��
 *
 * �߼�����������������ǽ���0������ת��Ϊ0����������0ת��Ϊ1��
 * �������ͨ�������������ƵĽṹ�У�
 * if (!valid)
 * һ�㲻����������ʽ
 * if (valid == 0)
 * */