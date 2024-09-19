#include <stdio.h>

void print_array(float arr[], int size)
{
    printf("{");
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
        {
            printf("%f", arr[i]);
        }
        else
        {
            printf("%f, ", arr[i]);
        }
    }
    printf("}\n");
}

int main()
{
    float arr[] = {0.8831949556193032,
                   0.7692950276619929,
                   1.214204473092852,
                   -100.0001,
                   0.5564587547587442,
                   -1.7040253077197018,
                   -100.0001,
                   -1.896922287710273,
                   0.652009990577328,
                   0.3890296278419092,
                   1.8285662709023949,
                   -0.6329090776303052,
                   -700.0001,
                   -0.10002862881847371,
                   -0.8535463659890753,
                   0.842435150927555,
                   -1.0237131713956078,
                   1.0426560287220892,
                   0.24693589746042055,
                   0.9440087587744352,
                   -0.39484762249882766,
                   1.8880083918805053,
                   -1.3911727321558078,
                   -0.9189701511293533,
                   -2.4634979323911277, 0.03247506656986314, -0.4443372992601976, 1.1040027264523224, -1.5098016021456409, -1.7193662655163826};
    float suma = 0;
    int cantidad_elementos_no_anomalos = 0;

    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= -5)
        {
            suma = arr[i] + suma;
            cantidad_elementos_no_anomalos++;
        }
    }

    float promedio_arr = suma / cantidad_elementos_no_anomalos;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < -5)
        {
            arr[i] = promedio_arr;
        }
    }

    print_array(arr, size);

    return 0;
}