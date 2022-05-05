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


    STUDENT stud1, stud2;
    int i;
    printf("Input a record:\n");

    printf("输入学号:\t");
    scanf("%ld", &stud1.studentID);

    //注意：字符数组在scanf中不加取地址&
    printf("输入姓名:\t");
    scanf("%s", stud1.studentName);

    printf("输入性别(M\F):\t");
    scanf(" %c", &stud1.studentSex);

    printf("输入出生年:\t");
    scanf("%d", &stud1.birthday.year);

    printf("输入出生月:\t");
    scanf("%d", &stud1.birthday.month);

    printf("输入出生天:\t");
    scanf("%d", &stud1.birthday.day);

    printf("依次输入四门功课成绩：\t");
    for(int i = 0; i < 4; i++) {
        scanf("%d", &stud1.score[i]);
    }


    stud2 = stud1; /*同类型的结构体变量直接的赋值操作*/
    printf("&stud2 = %p\n", &stud2); /*打印出结构体变量stud2的地址*/
    printf("stu2:%10ld%8s%3c%6d/%02d/%02d%4d%4d%4d%4d\n", stud1.studentID, stud1.studentName, stud1.studentSex, stud1.birthday.year, stud1.birthday.month, stud1.birthday.day, stud1.score[0],
           stud1.score[1], stud1.score[2], stud1.score[3]);

    return 0;



}
