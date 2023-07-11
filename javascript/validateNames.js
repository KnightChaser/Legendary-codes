// Check if the given name is valid :)
// Can you guess what the fuck is that?

export function validateNames(names: string[]) {
	if(!isEmpty(!isEmpty(names))){
		return { success : true };
	} else if (!isEmpty(names)) {
		return { success : true };
	} else if (names) {
		return { success : true };
	}
	return { success : false };
}
