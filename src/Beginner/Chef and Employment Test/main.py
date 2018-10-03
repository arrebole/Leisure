
def handle():
    inputStr1 = str(input()).split()
    n, k = int(inputStr1[0]), int(inputStr1[1])
    inputStr2 = str(input()).split()
    newArray = [int(i) for i in inputStr2]
    newArray = sorted(newArray)
    for _ in range(k):
        newArray.append(9)
    print(newArray[len(newArray)//2])


def main():
    testCases = int(input())
    for _ in range(testCases):
        handle()


main()
