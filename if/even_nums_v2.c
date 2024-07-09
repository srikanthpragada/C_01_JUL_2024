// Print whether numbers are even using nested ifs

void main()
{
int a,b;

  printf("Enter two numbers : ");
  scanf("%d%d",&a, &b);

  if(a % 2 == 0)
    if(b % 2 == 0)
      printf("Both are Even");
    else
      printf("First is even");
  else
     if(b % 2 == 0)
        printf("Second is Even");
     else
        printf("Both are not Even");
}
