
#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    double num1, num2, result;
    const double PI = 3.141592653589793;

    do
    {
        printf("\n===== SCIENTIFIC CALCULATOR =====\n");

        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Power\n");
        printf("7. Square Root\n");
        printf("8. Sine\n");
        printf("9. Cosine\n");
        printf("10. Tangent\n");
        printf("11. Logarithm (base 10)\n");
        printf("0. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);

            result = num1 + num2;
            printf("Result = %.2lf\n", result);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);

            result = num1 - num2;
            printf("Result = %.2lf\n", result);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);

            result = num1 * num2;
            printf("Result = %.2lf\n", result);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);

            if (num2 == 0)
            {
                printf("Error: Division by zero!\n");
            }
            else
            {
                result = num1 / num2;
                printf("Result = %.2lf\n", result);
            }
            break;

        case 5:
            printf("Enter two integers: ");
            scanf("%lf %lf", &num1, &num2);

            if (num2 == 0)
            {
                printf("Error: Modulus by zero!\n");
            }
            else if (num1 != (int)num1 || num2 != (int)num2)
            {
                printf("Please enter integer values.\n");
            }
            else
            {
                result = (int)num1 % (int)num2;
                printf("Result = %.0lf\n", result);
            }
            break;

        case 6:
            printf("Enter base and exponent: ");
            scanf("%lf %lf", &num1, &num2);

            result = pow(num1, num2);
            printf("Result = %.2lf\n", result);
            break;

        case 7:
            printf("Enter a number: ");
            scanf("%lf", &num1);

            if (num1 < 0)
            {
                printf("Error: Negative number!\n");
            }
            else
            {
                result = sqrt(num1);
                printf("Square Root = %.2lf\n", result);
            }
            break;

        case 8:
            printf("Enter angle in degrees: ");
            scanf("%lf", &num1);

            result = sin(num1 * PI / 180.0);
            printf("Sine = %.4lf\n", result);
            break;

        case 9:
            printf("Enter angle in degrees: ");
            scanf("%lf", &num1);

            result = cos(num1 * PI / 180.0);
            printf("Cosine = %.4lf\n", result);
            break;

        case 10:
            printf("Enter angle in degrees: ");
            scanf("%lf", &num1);

            if (fabs(cos(num1 * PI / 180.0)) < 1e-10)
            {
                printf("Error: Tangent is undefined!\n");
            }
            else
            {
                result = tan(num1 * PI / 180.0);
                printf("Tangent = %.4lf\n", result);
            }
            break;

        case 11:
            printf("Enter a positive number: ");
            scanf("%lf", &num1);

            if (num1 <= 0)
            {
                printf("Error: Logarithm requires a positive number!\n");
            }
            else
            {
                result = log10(num1);
                printf("Logarithm = %.4lf\n", result);
            }
            break;

        case 0:
            printf("Thank you for using the calculator!\n");
            break;

        default:
            printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 0);

    return 0;
}
