#include <iostream.h>
#include <fstream.h>

#define WORDS_COUNT 10

/*Word must be NULL-terminated*/
typedef (unsigned long) size_t;
typedef (void)(*process_word_t)(char * word, result_t w_list);
typedef struct {
	char * top_words[WORDS_COUNT];
	//TODO: array of lengths

	process_word_t process_word;

}	result_t;

//TODO: sort_func
void simple_process_word(char * word, result_t w_list);
size_t strlen(char * str);

int main(unsigned int argc, const char *[] argv) {


	return 0;
}

void simple_process_word(char * word, result_t w_list) {

}

unsigned long strlen(char * str) {
	size_t result = 0;

	while(str[result++]) {}

	return result;
}
