import random
import string
import sys


#def main():

min = 1
max = 42
#random.choice(string.ascii_lowercase) // get a random lowercase letter. https://stackoverflow.com/questions/2823316/generate-a-random-letter-in-python

keylist = '' 		#initialize the string
KEY_LEN = 10		#set the length of the string
keylist = [random.choice(string.ascii_lowercase) for i in range(KEY_LEN)]#get a random array of 10 lowercase letters
keylist = "".join(keylist)		#make the array a string
#print "", keylist
sys.stdout.write(keylist + '\n')	#print to console without a space in front
file1 = open("file1","w+")			#create/open a file
file1.write("%s\n" % keylist) 		#write the string in to the file
file1.close()						#close the file

keylist = [random.choice(string.ascii_lowercase) for i in range(KEY_LEN)]
keylist = "".join(keylist)
#print "", keylist.lstrip()
sys.stdout.write(keylist + '\n')
file2 = open("file2","w+")
file2.write("%s\n" % keylist)
file2.close()

keylist = [random.choice(string.ascii_lowercase) for i in range(KEY_LEN)]
keylist = "".join(keylist)
#print "", keylist
sys.stdout.write(keylist + '\n')
file3 = open("file3","w+")
file3.write("%s\n" % keylist)
file3.close()
sys.stdout.flush()					#flush buffer https://stackoverflow.com/questions/3263672/the-difference-between-sys-stdout-write-and-print

num1 = random.randint(min, max) 	#get a random int btwn 0 & 43
num2 = random.randint(min, max)		#and another
#all the below from https://learnpythonthehardway.org/
print num1							#print the 1st number
print num2							#print the 2nd number
print num1*num2						#multiply the numbers.


