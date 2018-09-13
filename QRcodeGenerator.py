import qrcode
import random

result = ''
choice = ''
message = ''

characters_in_order = [chr(x) for x in range(32,127)]
print("A person crosses a 600 m long street in 5 minutes. What is his speed in km per hour?")

message = "t''+`[QQ/WW{/>Q<W;(`Q(UM|?c;pqtxq)$~GA"

r_seed = 7
r_seed_input = int(input('Enter the answer (Integer value): '))

if r_seed_input != r_seed:
    print("Wrong Answer!")
    input('')
else:
    random.seed(r_seed_input)
    shuffled_list = [chr(x) for x in range(32,127)]
    random.shuffle(shuffled_list)

    for i in range(0, len(message)):
        result += characters_in_order[shuffled_list.index(message[i])]
    try:
        qr = qrcode.QRCode(
            version=1,
            error_correction=qrcode.constants.ERROR_CORRECT_L,
            box_size=10,
            border=4,
        )
        qr.add_data(result)
        qr.make(fit=True)

        img = qr.make_image(fill_color="black", back_color="white")
        img.show()
    except:
        print("Error displaying image")
        input()
        exit()