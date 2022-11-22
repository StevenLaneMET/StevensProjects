attempt_count = 0
count = 0
guess = str
word = bool
word = False
key = str

while word == False:
    key = input("Input a five-letter word: ")
    for character in key:
        if ord("A") <= ord(character) <= ord("z"):
            count = count + 1
    if count != 5:
        print("Invalid word.")
        count = 0
    if count == 5:
        word = True
while word == True:
    guess = input("Guess the five-letter word: ")
    if guess != key:
        print("Incorrect guess.")
        attempt_count = attempt_count + 1        
    if guess == key:
        print("That's right!", key, "is the word!")
        break
    if attempt_count >= 6:
        print("Out of guesses.")
        break