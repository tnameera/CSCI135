for i in range(0,2,1):
    print(i)

px = [7,1,4,5, 3]

print('-'*5)

for i in px:
    print(i)

print('-'*5)


result = -1

for j in range(1,len(px)):
    for i in range(j):
        print(i)
        diff =(px[j]-px[i])
        print(diff)
        if result < diff: 
            result = diff
        print('-'*3)

print(result)