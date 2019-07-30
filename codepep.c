/*
 #include  <stdio.h>
    int main()
    {
       unsigned char chr;
       chr = 124;
       printf("%d\n", chr);
       return 0;
    }

#include  <stdio.h>
    int main()
    {
        char c;
        int i = 0;
        FILE *file;
        file = fopen("a.txt", "w+");
        fprintf(file, "%c", 'a');
        //fprintf(file, "%c",-1);
        fprintf(file, "%c", 'b');
        fclose(file);
        file = fopen("a.txt", "r");
        while ((c = fgetc(file)) !='b' )
            printf("%c\n", c);
        return 0;
    }
 #include <stdio.h>
    int main()
    {
        float f1 = 0.1;
        printf("%f",f1);
        if (0.1f==f1)
            printf("equal\n");
        else
            printf("not equal\n");
    }
#include <stdio.h>
    int main()
    {
        enum {ORANGE = -1, MANGO, BANANA = 4, PEACH};
        //printf("PEACH = %d\n", MANGO);
        int a=10,b=2;
        printf("%d %d",a,b);
    }
*/
 #include <stdio.h>
    int main()
    {
        printf("C programming %s %s", "Class by %s Sanfoundry", "WOW");
         char str[100] =  "Sanfoundry.com\0" "training classes";
         printf("%s",str);
    }
