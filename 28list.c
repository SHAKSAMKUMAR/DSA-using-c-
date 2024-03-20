#include <stdio.h>
#include <stdlib.h>

#define maxsize 1000
int size;
void Create(int list[]){
    
    printf("Enter teh size of list: ");
    scanf("%d", &size);
    if(size>maxsize){
        printf("List over flow !!!");
    }
    else{
        printf("Enter list elements: \n");
        for(int i=0; i<size; i++){
            scanf("%d", &list[i]);
        }
    }
}

void Display(int list[]){
    if(size==0){
        printf("List is empty.");
    }
    else{
        printf("List elements are: \n");
        for(int i=0; i<size; i++){
            printf("%d\t", list[i]);
        }
    }
}

void Insert(int list[]){
    int pos, value;
    printf("Enter Position: ");
    scanf("%d", &pos);
    printf("Enter value to insert: ");
    scanf("%d", &value);
    if(pos<size){
        for(int i=size; i>=pos; i--){
            list[i] = list[i-1];
        }
        list[pos] = value;
        size++;
    }
    else{
        printf("Invalid position !!!\n\n");
    }
}

int main() {
    int list[maxsize];                          
    while(1){
        system("cls");
        printf("1.Create\n");
        printf("2.Insert\n");
        printf("3.Display\n");
        printf("4.Delete\n");
        printf("5.Search\n");
        printf("6.Exit\n");
        int choice;
        printf("Enter choice: \n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
            Create(list);
            break;
            case 2:
            Insert(list);
            break;
            case 3:
            Display(list);
            break;
            case 4:
            break;
            case 5:
            break;
            case 6:
            exit(0);
            break;
            default:
            printf("Invalid choice....\n");
        }
        system("pause");
    }
return 0;
}