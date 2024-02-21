#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function prototypes
int ft_strlen(char *str);
int ft_check_base(char *base);
int ft_atoi_base(char *str, char *base);
char *ft_convert_base(char *nbr, char *base_from, char *base_to);

// Test function for ft_strlen
void test_ft_strlen() {
    char str1[] = "Hello";
    char str2[] = "";
    char str3[] = "This is a longer string";
    
    int len1 = ft_strlen(str1);
    int len2 = ft_strlen(str2);
    int len3 = ft_strlen(str3);
    
    printf("Length of '%s': %d\n", str1, len1);
    printf("Length of '%s': %d\n", str2, len2);
    printf("Length of '%s': %d\n", str3, len3);
}

// Test function for ft_check_base
void test_ft_check_base() {
    char base1[] = "01";
    char base2[] = "0123456789ABCDEF";
    char base3[] = "0123456789abcdef";
    char base4[] = "0123456789";
    char base5[] = "0123456789+";
    
    int check1 = ft_check_base(base1);
    int check2 = ft_check_base(base2);
    int check3 = ft_check_base(base3);
    int check4 = ft_check_base(base4);
    int check5 = ft_check_base(base5);
    
    printf("Check base '%s': %d\n", base1, check1);
    printf("Check base '%s': %d\n", base2, check2);
    printf("Check base '%s': %d\n", base3, check3);
    printf("Check base '%s': %d\n", base4, check4);
    printf("Check base '%s': %d\n", base5, check5);
}

// Test function for ft_atoi_base
void test_ft_atoi_base() {
    char str1[] = "1010";
    char str2[] = "-123";
    char str3[] = "FF";
    char base1[] = "01";
    char base2[] = "0123456789";
    char base3[] = "0123456789ABCDEF";
    
    int num1 = ft_atoi_base(str1, base1);
    int num2 = ft_atoi_base(str2, base2);
    int num3 = ft_atoi_base(str3, base3);
    
    printf("Number '%s' in base '%s': %d\n", str1, base1, num1);
    printf("Number '%s' in base '%s': %d\n", str2, base2, num2);
    printf("Number '%s' in base '%s': %d\n", str3, base3, num3);
}

// Test function for ft_convert_base
void test_ft_convert_base() {
    char nbr1[] = "1010";
    char nbr2[] = "-123";
    char nbr3[] = "FF";
    char base_from1[] = "01";
    char base_from2[] = "0123456789";
    char base_from3[] = "0123456789ABCDEF";
    char base_to1[] = "0123456789";
    char base_to2[] = "01";
    char base_to3[] = "0123456789ABCDEF";
    
    char *result1 = ft_convert_base(nbr1, base_from1, base_to1);
    char *result2 = ft_convert_base(nbr2, base_from2, base_to2);
    char *result3 = ft_convert_base(nbr3, base_from3, base_to3);
    
    printf("Convert '%s' from base '%s' to base '%s': %s\n", nbr1, base_from1, base_to1, result1);
    printf("Convert '%s' from base '%s' to base '%s': %s\n", nbr2, base_from2, base_to2, result2);
    printf("Convert '%s' from base '%s' to base '%s': %s\n", nbr3, base_from3, base_to3, result3);
    
    // Free memory allocated by ft_convert_base
    free(result1);
    free(result2);
    free(result3);
}

int main() {
    // Run the tests
    test_ft_strlen();
    test_ft_check_base();
    test_ft_atoi_base();
    test_ft_convert_base();
    
    return 0;
}