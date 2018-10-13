package main

import (
	"fmt"
)

type people struct {
	count int
	score [3]int
}

func main() {

	var test int
	fmt.Scanf("%d\n", &test)

	for i := 0; i < test; i++ {
		var a, b, c people
		fmt.Scanf("%d %d %d\n", &(a.score[0]), &(a.score[1]), &(a.score[2]))
		fmt.Scanf("%d %d %d\n", &(b.score[0]), &(b.score[1]), &(b.score[2]))
		fmt.Scanf("%d %d %d\n", &(c.score[0]), &(c.score[1]), &(c.score[2]))

		for j := 0; j < 3; j++ {
			temp := a.score[j]
			if b.score[j] > a.score[j] {
				temp = b.score[j]
			}
			if c.score[j] > a.score[j] {
				temp = c.score[j]
			}

			if a.score[j] == temp {
				a.count++
			}
			if b.score[j] == temp {
				b.count++
			}
			if c.score[j] == temp {
				c.count++
			}

		}
		if a.count == 3 || b.count == 3 || c.count == 3 {
			if a.count != b.count && a.count != c.count && b.count != c.count {
				fmt.Println("yes")
			}
		} else {
			fmt.Println("no")
		}
	}

}
