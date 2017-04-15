#include<stdio.h>

main()
{
   int i,j,k;
   char c;
   float f;
   printf("Enter integer:");
   scanf("%d",&i);
   printf("Enter character");
   scanf("%c",&c);
   printf("Enter float value:");
   scanf("%f",&f);

   printf("\nsizeof(integer)is%\n",sizeof(i));
   printf("sizeof(character)is%|n",sizeof(c));
   printf("sizeof(float)is%i\n",sizeof(f));

   j=i++;
   printf("\nAfterj=i++,j=%d,i=%d\n",j,i);
   k=++j;
   printf("\nAfter k=++j,k=%d,j=%d\n",j,i);
}
