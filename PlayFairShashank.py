from collections import OrderedDict

letters1 = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']

matrix = [[],
          [],
          [],
          [],
          []]
keymat = []

def start():
    lst = input("Enter the key: ").split()
    k = "".join(lst)
    key = "".join(OrderedDict.fromkeys(k))
    for char in letters1:
        if 'j' in key:
            if (char not in key and (char!='q')):
                key = key + char
        elif 'q' in key:
            if (char not in key and (char!='j')):
                key = key + char
        else:
            if (char not in key and (char!='j')):
                key = key + char
    #print(len(key))
    #print(key)
    m=0
    for i in range(5):
        for j in range(5):
            matrix[i].append(key[m])
            m = m+1
    for row in matrix:
        keymat.extend(row)
    #print(keymat)
    for i in range(0, 5):
        print(matrix[i])
    

def genKey():
    lst = input("Enter Plain Text: ").split()
    text = "".join(lst)
    
    for i in range(1, len(text)):
        if text[i]==text[i-1]:
            text=text[0:i]+'x'+text[i:]
            
    if len(text)%2==0:
        print("Even Length")
        print(len(text))
    else:
        print("Odd Length")
        text=text +"z"
    return text

def encrypt(a, b):
    col1, col2, row1, row2 = 0,0,0,0
    col1 = keymat.index(a)%5
    col2 =  keymat.index(b)%5
    print("Col ",col1, col2)
    row1 = keymat.index(a)/5
    row2 =  keymat.index(b)/5
    print("Row ",row1, row2)
def main():
    start()
    plainText = genKey()
    for i in range(1, len(plainText), 2):
        encrypt(plainText[i-1], plainText[i])
main()
