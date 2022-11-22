word = False
word_game = True
infinite_game = True
attempt_count = 0
count = 0
count2 = 0
count3 = 0
count4 = 0
number_of_puzzles = 0
green = chr(129001)
grey = chr(11036)
yellow = chr(129000)

while infinite_game == True:
    while word == False:
        key = input("Input a five-letter word: ")
        if len(key) == 0:
            break
        for character in key:
            if ord("A") <= ord(character) <= ord("z"):
                count = count + 1
        if count != 5 and count != 0:
            print(key, "is not a five-letter word.")
            count = 0
        if count == 5:
            word = True
            for character in key:
                count3 = count3 + 1
                if count3 == 1:
                    first_letter = character
                if count3 == 2:
                    second_letter = character
                if count3 == 3:
                    third_letter = character
                if count3 == 4:
                    fourth_letter = character
                if count3 == 5:
                    fifth_letter = character
    while word == True:
        guess = input("Guess the five-letter word: ")
        attempt_count = attempt_count + 1
        for character in guess:
            if ord("A") <= ord(character) <= ord("z"):
                count2 = count2 + 1
        if count2 == 5:
            for character in guess:
                count4 = count4 + 1
                if count4 == 1:
                    if character == first_letter:
                        first_spot = green
                    elif character == second_letter or character == third_letter or character == fourth_letter or character == fifth_letter:
                        first_spot = yellow
                    else:
                        first_spot = grey
                if count4 == 2:
                    if character == second_letter:
                        second_spot = green
                    elif character == first_letter or character == third_letter or character == fourth_letter or character == fifth_letter:
                        second_spot = yellow
                    else:
                        second_spot = grey
                if count4 == 3:
                    if character == third_letter:
                        third_spot = green
                    elif character == first_letter or character == second_letter or character == fourth_letter or character == fifth_letter:
                        third_spot = yellow
                    else:
                        third_spot = grey
                if count4 == 4:
                    if character == fourth_letter:
                        fourth_spot = green
                    elif character == first_letter or character == second_letter or character == third_letter or character == fifth_letter:
                        fourth_spot = yellow
                    else:
                        fourth_spot = grey
                if count4 == 5:
                    if character == fifth_letter:
                        fifth_spot = green
                    elif character == first_letter or character == second_letter or character == third_letter or character == fourth_letter:
                        fifth_spot = yellow
                    else:
                        fifth_spot = grey
                    mylist = first_spot + second_spot + third_spot + fourth_spot + fifth_spot
                    if guess != key:
                        print(mylist)
            for item in mylist:
                if attempt_count == 1:
                    list1 = mylist
                if attempt_count == 2:
                    list2 = mylist
                if attempt_count == 3:
                    list3 = mylist
                if attempt_count == 4:
                    list4 = mylist
                if attempt_count == 5:
                    list5 = mylist
                if attempt_count == 6:
                    list6 = mylist
        if count2 != 5:
            print(guess, "is not a five-letter word.")
        if attempt_count == 6 and guess != key:
            number_of_puzzles = number_of_puzzles + 1
            print(key)
            print("                                              ")
            print("Wordle", number_of_puzzles, "X/6")
            print("                                              ")
            print(list1)
            print(list2)
            print(list3)
            print(list4)
            print(list5)
            print(list6)
            print("                                              ")
            attempt_count = 0
            list1 = ""
            list2 = ""
            list3 = ""
            list4 = ""
            list5 = ""
            list6 = ""
            word = False
        if guess == key:
            number_of_puzzles = number_of_puzzles + 1
            print("                                              ")
            x = str(attempt_count)
            print("Wordle", number_of_puzzles, x + "/6")
            print("                                              ")
            print(list1)
            if attempt_count == 2:
                print(list2)
            if attempt_count == 3:
                print(list2)
                print(list3)
            if attempt_count == 4:
                print(list2)
                print(list3)
                print(list4)
            if attempt_count == 5:
                print(list2)
                print(list3)
                print(list4)
                print(list5)
            if attempt_count == 6:
                print(list2)
                print(list3)
                print(list4)
                print(list5)
                print(list6)
            print("                                              ")
            attempt_count = 0
            list1 = ""
            list2 = ""
            list3 = ""
            list4 = ""
            list5 = ""
            list6 = ""
            word = False
        count = 0
        count2 = 0
        count3 = 0
        count4 = 0