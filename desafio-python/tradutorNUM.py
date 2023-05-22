i = 1
abc = ''
n1 = int(input("Numero de algarismos: "))

while i<=n1:
    a = str(input("Algarismo: "))
    
    if a == "0":
        a = "9."
    if a == "1":
        a = "8."
    if a == "2":
        a = "7."
    if a == "3":
        a = "6."
    if a == "4":
        a = "5."
    if a == "5":
        a = "4."
    if a == "6":
        a = "3."
    if a == "7":
        a = "2."
    if a == "8":
        a = "1."
    if a == "9":
        a = "0."
    
    
    abc = abc + a
    print(abc)
    i += 1
    