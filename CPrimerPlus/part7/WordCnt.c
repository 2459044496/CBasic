#include <stdio.h>
#include <ctype.h>// 为isspace()函数提供原型
#include <stdbool.h>// 为bool、true、false提供定义

#define STOP '|'

// 统计字符数、单词数、行数
// 当出现连续多个空白时，会有问题。第八章修正。
int main(void){

    char c;// 读入字符
    char prev;// 读入的前一个字符
    long n_chars = 0L;// 字符数
    int n_lines = 0;// 行数
    int n_words = 0;// 单词数
    int p_lines = 0;// 不完整的行数
    bool inWord = false;// 如果c在单词中，inWord等于true

    printf("Enter text to be analyzed(| to terminate):\n");
    prev = '\n';// 用于识别完整的行

    while ((c = getchar()) != STOP) {
        n_chars++;// 统计字符
        if(c == '\n') {
            n_lines++;// 统计行
        }
        if(!isspace(c) && !inWord) {
            inWord = true;// 开始一个新的单词
            n_words++;// 统计单词
        }
        if(isspace(c) && inWord) {
            inWord = false;// 达到单词的末尾
        }
        prev = c;
    }

    if(prev != '\n') {
        p_lines = 1;
    }

    printf("characters = %ld,words = %d, lines = %d, ", n_chars, n_words, n_lines);
    printf("partial lines = %d\n", p_lines);

    return 0;
}
