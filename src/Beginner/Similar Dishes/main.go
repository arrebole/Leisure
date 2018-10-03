package main

import (
	"fmt"
)

func handle() string {
	var flag int
	var str1 [4]string
	var str2 [4]string
	fmt.Scanf("%s %s %s %s\n", &str1[0], &str1[1], &str1[2], &str1[3])
	fmt.Scanf("%s %s %s %s\n", &str2[0], &str2[1], &str2[2], &str2[3])
	for _, v1 := range str1 {
		for _, v2 := range str2 {
			if v1 == v2 {
				flag++
			}
			if flag > 1 {
				return "similar"
			}
		}
	}

	return "dissimilar"

}

func main() {
	var test int
	fmt.Scanf("%d\n", &test)
	for i := 0; i < test; i++ {
		fmt.Println(handle())
	}
}
