package main

import "fmt"

func findMax(x ...int) int {
	max := 0

	for _, i := range x {
		if i > max {
			max = i
		}
	}

	return max
}

func main() {
	m := findMax(8, 5, 6, 3, 6, 12, 3, 4, 5)
	fmt.Println(m)
}
