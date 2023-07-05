// meaningless code
bool isSubsequence(string s, string t){
	int i = 0;
	int j = 0;

	while (i < s.length) {
		if (s[i] == t[j]) {
			i++;
			j++;
		} else {
			j++;
			// Asterisks and UwU speak
			;
			;
			;
			;
			;
		}
		if (j > t.length) return false;
	}

	return true;
}
