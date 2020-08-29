#include <stdio.h>
#include <string.h>
//DATA TASK 1,2,4
struct part {
    char name[20];
    int id;
    double cost;
    int num_available;
};
//TASK 3
struct node
{
    int data;
    struct node * next;
};
//TASK 4
struct list_node
{
    struct part data;
    struct list_node * next;
};
//Task 2,4
struct part load_data(char * name, int id, double cost, int num);
void print_str(struct part toPrint); //Also using for testing in TASK 4

//Task 3
struct node * address_nth_list(struct node * ptr, int n);

//Task 4
struct list_node * search_record(struct list_node * ptr, int ID);

int main() {
    int loop;
    //Task 1,2
    char *name;
    printf("Please enter name: ");
    gets(name);
    printf("Please enter id, cost and number: ");
    int id,num;
    double cost;
    scanf("%i%lf%i",&id,&cost,&num);
    print_str(load_data(name,id,cost,num));
    //---------Complete-----
    //Task 3
    struct node x,y,z,a;
    struct node *ans[2];

    x.data = 3;
    y.data = 5;
    z.data = 7;
    a.data = 9;

    x.next = &y;
    y.next = &z;
    z.next = &a;
    a.next = NULL;

    ans[0] = address_nth_list(&x,4);
    ans[1] = address_nth_list(&x,1);
    for(loop = 0; loop<2; loop++)
    {
        if(ans[loop] == NULL)
            printf("Check %d: Null returned\n",loop+1);
        else
            printf("Check %d: Data stored at that index is: %p Data: %d\n",loop+1,&ans[loop], ans[loop]->data);
    }
    //---------Complete-----
    //Task 4
    struct list_node q,l,m;
    struct list_node *ans2[2];

    q.data  = load_data("Arose",1,20.0,3);
    l.data  = load_data("Niazi",2,20.0,3);
    m.data  = load_data("Khan",3,20.0,3);

    q.next = &l;
    l.next = &m;
    m.next = NULL;

    ans2[0] = search_record(&q,5);
    ans2[1] = search_record(&q,2);

    for(loop = 0; loop<2; loop++)
    {
        printf("Check %d: ",loop+1);
        if(ans2[loop] == NULL)
            printf("Null\n");
        else
            print_str(ans2[loop]->data);
    }
    //---------Complete-----
    return 0;
}


struct part load_data(char * name, int id, double cost, int num)
{
    struct part x;
    x.id = id;
    x.cost = cost;
    if(strlen(name) > 20)
        strcpy(x.name,"");
    else
        strcpy(x.name,name);
    x.num_available = num;
    return x;
}

void print_str(struct part toPrint)
{
    printf("Struct: Name: %s | Number: %d | Cost:  %0.2f | ID: %d\n",toPrint.name,toPrint.num_available,toPrint.cost,toPrint.id);
}

struct node * address_nth_list(struct node * ptr, int n)
{
    int x=0;
    for(x=0; x<n; x++)
    {
        if(ptr->next == NULL) return NULL;
        ptr = ptr->next;
    }
    return ptr;
}

struct list_node * search_record(struct list_node * ptr, int ID)
{
    do
    {
        if(ptr->data.id == ID) return ptr;
        ptr = ptr->next;
    }
    while (ptr->next != NULL);
    return NULL;
}
