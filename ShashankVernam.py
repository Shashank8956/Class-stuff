def getText():
    plaintext = input("Enter the plaintext: ")
    key = input("Enter the key: ")
    return plaintext, key

def encrypt(plaintext, key):
    cipher = []
    for i,j in zip(plaintext, key):
        cipher.append(ord(i)^ord(j))
    return cipher

def decrypt(cipher, key):
    text = ""
    for i,j in zip(cipher, key):
        text = text + chr(i^ord(j))
    return text

def main():
    text1, text2, key, cipher = "", "", "", []
    text1, key = getText()
    print("\n\nPlain Text: ", text1)
    cipher = encrypt(text1, key)
    print("Cipher Text: ", "".join([str(i) for i in cipher]))
    text2 = decrypt(cipher, key)
    print("Decrypted text: ", text2)

main()
