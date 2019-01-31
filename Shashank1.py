letters = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']

def encrypt(msg, key):
    enc = []
    for char in msg:
        enc.append(letters[(letters.index(char)+key)%26])
    
    print("Encryted Text: ",end='')
    for char in enc:
        print(char, end='')
    return enc

def decrypt(enc, key):
    dec = []
    for char in enc:
        dec.append(letters[(letters.index(char)-key)%26])
    print("\nDecrypted Key: ", end='')
    for char in dec:
        print(char, end='')
    return dec
    
def main():
    msg = input("Enter the message: ")
    key = int(input("Enter the key: "))
    enc = encrypt(msg, key)
    decrypt(enc, key)

main()
