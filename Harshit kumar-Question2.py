for i in range(int(input())):
        word = input()
        x=word.upper()
        vowels = ['A','E','I','O','U']
        count = 0
        for j in range(1,len(word)):
            if x[j] in vowels[:]:
                if j == 0:
                    count +=1
                elif x[j] in vowels[:]:
                    count +=1

                else:
                    break

        print (count)