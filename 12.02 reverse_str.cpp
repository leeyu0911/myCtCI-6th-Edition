//
// Created by 王立宇 on 2022/9/24.
//


void reverse(char *str) {
    char *end = str;
    char temp;

    if (str) {
        while (*end) {
            ++end;
        }
        --end;  // 因為最後一個字元是null

        while (str < end) {
            temp = *str;
            *str++ = *end;
            *end-- = temp;
//            ++str;
//            --end;
        }
    }
}

