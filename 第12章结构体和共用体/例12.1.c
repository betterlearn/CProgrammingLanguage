#include <stdio.h>

//typedef为date类型定义了一个新的别名DATE
typedef struct date {
    int year;
    int month;
    int day;

}DATE;

typedef struct student {
    //学号
    long studentID;

    //姓名
    char studentName[10];

    //性别
    char studentSex;

    //出生年龄
    DATE birthday;

    //四门功课成绩
    int score[4];
}STUDENT;


int main() {
    STUDENT stud2 = {100310121, "王刚", 'M', {1991,5,19}, {72, 83, 90, 82}};
    STUDENT stud1;
    stud1 = stud2; /*同类型的结构体变量直接的赋值操作*/
    printf("stu2:%10ld%8s%3c%6d/%02d/%02d%4d%4d%4d%4d\n", stud1.studentID, stud1.studentName, stud1.studentSex, stud1.birthday.year, stud1.birthday.month, stud1.birthday.day, stud1.score[0],
           stud1.score[1], stud1.score[2], stud1.score[3]);

    return 0;



}
