package main

import (
	"fmt"
)

func main() {
	var testCases int
	fmt.Scanf("%d\n", &testCases)

	for i := 0; i < testCases; i++ {
		var numCupcakes int
		fmt.Scanf("%d\n", &numCupcakes)

		if numCupcakes == 2 {
			fmt.Println(numCupcakes)
		} else {
			fmt.Println(numCupcakes/2 + 1)
		}
	}
}
