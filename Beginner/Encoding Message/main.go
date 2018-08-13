package main

import (
	"fmt"
)

func main() {

	var test int
	fmt.Scanf("%d\n", &test)

	for i := 0; i < test; i++ {
		var length int
		var str string
		fmt.Scanf("%d\n", &length)
		fmt.Scanf("%s\n", &str)
		fmt.Println(encoding([]byte(str), length))
	}
}

func encoding(str []byte, length int) string {
	num := length
	if length%2 != 0 {
		num--
	}

	for i := 0; i < num; i += 2 {
		str[i], str[i+1] = str[i+1], str[i]
	}

	for j := 0; j < length; j++ {
		str[j] = (122 - (str[j] - 97))

	}

	return string(str)
}
