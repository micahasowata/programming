package main

import "fmt"

func double(i int) int {
	return 2 * i
}

func main() {
	var ages [10]int

	for i := range len(ages) {
		ages[i] = double(i)
	}

	fmt.Printf("ages: %v\n", ages)
}
