
def main():
    test = int(input())
    for _ in range(test):
        flag = 0
        inArray = str(input())
        for i in range(7):
            if inArray[i] != inArray[i+1]:
                flag += 1
        if flag > 2:
            print("non-uniform")
        else:
            print("uniform")


if __name__ == '__main__':
    main()
