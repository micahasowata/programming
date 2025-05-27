package main

import "fmt"

func main() {
	var ages [10]int

	for i := range len(ages) {
		ages[i] = i * 2
	}

	fmt.Printf("ages: %v\n", ages)
}
