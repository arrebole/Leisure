
def main():
    test = int(input())
    for _ in range(test):
        handle()


def handle():
    maxGirl = []
    line = str(input()).split()
    N = int(line[0])
    K = int(line[1])

    girlArray = input().split()
    girlArray = [int(i) for i in girlArray]

    for i in range(N-K+1):
        maxGirl.append(sum(girlArray[i:i+K]))
    print(max(maxGirl))


if __name__ == '__main__':
    main()
