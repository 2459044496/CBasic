#include <stdio.h>
#include <string.h>

int main(void) {

    // �����ϰ5����дһ��������ʾ�û���������λÿ�루Mb/s��Ϊ��λ�������ٶȺ������ֽڣ�MB��Ϊ��λ���ļ���С��
    // ������Ӧ�����ļ�������ʱ�䡣ע�⣬����1�ֽڵ���8λ��ʹ��float���ͣ�����/��Ϊ���š�
    // �ó���Ҫ������ĸ�ʽ��ӡ3��������ֵ�������ٶȡ��ļ���С������ʱ�䣩����ʾС���������λ���֣�
    float megabitsPerSecond;// ����λÿ�루Mb/s��Ϊ��λ�������ٶ�
    float megabits;// �����ֽڣ�MB��Ϊ��λ���ļ���С
    printf("Enter megabitsPerSecond and megabits:");
    scanf("%f %f", &megabitsPerSecond, &megabits);
    printf("At %2.2f megabits per second,a file of %1.2f megabits\n"
           "downloads in %1.2f seconds", megabitsPerSecond, megabits, megabits * 8 / megabitsPerSecond);

    // Enter megabitsPerSecond and megabits:18.12 2.20
    // At 18.12 megabits per second,a file of 2.20 megabits
    // downloads in 0.97 seconds

    // �����ϰ6����дһ����������ʾ�û���������Ȼ����ʾ�û������ա���һ�д�ӡ�û�����������գ�
    // ��һ�зֱ��ӡ�����յ���ĸ������ĸ��Ҫ����Ӧ�����յĽ�β���룬������ʾ��
    char firstName[20];
    char secondName[20];
    printf("Please enter your first name:");
    scanf("%s", firstName);
    printf("Please enter your second name:");
    scanf("%s", secondName);

    printf("%s%s\n%*d%*d", firstName, secondName, strlen(firstName),
           strlen(firstName), strlen(secondName), strlen(secondName));
    printf("\n%s%s\n%-*d%-*d", firstName, secondName, strlen(firstName),
           strlen(firstName), strlen(secondName), strlen(secondName));
    // Please enter your first name:Melissa
    // Please enter your second name:Honeybee
    // MelissaHoneybee
    //       7       8
    // MelissaHoneybee
    // 7      8
    return 0;
}