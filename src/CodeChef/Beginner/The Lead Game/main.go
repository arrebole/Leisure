package main

import (
	"fmt"
)

func abs(a int) int {
	if a > 0 {
		return a
	}
	return -a
}

func main() {
	var n int
	fmt.Scanf("%d\n", &n)

	arr1 := make([]int, n)
	arr2 := make([]int, n)

	for i := 0; i < n; i++ {
		fmt.Scanf("%d %d\n", &arr1[i], &arr2[i])
	}

	var win, lead, max int
	for i := 0; i < n; i++ {
		lead += (arr1[i] - arr2[i])
		if abs(lead) > max {
			max = lead
		}
	}
	if max > 0 {
		win = 1
	} else {
		win = 2
		max = -max
	}
	fmt.Printf("%d %d\n", win, max)
}
