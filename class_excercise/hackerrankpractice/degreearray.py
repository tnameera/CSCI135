arr = [1,2,1,3,2]
countsDict = {}

def getCount(arr, x):
    count = 0
    for element in arr:
        if (element == x):
            count = count + 1
    return count

for num in arr:
    if not num in countsDict:
        countsDict[num] = getCount(arr=arr, x=num)

print(countsDict)