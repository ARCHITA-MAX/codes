/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
int main()
{
    int bno;
    int dno;
    printf(" Input any decimal number : ");
    scanf("%d",&dno);
    bno = toBin(dno);
    printf("\n The Binary value is : %d",bno);
    return 0;
}
int toBin(int dno)
{
    int bno=0,remainder,f=1;
    while(dno != 0)
    {
         remainder = dno % 2;
         bno = bno + remainder * f;
         f = f * 10;
         dno = dno / 2;
    }
    return bno;
}
