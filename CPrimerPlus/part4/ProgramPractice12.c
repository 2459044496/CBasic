#include <stdio.h>
#include <string.h>

int main(void) {

    // �����ϰ1����дһ��������ʾ�û����������գ�Ȼ���ԡ���,�ա��ĸ�ʽ��ӡ������
    char firstName[20];
    char secondName[20];
    printf("Please enter your first name:");
    scanf("%s", firstName);
    printf("Please enter your second name:");
    scanf("%s", secondName);
    printf("%s,%s", secondName, firstName);


    // �����ϰ2����дһ��������ʾ�û��������֣���ִ�����²���
    // a����ӡ���֣�����˫���ţ�
    // b���ڿ��Ϊ20���ֶ��Ҷ˴�ӡ���֣�����˫���ţ�
    // c���ڿ��Ϊ20���ֶ���˴�ӡ���֣�����˫���ţ�
    // d���ڱ�������ȿ�3���ֶ��д�ӡ���֡�
    char name[20];
    printf("Please Enter your name:");
    scanf("%s", name);
    printf("\n\"%s\"", name);
    printf("\n\"%20s\"", name);
    printf("\n\"%-20s\"", name);
    printf("\n%*s", strlen(name) + 3 ,name);

    // Please enter your first name:cui
    // Please enter your second name:pai
    // pai,cuiPlease Enter your name:cuipai
    //
    // "cuipai"
    // "              cuipai"
    // "cuipai              "
    //    cuipai
    return 0;
}