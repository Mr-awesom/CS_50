#include <stdio.h>

#define MAX_PARAMS 100

// Reads how many parameters, then reads their values into params[].
// Returns the count.
int read_parameters(int params[], int max_params)
{
    int n;

    printf("Enter how many parameters are in the equation (1-%d): ", max_params);
    if (scanf("%d", &n) != 1)
    {
        printf("Invalid input.\n");
        return 0;
    }

    if (n < 1 || n > max_params)
    {
        printf("Number of parameters must be between 1 and %d.\n", max_params);
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of parameter %d: ", i + 1);
        if (scanf("%d", &params[i]) != 1)
        {
            printf("Invalid input.\n");
            return 0;
        }
    }

    return n;
}

// Applies an operator to all parameters.
// For + and * it folds left from 0 or 1.
// For - and / it starts from the first value and then applies with the rest.
int compute(char op, const int params[], int n, int *out_result)
{
    if (n <= 0) return 0;

    long long result = 0;

    if (op == '+')
    {
        result = 0;
        for (int i = 0; i < n; i++) result += params[i];
    }
    else if (op == '*')
    {
        result = 1;
        for (int i = 0; i < n; i++) result *= params[i];
    }
    else if (op == '-')
    {
        result = params[0];
        for (int i = 1; i < n; i++) result -= params[i];
    }
    else if (op == '/')
    {
        result = params[0];
        for (int i = 1; i < n; i++)
        {
            if (params[i] == 0)
            {
                printf("Error: division by zero at parameter %d.\n", i + 1);
                return 0;
            }
            result /= params[i]; // integer division
        }
    }
    else
    {
        printf("Unsupported operator: %c\n", op);
        return 0;
    }

    *out_result = (int)result;
    return 1;
}

int main(void)
{
    char op;

    printf("Enter the operator (+, -, *, /): ");
    if (scanf(" %c", &op) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    int params[MAX_PARAMS];
    int n = read_parameters(params, MAX_PARAMS);
    if (n == 0) return 1;

    int result;
    if (!compute(op, params, n, &result))
    {
        return 1;
    }

    printf("Result: %d\n", result);
    return 0;
}
