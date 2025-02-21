# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Reading From File ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ #
# f = open('File.txt', "r") # r used to read file
# 1
# print(f.read()) # read file line by line

# 2
# print(f.readlines()) # read file line by line and insert it in the list
## if i need first line ##
#print(f.readlines()[0])

# 3
# for line in f:
#     print(line)
# for line in f.readlines():
#     print(line)

# 4
# print(f.readline()) # Cursor will move to next line
# print(f.readline())
# f.seek(0) # I Forced Cursor to move to first line
# print(f.readline())
# f.close()


# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ writing From File ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ #
f = open('File.txt', 'w')
f.write("Good Job Boda")
f.close()

f = open('File.txt', 'r')
print(f.read())
f.close()