void swap(char *c1, char *c2) {
	char tmp = *c1;
	*c1 = *c2;
	*c2 = tmp;
}


int isLowercase(char ch) {
	return (ch >= 'a' && ch <= 'z');
}


int isUppercase(char ch) {
	return (ch >= 'A' && ch <= 'Z');
}


int isLetter(char ch) {
	return !(isLowercase(ch) || isUppercase(ch));
}


char uppercase(char lowercase) {
	if (!isLetter(lowercase))
		return 0;
	else if(isUppercase(lowercase))
		return lowercase;
	else /* uppercase */
		return lowercase + 'A' - 'a';
}


void alphabeticalSort(char* arr, int size) {
	int i1, i2;
	char up1, up2; /* uppercase */
	if(size < 2) /* no need to sort */
		return;
	for(i1 = 1; i1 < size; ++i1) {
		i2 = i1;
		up1 = uppercase(arr[i2 - 1]);
		up2 = uppercase(arr[i2]);
		while((i2 > 0) && (up1 > up2)) {
			swap(&arr[i2 - 1],&arr[i2]);
			--i2;
			up1 = uppercase(arr[i2 - 1]);
			up2 = uppercase(arr[i2]);
		}
	}
}
