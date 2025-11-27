#include<stdio.h>
struct Student{
    int id;
    char name[20];
    int score;
}Student1,Student2;
int main(){
    scanf("%d%s%d",&Student1.id,Student1.name,&Student1.score);
    scanf("%d%s%d",&Student2.id,Student2.name,&Student2.score);
    if(Student1.score>Student2.score){
        printf("%d%s%d\n",Student1.id,Student1.name,Student1.score);
    }
    else if(Student1.score<Student2.score)
    {printf("%d%s%d\n",Student2.id,Student2.name,Student2.score);}
    else{
        printf("%d%s%d\n%d%s%d\n",Student1.id,Student1.name,Student1.score,Student2.id,Student2.name,Student2.score);
    }
    return 0;
}