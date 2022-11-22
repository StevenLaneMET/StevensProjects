StringList = []
def shift(plaintext, key=3):
    for letter in plaintext:
        ordNumber = ord(letter)
        if (65 <= ordNumber <= 90) or (97 <= ordNumber <= 122):
            shiftedNumber = ordNumber + key
            if shiftedNumber > 122:
               shiftedNumber = 96 + (shiftedNumber - 122)
            if 97 > shiftedNumber > 90:
                shiftedNumber = 64 + (shiftedNumber - 90)
            StringList.append(chr(shiftedNumber))
        else:
            StringList.append(letter)
    print(*StringList)
plaintext = input("Enter string: ")
shift(plaintext)