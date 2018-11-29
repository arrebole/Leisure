package main

import "fmt"

func reverse(num int) int {
	rev := 0
	for num > 0 {
		t := num % 10
		rev *= 10
		rev += t
		num /= 10
	}
	return rev
}

func main() {

	var n int
	fmt.Scanf("%d\n", &n)

	for i := 0; i < n; i++ {
		var input int
		fmt.Scanf("%d\n", &input)
		fmt.Println(reverse(input))
	}
}
