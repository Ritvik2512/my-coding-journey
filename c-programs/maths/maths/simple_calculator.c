//1.menu driven program
#include <stdio.h>

void PerformAddition(); //declaring a function before defining it so that it can be defined later(if needed)
void PerformSubtraction(); 
void PerformMultiplication();
void PerformDivision();
void AreaSquare();
void AreaRectangle();
void AreaTriangle();
void AreaCircle();
void VolumeSphere();
void SurfaceSphere();
void EvenOdd();
void PositiveNegative();
void Greatest();
void Smallest();

int main()
{
    //declaration
    int choice;
    float a,b;
    float area,surface;
    float volume;
    do
    {
        //display the options
        printf("------------------------------------------------------");
        printf("\n          S I M P L E  C A L C U L A T O R            ");
        printf("\n------------------------------------------------------");
        printf("\n      1.Addition                                      ");
        printf("\n      2.Subtraction                                   ");
        printf("\n      3.Multiplication                                ");
        printf("\n      4.Division                                      ");
        printf("\n------------------------------------------------------");
        printf("\n      5.Area of square                                ");
        printf("\n      6.Area of rectangle                             ");
        printf("\n      7.Area of triangle                              ");
        printf("\n      8.Area of circle                                ");
        printf("\n      9.Volume of sphere                              ");
        printf("\n     10.Surface area of sphere                        ");
        printf("\n------------------------------------------------------");
        printf("\n     11.Check if number is even or odd                ");
        printf("\n     12.Check if if number is positive or negative    ");
        printf("\n     13.Find greatest of two numbers                  ");
        printf("\n     14.Find smallest of two numbers                  ");
        printf("\n------------------------------------------------------");
        printf("\n                   0.EXIT                             ");
        printf("\n------------------------------------------------------");

        //prompt and accept order
        printf("\nEnter your choice : ");
        scanf("%d" , &choice);

        //process the order
        switch (choice)
        {
            case 0:
            printf("Thank you for using our software");
        
            break;

            case 1:
            PerformAddition();
            break;

            case 2:
            PerformSubtraction();
            break;

            case 3:
            PerformMultiplication();
            break;

            case 4:
            PerformDivision();
            break;

            case 5:
            AreaSquare();
            break;

            case 6:
            AreaRectangle();
            break;

            case 7:
            AreaTriangle();
            break;

            case 8:
            AreaCircle();
            break;

            case 9:
            VolumeSphere();
            break;

            case 10:
            SurfaceSphere();
            break;

            case 11:
            EvenOdd();
            break;

            case 12:
            PositiveNegative();
            break;

            case 13:
            Greatest();
            break;

            case 14:
            Smallest();
            break;
            
            default:
            printf("Invalid choice");
            break;
        }
    }
   while (choice != 0);
   
}

void PerformAddition() //defining function without parameters or return type
{
    double a,b,sum;
    printf("Enter first number : ");
    scanf("%lf" , &a);
    printf("Enter second number : ");
    scanf("%lf" , &b);

    sum = a + b;

    printf("The sum of %.2lf and %.2lf is = %.2lf",a,b,sum); // %.2f is used to restrict decimal places to 2
}

void PerformSubtraction()
{
    double a,b,difference;
    printf("Enter first number : ");
    scanf("%lf" , &a);
    printf("Enter second number : ");
    scanf("%lf" , &b);

    difference = b - a;

    printf("The difference of %.2lf and %.2lf is = %.2lf",a,b,difference);
}

void PerformMultiplication()
{
    double a,b,product;
    printf("Enter first number : ");
    scanf("%lf" , &a);
    printf("Enter second number : ");
    scanf("%lf" , &b);

    product = a * b;

    printf("The product of %.2lf and %.2lf is = %.2lf",a,b,product);

    
}

void PerformDivision()
{
    double a,b,quotient;
    printf("Enter first number : ");
    scanf("%lf" , &a);
    printf("Enter second number : ");
    scanf("%lf" , &b);

    quotient = b / a;

    printf("The quoitent of %.2lf and %.2lf is = %.2lf",a,b,quotient);
}

void AreaSquare()
{
    double a,area;
    printf("Enter side of square : ");
    scanf("%lf" , &a);

    area = a * a;

    printf("The area of square with side %lf is = %lf",a,area);
}

void AreaRectangle()
{
    double a,b,area;
    printf("Enter length of rectangle : ");
    scanf("%lf" , &a);
    printf("Enter breadth of rectangle : ");
    scanf("%lf" , &b);

    area = a * b;

    printf("Area of rectangle with length %lf and breadth %lf is = %lf",a,b,area);
}

void AreaTriangle()
{
    double a,b,area;
    printf("Enter base of triangle : ");
    scanf("%lf" , &a);
    printf("Enter height of triangle : ");
    scanf("%lf" , &b);

    area = 0.5 * a * b;

    printf("The area of triangle with base %lf and height %lf is = %lf",a,b,area);
}

void AreaCircle()
{
    double a,area;
    printf("Enter radius of circle : ");
    scanf("%lf" , &a);

    area = 3.14 * a * a;

    printf("The area of circle with radius %lf is = %lf",a,area);
}

void VolumeSphere()
{
    double a,volume;
    printf("Enter radius of sphere : ");
    scanf("%lf" , &a);

    volume = 1.33 * 3.14 * a * a * a;

    printf("Volume of sphere with radius %lf is = %lf",a,volume);
}

void SurfaceSphere()
{
    double a,surface;
    printf("Enter radius of sphere : ");
    scanf("%lf" , &a);

    surface = 4 * 3.14 * a * a;

    printf("The surface area of sphere with radius %lf is = %lf",a,surface);
}

void EvenOdd()
{
    double a;
    printf("Enter a number : ");
    scanf("%lf" , &a);

    if ((int)(a) % 2 == 0)
    {
        printf("%lf is an even number",a);
    }
    else
    {
        printf("%lf is an odd number",a);
    }
}

void PositiveNegative()
{
    double a;
    printf("Enter a number : ");
    scanf("%lf" , &a);

    if (a > 0)
    {
        printf("%lf is a positive number",a);
    }
    else
    {
        printf("%lf is a negative number",a);
    }
}

void Greatest()
{
    double a,b;
    printf("Enter first number : ");
    scanf("%lf" , &a);
    printf("Enter second number : ");
    scanf("%lf" , &b);
            
    if (a > b)
    {
        printf("%lff is the greatest number",a);
    }
    else
    {
        printf("%lff is the greatest number",b);
    }
   
}

void Smallest()
{
    double a,b;
    printf("Enter first number : ");
    scanf("%lff" , &a);
    printf("Enter second number : ");
    scanf("%lff" , &b);

    if (a < b)
    {
        printf("%lff is the smallest number",a);
    }
    else 
    {
        printf("%lff is the smallest number",b);
    }
}