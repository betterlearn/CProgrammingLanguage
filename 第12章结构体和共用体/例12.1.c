#include <stdio.h>

//typedefΪdate���Ͷ�����һ���µı���DATE
typedef struct date {
    int year;
    int month;
    int day;

}DATE;

typedef struct student {
    //ѧ��
    long studentID;

    //����
    char studentName[10];

    //�Ա�
    char studentSex;

    //��������
    DATE birthday;

    //���Ź��γɼ�
    int score[4];
}STUDENT;


int main() {


    STUDENT stud1, stud2;
    int i;
    printf("Input a record:\n");

    printf("����ѧ��:\t");
    scanf("%ld", &stud1.studentID);

    //ע�⣺�ַ�������scanf�в���ȡ��ַ&
    printf("��������:\t");
    scanf("%s", stud1.studentName);

    printf("�����Ա�(M\F):\t");
    scanf(" %c", &stud1.studentSex);

    printf("���������:\t");
    scanf("%d", &stud1.birthday.year);

    printf("���������:\t");
    scanf("%d", &stud1.birthday.month);

    printf("���������:\t");
    scanf("%d", &stud1.birthday.day);

    printf("�����������Ź��γɼ���\t");
    for(int i = 0; i < 4; i++) {
        scanf("%d", &stud1.score[i]);
    }


    stud2 = stud1; /*ͬ���͵Ľṹ�����ֱ�ӵĸ�ֵ����*/
    printf("&stud2 = %p\n", &stud2); /*��ӡ���ṹ�����stud2�ĵ�ַ*/
    printf("stu2:%10ld%8s%3c%6d/%02d/%02d%4d%4d%4d%4d\n", stud1.studentID, stud1.studentName, stud1.studentSex, stud1.birthday.year, stud1.birthday.month, stud1.birthday.day, stud1.score[0],
           stud1.score[1], stud1.score[2], stud1.score[3]);

    return 0;



}
