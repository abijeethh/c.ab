 #include<stdio.h>
 int main(void)
  {
 int h1, m1, s1, h2, m2, s2, h3, m3, s3;
  printf("TIME1# ");
  scanf("%d:%d:%d", &h1, &m1, &s1);
  printf("TIME2# ");
  scanf("%d:%d:%d", &h2, &m2, &s2);
  s3=(s1+s2);
  m3=(m1+m2);
  h3=(h1+h2);
  printf("%d:%d:%d", &h3, &m3, &s3);
  printf("PROGRAM ENDS\n");
 return 0;
 getch();
 }
