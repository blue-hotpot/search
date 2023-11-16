#include <stdio.h>
int main(int argc, char const *argv[])
{
    int value;
    printf("input value:");
    scanf("%d", &value);
    int data[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(data) / sizeof(data[0]);
    int left = 0;
    int right = size - 1; // 右下标
    while (left <= right)
    {
        int mid = (left + right) / 2;
        printf("%d\n", mid);
        if (data[mid] > value)
        {
            right = mid - 1;
        }
        else if (data[mid] < value)
        {
            left = mid + 1;
        }
        else
        {
            printf("the value is %d\n", mid);
            break;
        }
    }
    if (left > right)
    {
        printf("the value is not fond\n");
    }
    return 0;
}
