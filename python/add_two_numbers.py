from time import sleep, time

# add two numbers
def add(num1, num2):
	start = time()
	sleep(num1)
	sleep(num2)
	
	return int(time() - start)
