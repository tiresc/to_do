#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
    int task_amount = 0;
    char list_name[100];
    printf("Name of list? ");
    scanf("%s", list_name);
    printf("How many tasks?");
    scanf("%d", &task_amount); 
    char *tasks[task_amount];
    printf("TO-DO LIST\n");
    char c ='\0'; 
   while((c = getchar()) != '\n' && c!= EOF) {} 
    for(int i = 0; i < task_amount; i++)
    {
	tasks[i] = malloc(100);
        printf("Please enter task %d: ", i + 1);
        fgets(tasks[i], 100, stdin);
    }
    putchar('\n'); 
    putchar('\n'); 
    putchar('\n'); 
    printf("%s", list_name);
    putchar('\n'); 
    
    for(int i = 0; i < task_amount; i++)
    {
	printf("%d.%s",i + 1, tasks[i]);
    }

    return 0;
}
