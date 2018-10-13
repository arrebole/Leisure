

def main():
    test = int(input())
    for _ in range(test):
        fingers = input().split(" ")
        glove = input().split(" ")
        for (finger, index) in fingers:
            print(finger)
            print(index)


if __name__ == '__main__':
    main()
