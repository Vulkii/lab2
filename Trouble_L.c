

#include "Input.h"
#include "List.h"
#include "List.c"

solve_trouble_l(){
char *s = NULL;
int i,c;
int z=0;
double k,m,op1,op2;
double d=1;
k = 0;
c = 0;
m = 0;
struct myStack *st = create_stack();
        s = get_str();
            printf("Enter the trouble\n");
            for (i = 0; i < strlen(s); i++){
                if (isdigit(s[i])){
                    k = s[i] - '0';
                    m=k+d*m;
                    z++;
                    if (d==1){
                        d=d*10;
                    }
                    if (k==0){
                        z=1;
                    }
                }
                if ((s[i]==' ') && (z!=0)){
                    k=0;
                    d=1;
                    z=0;
                    printf("\nNumber %f\n",m);
                    push_to_stack(st,m);
                    m=0;
                    printf("\nSuccessfully pushed to the stack\n");
                }
                if (s[i]=='+'){ // можно выделить в отдельные функции
                    op2=pop_from_stack(st);
                    op1=pop_from_stack(st);
                    printf("\n%f + %f = %f\n",op1,op2,op1+op2);
                    printf("\nSuccessfully summarized and written in stack\n");
                    push_to_stack(st,op1+op2);
                }
                if (s[i]=='-'){

                    op2=pop_from_stack(st);
                    op1=pop_from_stack(st);
                    printf("\n%f - %f = %f\n",op1,op2,op1-op2);
                    printf("\nSuccessfully subtracted and written in stack\n");
                    push_to_stack(st,op1-op2);
                }
                if (s[i]=='*'){
                    op2=pop_from_stack(st);
                    op1=pop_from_stack(st);
                    printf("\n%f * %f = %f\n",op1,op2, op1*op2);
                    printf("\nSuccessfully multiplied and written in stack\n");
                    push_to_stack(st,op1*op2);
                }
                if (s[i]=='/'){
                    op2=pop_from_stack(st);
                    op1=pop_from_stack(st);
                    printf("\n%f / %f = %f\n",op1,op2,op1/op2);
                    printf("\nSuccessfully divided and written in stack\n");
                    push_to_stack(st,op1/op2);
                }
            }
            if (k!=0){
                printf("\n***\nError! Your sentence is incorrect\n***\n");
                delete_stack(st);
                free(s);
                exit(0);
            }
        printf("%f\n", pop_from_stack(st));
        delete_stack(st);
        free(s);
        }

