
class brand:
    def __init__(self, positive, negative):
        self.positive = positive
        self.negative = negative


def main():
    test = int(input())
    for _ in range(test):
        count = 0
        positive = str(input())
        negative = str(input())
        b1 = brand(positive[0], negative[0])
        b2 = brand(positive[1], negative[1])
        b3 = brand(positive[2], negative[2])

        p1 = b1.positive + b2.positive + b3.positive
        p2 = b1.negative + b2.negative + b3.negative

        p3 = b1.positive + b2.negative + b3.positive
        p4 = b1.negative + b2.positive + b3.negative

        p5 = b1.negative + b2.positive + b3.positive
        p6 = b1.positive + b2.negative + b3.negative

        p7 = b1.positive + b2.positive + b3.negative
        p8 = b1.negative + b2.negative + b3.positive

        handle = [p1, p2, p3, p4, p5, p6, p7, p8]

        for x in handle:
            if x == "bob" or x == "bbo" or x == "obb":
                count = 1
                print("yes")
                break
        if count == 0:
            print("no")


if __name__ == '__main__':
    main()
