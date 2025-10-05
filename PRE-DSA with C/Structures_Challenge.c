#include <stdio.h>
#include <stdlib.h>

struct Class{
    char name[20];
    int age;
    float marks;
};

void sortAndPrint(struct Class *students, int n) {
    // Sort students by marks (descending order)
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((students + i)->marks < (students + j)->marks) {
                struct Class temp = *(students + i);
                *(students + i) = *(students + j);
                *(students + j) = temp;
            }
        }
    }
    // Print students
    printf("All Students With Most Marks:\n");
    for (int i = 0; i < n; i++) {
        printf("Name  : %s\n", (students + i)->name);
        printf("Marks : %.2f\n\n", (students + i)->marks);
    }
}

int main(){
    int n;
    printf("Enter the number of stuents you want to add : ");
    scanf("%d", &n);

    struct Class *students = (struct Class*) malloc (n*sizeof(struct Class));

    for(int i = 0; i<n; i++){
        printf("\n--------------------------------\n");
        printf("Student %d\n", i+1);
        printf("Student Name : ");
        scanf("%s", (students+i)->name);
        printf("Student Age : ");
        scanf("%d", &(students+i)->age);
        printf("Student Marks : ");
        scanf("%f", &(students+i)->marks);
        printf("--------------------------------\n");
    }

    printf("\n--- Student Details ---\n");
    for(int i = 0; i<n; i++){
        printf("\n--------------------------------\n");
        printf("Student %d :-\n", i+1);
        printf("Name : %s\n", (students+i) -> name);
        printf("Age : %d\n", (students+i) -> age);
        printf("Name : %.2f\n", (students+i) -> marks);
        printf("--------------------------------\n");
    }

    struct Class *top = students;
    for(int i = 0; i<n; i++){
        if((students+i)->marks > top-> marks){
            top = students + i;
        }
    }
    printf("Student with most marks :-\n");
    printf("Name : %s\n", top->name);
    printf("Marks : %.2f", top->marks);

    sortAndPrint(students, n);

    free(students);
    return 0;
}

