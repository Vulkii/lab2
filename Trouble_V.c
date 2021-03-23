

#include "Input.h"
#include "Vector.h"

solve_trouble_v(){
char *s = NULL;
int i,c;
int z=0;
double k,m,op1,op2;
double d=1;
k = 0;
c = 0;
struct Operand *st_v = createstackopd(100);
            printf("Enter the trouble_v\n");
            s = get_str();
            for (i = 0; i < strlen(s); i++){
                if (isdigit(s[i])){
                    k = s[i] - '0';
                    m=k+d*m;
                    z++;
                    if (k==0){
                        z=1;
                    }
                    if (d==1){
                        d=d*10;
                    }
                }
                if ((s[i]==' ') && (z!=0)){
                    k=0;
                    z=0;
                    d=1;
                    printf("\nNumber %f\n",m);
                    push_in_stack_v(&st_v,m);
                    m=0;
                    printf("\nSuccessfully pushed to the stack\n");
                }
                if (s[i]=='+'){
                    op2=pop_from_stack_v(&st_v);
                    op1=pop_from_stack_v(&st_v);
                    printf("\n%f + %f = %f\n",op1,op2,op1+op2);
                    printf("\nSuccessfully summarized and written in stack\n");
                    push_in_stack_v(&st_v,op1+op2);
                }
                if (s[i]=='-'){

                    op2=pop_from_stack_v(&st_v);
                    op1=pop_from_stack_v(&st_v);
                    printf("\n%f - %f = %f\n",op1,op2,op1-op2);
                    printf("\nSuccessfully subtracted and written in stack\n");
                    push_in_stack_v(&st_v,op1-op2);
                }
                if (s[i]=='*'){
                    op2=pop_from_stack_v(&st_v);
                    op1=pop_from_stack_v(&st_v);
                    printf("\n%f * %f = %f\n",op1,op2, op1*op2);
                    printf("\nSuccessfully multiplied and written in stack\n");
                    push_in_stack_v(&st_v,op1*op2);
                }
                if (s[i]=='/'){
                    op2=pop_from_stack_v(&st_v);
                    op1=pop_from_stack_v(&st_v);
                    printf("\n%f / %f = %f\n",op1,op2,op1/op2);
                    printf("\nSuccessfully divided and written in stack\n");
                    push_in_stack_v(&st_v,op1/op2);
                }
            }
            if (k!=0){
                printf("\n***\nError! Your sentence is incorrect\n***\n");
                clearopd_v(&st_v);
                free(s);
                exit(0);
            }
            printf("%f\n", pop_from_stack_v(&st_v));
            clearopd_v(&st_v);
            free(s);
            }
