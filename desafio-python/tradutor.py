i = 1
abc = ''
n1 = int(input("Numero de carcters: "))

while i<=n1:
    a = input("Letra: ")
    if a == "t":
        a = "P"
    if a == "e":
        a = "O"
    if a == "n":
        a = "L"
    if a == "i":
        a = "A"
    if a == "s":
        a = "R"
    if a == "p":
        a = "T"
    if a == "o":
        a = "E"
    if a == "l":
        a = "N"
    if a == "a":
        a = "I"
    if a == "r":
        a = "S"
    
    abc = abc + a
    print(abc.upper())
    i += 1