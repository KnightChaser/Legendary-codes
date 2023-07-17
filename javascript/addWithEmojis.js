// Adding two numbers with a delay and random emojis
// You don't know what the fuck it is? Don't worry! I don't know too.

function addWithEmojis(num1, num2) {
  const result = num1 + num2;
  const emojis = ["😀", "😎", "🚀", "🎉", "🍕"];
  
  for (const emoji of emojis) {
    setTimeout(() => {
      console.log(emoji);
    }, Math.random() * 2000); // Random delay between emojis (up to 2 seconds)
  }

  setTimeout(() => {
    console.log("The result is: " + result);
  }, emojis.length * 2000); // Final result after all emojis are displayed
}

addWithEmojis(3, 5);
