#include<stdio.h>
#include<string.h>
struct student
{
    /* data */
    int age;
    int name;
    int rn;
    int sn;
};
void main()
{
    struct student st;
    printf("Enter your name, surname, age, roll no. \n");
    scanf("%d%d%d%d",&st.name,&st.sn,&st.age,&st.rn);
    printf("\nStudent Details\n");
    printf("Name =%d\nSurname=%d\nAge=%d\nRoll.No=%d",st.name,st.sn,st.age,st.rn);
}