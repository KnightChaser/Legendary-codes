// Definitely easy.

const arr = [20, 5, 100, 1, 90, 200, 40, 29];

for(let item of arr) {
	setTimeout(() => console.log(item), item)
}
