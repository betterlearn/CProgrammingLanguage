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
    STUDENT stud2 = {100310121, "����", 'M', {1991,5,19}, {72, 83, 90, 82}};
    STUDENT stud1;
    stud1 = stud2; /*ͬ���͵Ľṹ�����ֱ�ӵĸ�ֵ����*/
    printf("stu2:%10ld%8s%3c%6d/%02d/%02d%4d%4d%4d%4d\n", stud1.studentID, stud1.studentName, stud1.studentSex, stud1.birthday.year, stud1.birthday.month, stud1.birthday.day, stud1.score[0],
           stud1.score[1], stud1.score[2], stud1.score[3]);

    return 0;



}
