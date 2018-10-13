
def handle():
    inputStr = str(input()).split(" ")
    k = int(inputStr[1])
    inputStr = str(input()).split(" ")
    inputIntArray = [int(n) for n in inputStr]
    for i in inputIntArray:
        if (k-i)>=0:
            k = k-i
            print(1,end="")
        else:
            print(0,end="")
    print(end='\n')

def main():
    testCases = int(input())
    for _  in range(testCases):
        handle()

if __name__ == '__main__':
    main()