
def factorial(n):
    res = 1
    for i in range(1, n + 1):
        res *= i
    return res


def main():
    n = int(input())
    for _ in range(n):
        temp = int(input())
        print(factorial(temp))


if __name__ == '__main__':
    main()
