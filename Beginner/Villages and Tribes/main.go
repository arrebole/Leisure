package main

import (
	"fmt"
	"reflect"
)

func main() {
	var test int
	fmt.Scanf("%d\n", &test)

	for i := 0; i < test; i++ {
		var input string
		var temp rune
		var countA, countB, count int
		fmt.Scanf("%s\n", &input)

		for _, value := range input {

			fmt.Println(reflect.TypeOf(value).Name())
			if value == 'A' {
				countA++
				if temp == 'A' {
					countA += count
					count = 0
				} else {
					count = 0
				}
				temp = 'A'

			}
			if value == 'B' {
				countB++
				if temp == 'B' {
					countB += count
					count = 0
				} else {
					count = 0
				}
				temp = 'B'

			}
			if value == '.' {
				count++
			}
		}

		fmt.Printf("%d %d\n", countA, countB)

	}

}
