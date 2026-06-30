 #include <stdio.h>

int main() {
    // 1. تعريف المتغيرات هنا أولاً
    float length, width, area;

    printf("enter the length : ");
    scanf("%f", &length);

    printf("enter the width : ");
    scanf("%f", &width);

    // 2. حساب المساحة مع تصحيح السبلينغ (length وليس lenght)
    area = length * width;

    printf("the area of the rectangle is : %2.1f\n", area);

    return 0;
}