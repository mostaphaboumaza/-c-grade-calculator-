#include <stdio.h>

int main() 
{
   float exam , td , tp ;
    float exam_b,td_aurga,tdp,galgo;

    printf("what is note of exam? ");
       scanf("%f", &exam);

       printf("what is the note of td? ");
       scanf("%f", &td);

       printf("what is the note of tp? ");
    scanf("%f", &tp);

    exam_b = exam * 0.6 ;
        td_aurga = (td + tp)/2;
        tdp = td_aurga * 0.4;
        galgo = tdp + exam_b ;
    
    printf("%f\n", exam_b);
        printf("%f\n", td_aurga);
    printf("%f\n", tdp);
    printf("%f\n", galgo);

    return 0;
}
