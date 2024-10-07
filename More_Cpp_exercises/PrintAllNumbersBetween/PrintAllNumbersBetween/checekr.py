checker = 1

file = open("my_file.txt", "r")
for line in file:
    for num in line.split():
        if (int(num) != checker):
            print("Note the same")
        checker += 1
    print("All OK")
