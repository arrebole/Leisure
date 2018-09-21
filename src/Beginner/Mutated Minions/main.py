
def handle():
    count = 0
    newMinions = []
    nk = str(input()).split(" ")
    n, k = int(nk[0]), int(nk[1])
    minions = str(input()).split(" ")
    for i in range(n):
        newMinions.append(int(minions[i])+k)
    for value in newMinions:
        if value % 7 == 0:
            count += 1
    print(count)


def main():
    test = int(input())
    for _ in range(test):
        handle()


if __name__ == '__main__':
    main()
