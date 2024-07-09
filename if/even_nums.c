// Print whether numbers are even

void main()
{
int a,b;

  printf("Enter two numbers : ");
  scanf("%d%d",&a, &b);

  if(a%2==0 && b%2==0)
      printf("Both are Even");
  else
    if(a%2==0)
       printf("First number is Even");
    else
        if(b%2==0)
            printf("Second number is Even");
        else
            printf("Both are not Even");
}
