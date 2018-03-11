#include <stdio.h>
#include <stdlib.h>
#include<time.h>

main()
{
    int a;
    printf("The output on dice is");
    srand(time(NULL));
    a=random(6+1);
    printf("\n%d",a);
    system("pause");
    return 0;

}
