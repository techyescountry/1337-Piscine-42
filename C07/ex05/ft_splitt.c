#include <stdlib.h>


#include <stdio.h>

#include <stdlib.h>

int is_separator(char c, char *charset) {
    while (*charset) {
        if (c == *charset)
            return 1;
        charset++;
    }
    return 0;
}

int count_words(char *str, char *charset) {
    int count = 0;
    int in_word = 0;

    while (*str) {
        if (is_separator(*str, charset)) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            count++;
        }
        str++;
    }
    return count;
}

char **ft_split(char *str, char *charset) {
    int word_count = count_words(str, charset);
    char **result = (char **)malloc((word_count + 1) * sizeof(char *));
    if (result == NULL)
        return NULL;

    int i = 0;
    int in_word = 0;
    char *start = str;

    while (*str) {
        if (is_separator(*str, charset)) {
            if (in_word) {
                int word_length = str - start;
                result[i] = (char *)malloc((word_length + 1) * sizeof(char));
                if (result[i] == NULL)
                    return NULL;
                for (int j = 0; j < word_length; j++) {
                    result[i][j] = start[j];
                }
                result[i][word_length] = '\0';
                i++;
                in_word = 0;
            }
        } else if (!in_word) {
            in_word = 1;
            start = str;
        }
        str++;
    }

    if (in_word) {
        int word_length = str - start;
        result[i] = (char *)malloc((word_length + 1) * sizeof(char));
        if (result[i] == NULL)
            return NULL;
        for (int j = 0; j < word_length; j++) {
            result[i][j] = start[j];
        }
        result[i][word_length] = '\0';
        i++;
    }

    result[i] = NULL;
    return result;
}

int main() {
    char *str = "Hello, world! This is a test.";
    char *charset = " ,!.";
    char **result = ft_split(str, charset);
    for (int i = 0; result[i] != NULL; i++) {
        printf("%s\n", result[i]);
    }
    return 0;
}

