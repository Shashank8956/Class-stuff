import random

result = ''
choice = ''
message = ''

characters_in_order = [chr(x) for x in range(32,127)]
message = "Your stupid message!"

r_seed = 7                                                             #This is the key
random.seed(r_seed)
shuffled_list = [chr(x) for x in range(32,127)]
random.shuffle(shuffled_list)

for i in range(0, len(message)):
    result += shuffled_list[characters_in_order.index(message[i])]
result
try:
    r_seed_input = int(input('Enter the key (Integer value): '))         #User enters the key here
except:
    print("Error! Enter integer value only!")
    input()
    exit()

message = result
print("Encrypted message: "+message)
result=""

if r_seed_input != r_seed:
    print("Wrong key!")
    input()
else:
    random.seed(r_seed_input)
    shuffled_list = [chr(x) for x in range(32,127)]
    random.shuffle(shuffled_list)

    for i in range(0, len(message)):
        result += characters_in_order[shuffled_list.index(message[i])]

    print("Decrypted message: " + result)
    input()
