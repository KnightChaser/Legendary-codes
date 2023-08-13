public static string Encrypt(string input) {
	string encrypted = input.Remove(0, 1);
	encrypted += input.Substring(0, 1);
	encrypted += "ay~~OwO";
	return encrypted;
}
