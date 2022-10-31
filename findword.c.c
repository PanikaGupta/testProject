#include <stdio.h>
#include <string.h>

// str: string
// wrd: word to find in str
// the function returns 1 if wrd is present in str
// otherwise it returns 0
int CheckWordInString(char* str, char* wrd) {

	int i, j, flag, n, m;
	n = strlen(str);	// length of str
	m = strlen(wrd);	// length of wrd

	// if size of wrd is bigger then str then str can never contain wrd
	if (m > n)
		return 0;

	while (i < n) {

		// checking if the current word in str
		// is equal to wrd or not
		j = 0;
		while (i < n && j < m && str[i] == wrd[j]) {
			++i;
			++j;
		}

		// j == m signifies that current word is equal to wrd
		// Therefore, wrd is present in str, thus we return 1 (true)
		// if you don't add the condition ( i == n || str[i] == ' '), then
		// the function will return true if the proper prefix of a word in str
		// is equal to wrd
		if (( i == n || str[i] == ' ') && j == m)
			return 1;

		// if j != m then the current word in str is not
		// equal to wrd
		// thus, we move to the next word
		while (i < n && str[i] != ' ') {
			++i;
		}
		++i;

	}

	// reaching this step means 
	// no match was found 
	// return false
	return 0;

}

int main() {

	char str[100];	// input string
	char wrd[100];	// word to search

	printf("Enter String: ");
	gets(str);

	printf("Enter Word to Search in the String: ");
	gets(wrd);

	if (CheckWordInString(str, wrd)) {
		printf("%s is present in the string", wrd);
	}
	else {
		printf("%s is not present in the string", wrd);
	}


}

