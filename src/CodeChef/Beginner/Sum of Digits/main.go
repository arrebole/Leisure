package main

import "fmt"

func sum(n int) int {
	count := 0
	for {
		if n <= 0 {
			break
		}
		count += n % 10
		n = n / 10
	}
	return count
}

func main() {
	var testCase int
	var temp int
	fmt.Scanf("%d\n", &testCase)
	for i := 0; i < testCase; i++ {
		fmt.Scanf("%d\n", &temp)
		fmt.Println(sum(temp))
	}

}
