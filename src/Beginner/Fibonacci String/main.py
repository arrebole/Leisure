
def handle():
    count = 0
    arrStr = []
    temp = ""
    strings = str(input())
    for char in strings:
        if count == 0:
            temp = char
            count += 1
        else:
            if temp == char:
                count += 1
                temp = char
            else:
                arrStr.append(count)
                count = 1
                temp = char

    return arrStr


def main():
    testCases = int(input())
    while(testCases > 0):
        print(handle())
        testCases -= 1


if __name__ == '__main__':
    main()
