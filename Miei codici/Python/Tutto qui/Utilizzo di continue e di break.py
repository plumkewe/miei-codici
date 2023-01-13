for i in range(1,6):
    print()
    print('i =',i,' ',end='')
    print('hello, how ',end='')
    if i==3:
        continue
    print('are you today?',end='')
print()

#adesso utilizzero break al posto di continue

for i in range(1,6):
    print()
    print('i =',i,' ',end='')
    print('hello, how ',end='')
    if i==3:
        break
    print('are you today?',end='')
print()
