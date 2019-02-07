mat = []
lst = []

def createTable():
    for i in range(65, 91):
        lst.append(chr(i))
    print(lst, end="\n\n")

    for i in range(0, 26):
        mat.append([])
        for j in range(0,26):
            mat[i].append(lst[(j+i)%26])
    
    for i in range(0, 26):
        print(mat[i])

def getText():
    mainKey = ""
    n = 0
    tempkey = input("\n\nEnter the key: ").split()
    key = "".join(tempkey)
    #print(key)
    n = len(key)
    
    tempText = input("Enter the plain text: ").split()
    text = "".join(tempText)
    #print(text)
    
    for i in range(0, len(text)):
        mainKey = mainKey + key[i%n]
    print("\nModified key: ", mainKey)
    print("Text: ", text)
    return mainKey, text

def encrypt(key, text):
    key = key.upper()
    text = text.upper()
    
    cipher = ""
    row, col = 0,0
    #print(key, text)
    for i in range(0, len(text)):
        row = mat[0].index(key[i])
        col = mat[0].index(text[i])

        cipher = cipher + mat[row][col]
    print("\nCipher: {0}".format(cipher))
    
def main():
    mainKey = ""
    text = ""
    createTable()
    mainKey, text = getText()
    encrypt(mainKey, text)
    
main()
